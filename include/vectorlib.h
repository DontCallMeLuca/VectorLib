#ifndef __VECTOR_LIB_H
#define __VECTOR_LIB_H

#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <math.h>

# define DEG2RAD				0.01745329251994329576923690768489
# define RAD2DEG				57.2957795130823208767981548141050

#define FLOAT_MIN_NORMAL		1.17549435E-38f
#define FLOAT_MIN_DENORMAL		1.401298E-45f

#define KEPSILON				1.0E-05f
#define KEPSILON_NORMAL_SQRT	1.0E-15f

#if defined(_MSC_VER)
#define ALWAYS_INLINE __forceinline
#elif defined(__GNUC__) || defined(__clang__)
#define ALWAYS_INLINE inline __attribute__((always_inline))
#else
#define ALWAYS_INLINE inline
#endif

#ifdef __cplusplus

extern "C" {
#endif

typedef struct
{
	float	x;
	float	y;
	float	z;
}	vector3_t;

vector3_t	init_v3(float x, float y, float z);
vector3_t	add_v3(vector3_t a, vector3_t b);
vector3_t	sub_v3(vector3_t a, vector3_t b);
float		sum_v3(vector3_t v);
float		remains_v3(vector3_t v);
float		product_v3(vector3_t v);
float		mean_v3(vector3_t v);
vector3_t	scale_v3(vector3_t v, float k);
vector3_t	mul_v3(vector3_t a, vector3_t b);
vector3_t	div_v3(vector3_t a, vector3_t b);
vector3_t	sdiv_v3(vector3_t v, float k);
float		dot_v3(vector3_t a, vector3_t b);
float		sqr_magnitude_v3(vector3_t v);
float		magnitude_v3(vector3_t v);
vector3_t	normalize_v3(vector3_t v);
vector3_t	conjugate_v3(vector3_t v);
vector3_t	lerp_unclamped_v3(vector3_t a, vector3_t b, float t);
vector3_t	lerp_v3(vector3_t a, vector3_t b, float t);
vector3_t	move_towards_v3(vector3_t current, vector3_t target, float max_distance_delta);
vector3_t	cross_v3(vector3_t lhs, vector3_t rhs);
bool		equals_v3(vector3_t a, vector3_t b);
vector3_t	reflect_v3(vector3_t in_direction, vector3_t in_normal);
vector3_t	project_v3(vector3_t in_direction, vector3_t on_normal);
vector3_t	aggregate_v3(vector3_t *vectors, size_t size, float t);
float		angle_v3(vector3_t from, vector3_t to);
float		signed_angle_v3(vector3_t from, vector3_t to, vector3_t axis);
float		distance_v3(vector3_t a, vector3_t b);
vector3_t	clamp_magnitude_v3(vector3_t v, float max_len);
vector3_t	min_v3(vector3_t lhs, vector3_t rhs);
vector3_t	max_v3(vector3_t lhs, vector3_t rhs);
vector3_t	slerp_v3(vector3_t v1, vector3_t v2, float t);

#ifdef __cplusplus
}
#endif

#endif // __VECTOR_LIB_H
