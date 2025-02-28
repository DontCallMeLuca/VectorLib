#include "../include/vectorlib.h"

vector3_t clamp_magnitude_v3(vector3_t v, float max_len)
{
	const float	num1 = sqr_magnitude_v3(v);
	const float	num2 = sqrtf(num1);
	const float	num3 = v.x / num2;
	const float	num4 = v.y / num2;
	const float	num5 = v.z / num2;

	if (num1 < max_len * max_len)
		return (v);

	return (init_v3(num3 * max_len, num4 * max_len, num5 * max_len));
}
