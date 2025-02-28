#include "../include/vectorlib.h"

static ALWAYS_INLINE float clampf_0_1(float x)
{
	if (x < 0.0f)
		return (0.0f);
	else if (x > 1.0f)
		return (1.0f);

	return (x);
}

vector3_t lerp_v3(vector3_t a, vector3_t b, float t)
{
	return (lerp_unclamped_v3(a, b, clampf_0_1(t)));
}
