#include "../include/vectorlib.h"

float distance_v3(vector3_t a, vector3_t b)
{
	const float	num1 = a.x - b.x;
	const float	num2 = a.y - b.y;
	const float	num3 = a.z - b.z;

	return (sqrtf((num1 * num1)
				+ (num2 * num2)
				+ (num3 * num3)));
}
