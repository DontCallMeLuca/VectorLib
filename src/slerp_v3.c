#include "../include/vectorlib.h"

static ALWAYS_INLINE float clampf(float value, float lower, float upper)
{
	if (value < lower)
		return (lower);
	else if (value > upper)
		return (upper);

	return (value);
}

static ALWAYS_INLINE float absf(float x)
{
	return x < 0.0f ? -x : x;
}

vector3_t slerp_v3(vector3_t v1, vector3_t v2, float t)
{
	const float	theta	= acosf(clampf(dot_v3(v1, v2), -1.0f, 1.0f));
	const float	st		= sinf(theta);
	const float	coeff1	= sinf((1.0f - t) * theta) / st;
	const float	coeff2	= sinf(t * theta) / st;

	if (absf(st) < KEPSILON)
		return (lerp_v3(v1, v2, t));

	return (init_v3(coeff1 * v1.x + coeff2 * v2.x,
					coeff1 * v1.y + coeff2 * v2.y,
					coeff1 * v1.z + coeff2 * v2.z));
}
