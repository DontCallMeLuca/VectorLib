#include "../include/vectorlib.h"

float magnitude_v3(vector3_t v)
{
	return (sqrtf(sqr_magnitude_v3(v)));
}
