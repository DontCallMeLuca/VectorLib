#include "../include/vectorlib.h"

vector3_t aggregate_v3(vector3_t *vectors, size_t size, float t)
{
	vector3_t	result;
	vector3_t	interp;

	result = init_v3(0.0f, 0.0f, 0.0f);
	for (size_t i = 0; i < size - 1; ++i)
	{
		interp = lerp_v3(vectors[i - 1], vectors[i], t);
		result = add_v3(result, interp);
	}
	return (result);
}
