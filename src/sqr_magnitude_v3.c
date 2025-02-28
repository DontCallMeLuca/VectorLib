#include "../include/vectorlib.h"

float sqr_magnitude_v3(vector3_t v)
{
	return ((v.x * v.x) + (v.y * v.y) + (v.z * v.z));
}
