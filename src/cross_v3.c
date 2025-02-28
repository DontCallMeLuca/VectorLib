#include "../include/vectorlib.h"

vector3_t cross_v3(vector3_t lhs, vector3_t rhs)
{
	return (init_v3(lhs.y * rhs.z - lhs.z * rhs.y,
					lhs.z * rhs.x - lhs.x * rhs.z,
					lhs.x * rhs.y - lhs.y * rhs.x));
}
