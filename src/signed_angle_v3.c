#include "../include/vectorlib.h"

static ALWAYS_INLINE float signf(float x)
{
	if (x > 0.0f)
		return (1.0f);
	else if (x < 0.0f)
		return (-1.0f);
	
	return (0.0f);
}

float signed_angle_v3(vector3_t from, vector3_t to, vector3_t axis)
{
	const float	num1 = angle_v3(from, to);
	const float	num2 = from.y * to.z - from.z * to.y;
	const float	num3 = from.z * to.x - from.x * to.z;
	const float	num4 = from.x * to.y - from.y * to.x;

	return (num1 * signf((axis.x * num2) + (axis.y * num3) + (axis.z * num4)));
}
