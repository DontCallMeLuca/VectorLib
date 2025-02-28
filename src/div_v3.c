#include "../include/vectorlib.h"

vector3_t div_v3(vector3_t a, vector3_t b)
{
	if ((!a.x || !b.x) ||
		(!a.y || !b.y) ||
		(!a.z || !b.z))
		return (a);

	return (init_v3(a.x / b.x, a.y / b.y, a.z / b.z));
}
