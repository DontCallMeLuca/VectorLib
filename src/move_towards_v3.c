#include "../include/vectorlib.h"

vector3_t move_towards_v3(vector3_t current, vector3_t target, float max_distance_delta)
{
	const float	num1 = target.x - current.x;
	const float	num2 = target.y - current.y;
	const float	num3 = target.z - current.z;

	const float	num4 =	(num1 * num1) + \
						(num2 * num2) + \
						(num3 * num3);

	const float	num5 = sqrtf(num4);

	if (num4 == 0.0f || ((max_distance_delta >= 0.0f) && (
		num4 <= (max_distance_delta * max_distance_delta))))
		return (target);

	return (init_v3(current.x + num1 / num5 * max_distance_delta,
					current.y + num2 / num5 * max_distance_delta,
					current.z + num3 / num5 * max_distance_delta));
}
