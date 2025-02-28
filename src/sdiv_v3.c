#include "../include/vectorlib.h"

vector3_t sdiv_v3(vector3_t v, float k)
{
	if (k == 0.0f)
		return (v);

	return (init_v3(v.x / k, v.y / k, v.z / k));
}
