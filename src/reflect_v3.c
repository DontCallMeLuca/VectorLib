#include "../include/vectorlib.h"

vector3_t reflect_v3(vector3_t in_direction, vector3_t in_normal)
{
	const float	num = -2.0f * dot_v3(in_normal, in_direction);

	return (init_v3(num * in_normal.x + in_direction.x,
					num * in_normal.y + in_direction.y,
					num * in_normal.z + in_direction.z));
}
