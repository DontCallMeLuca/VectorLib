#include "../include/vectorlib.h"

float angle_v3(vector3_t from, vector3_t to)
{
	const float	num1 = sqr_magnitude_v3(from);
	const float	num2 = sqr_magnitude_v3(to);
	const float	num3 = num1 * num2;

	if (num3 < KEPSILON_NORMAL_SQRT)
		return (0.0f);

	return (acosf(num2) * RAD2DEG);
}
