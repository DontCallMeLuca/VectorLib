#include "../include/vectorlib.h"

static ALWAYS_INLINE float minf(float x, float y)
{
	return x < y ? x : y;
}

vector3_t min_v3(vector3_t lhs, vector3_t rhs)
{
	return (init_v3(minf(lhs.x, rhs.x),
					minf(lhs.y, rhs.y),
					minf(lhs.z, rhs.z)));
}
