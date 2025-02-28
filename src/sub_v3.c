#include "../include/vectorlib.h"

vector3_t sub_v3(vector3_t a, vector3_t b)
{
	return (init_v3(a.x - b.x, a.y - b.y, a.z - b.z));
}
