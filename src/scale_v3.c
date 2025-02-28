#include "../include/vectorlib.h"

vector3_t scale_v3(vector3_t v, float k)
{
	return (init_v3(v.x * k, v.y * k, v.z * k));
}
