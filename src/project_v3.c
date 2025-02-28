#include "../include/vectorlib.h"

vector3_t project_v3(vector3_t in_direction, vector3_t on_normal)
{
	const float	num	= dot_v3(on_normal, on_normal);
	const float	num2 = dot_v3(in_direction, on_normal);

	if (num < FLOAT_MIN_DENORMAL)
		return (in_direction);

	return (init_v3(on_normal.x * num2 / num,
					on_normal.y * num2 / num,
					on_normal.z * num2 / num));
}
