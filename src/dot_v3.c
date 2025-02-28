#include "../include/vectorlib.h"

float dot_v3(vector3_t a, vector3_t b)
{
	return ((a.x * b.x) + (a.y * b.y) + (a.z * b.z));
}
