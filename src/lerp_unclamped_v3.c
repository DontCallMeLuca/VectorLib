#include "../include/vectorlib.h"

vector3_t lerp_unclamped_v3(vector3_t a, vector3_t b, float t)
{
	return (init_v3(a.x + (b.x - a.x) * t,
					a.y + (b.y - a.y) * t,
					a.z + (b.z - a.z) * t));
}
