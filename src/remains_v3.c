#include "../include/vectorlib.h"

float remains_v3(vector3_t v)
{
	return ((float)v.x - v.y - v.z);
}
