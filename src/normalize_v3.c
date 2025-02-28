#include "../include/vectorlib.h"

vector3_t normalize_v3(vector3_t v)
{
	const float	magnitude = magnitude_v3(v);

	if (magnitude > KEPSILON)
		return (sdiv_v3(v, magnitude));

	return (init_v3(0.0f, 0.0f, 0.0f));
}
