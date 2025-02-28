#include "../include/vectorlib.h"

vector3_t conjugate_v3(vector3_t v)
{
	return (init_v3(-v.x, -v.y, -v.z));
}
