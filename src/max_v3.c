#include "../include/vectorlib.h"

static ALWAYS_INLINE float	maxf(float x, float y)
{
	return x > y ? x : y;
}

vector3_t max_v3(vector3_t lhs, vector3_t rhs)
{
	return (init_v3(maxf(lhs.x, rhs.x),
					maxf(lhs.y, rhs.y),
					maxf(lhs.z, rhs.z)));
}
