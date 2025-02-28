<h1 align="center">✨ Vector Math Library ✨</h1>

<h6 align="center"><em>Efficient and lightweight C library for vector math</em></h6>

## 📝 Overview

This lightweight Vector Math Library provides a comprehensive set of functions for 3D vector operations. It's designed with efficiency in mind. The library offers essential vector operations crucial for graphics programming, physics simulations, and computational geometry.

## ✨ Features

- **Complete 3D Vector Operations:** Addition, subtraction, multiplication, division, and more
- **Geometric Transformations:** Normalization, reflection, projection, and interpolation
- **Angular Measurements:** Calculate angles between vectors in both signed and unsigned formats
- **Cross-Platform Compatibility:** Works on Windows, macOS, and Linux
- **C99 Compatible:** Written in standard C for maximum compatibility
- **No External Dependencies:** Only requires standard C libraries
- **No Heap Usage:** Only uses stack memory

## 🛠 Requirements

- C99 compatible compiler
- Make

## 🚀 Installation

1. Clone the repository
2. Run the `make` command
3. Link `vectorlib.a` to your project
4. Include the header in your source files:

```cpp
#include "vectorlib.h"
```

## 💻 Usage

### Basic

```c
// Create two vectors
vector3_t v1 = init_v3(1.0f, 2.0f, 3.0f);
vector3_t v2 = init_v3(4.0f, 5.0f, 6.0f);

// Addition
vector3_t sum = add_v3(v1, v2);

// Dot product
float dot = dot_v3(v1, v2);

// Normalization
vector3_t normalized = normalize_v3(v1); 

// Cross product
vector3_t cross = cross_v3(v1, v2);
```

### 🌐 API

#### `vector3_t init_v3(float x, float y, float z)`

**Description:**  
Initializes a 3D vector with given components.

**Parameters:**  
- `x` - X component of the vector
- `y` - Y component of the vector
- `z` - Z component of the vector

**Returns:**  
A new vector3_t with the specified components.

**Mathematical basis:**

```math
\mathbf{v} =
\begin{bmatrix} 
x \\ 
y \\ 
z 
\end{bmatrix} \in \mathbb{R}^3
```

---

#### `vector3_t add_v3(vector3_t a, vector3_t b)`

**Description:**  
Adds two vectors component-wise.

**Parameters:**  
- `a` - First vector
- `b` - Second vector

**Returns:**  
A new vector representing the sum of the two input vectors.

**Mathematical basis:**  

```math
\mathbf{a} + \mathbf{b} =
\begin{bmatrix} 
a_1 \\ 
a_2 \\ 
a_3 
\end{bmatrix} +
\begin{bmatrix} 
b_1 \\ 
b_2 \\ 
b_3 
\end{bmatrix} =
\begin{bmatrix} 
a_1 + b_1 \\ 
a_2 + b_2 \\ 
a_3 + b_3 
\end{bmatrix}
```

---

#### `vector3_t sub_v3(vector3_t a, vector3_t b)`

**Description:**  
Subtracts vector b from vector a.

**Parameters:**  
- `a` - Vector to subtract from
- `b` - Vector to subtract

**Returns:**  
A new vector representing the difference of the two input vectors.

**Mathematical basis:**  

```math
\mathbf{a} - \mathbf{b} =
\begin{bmatrix} 
a_1 \\ 
a_2 \\ 
a_3 
\end{bmatrix} -
\begin{bmatrix} 
b_1 \\ 
b_2 \\ 
b_3 
\end{bmatrix} =
\begin{bmatrix} 
a_1 - b_1 \\ 
a_2 - b_2 \\ 
a_3 - b_3 
\end{bmatrix}
```

---

#### `float sum_v3(vector3_t v)`

**Description:**  
Returns the sum of all components of the vector.

**Parameters:**  
- `v` - Input vector

**Returns:**  
Float value representing the sum of all vector components.

**Mathematical basis:**

```math
\sum (\mathbf{v}) =
\begin{bmatrix} 
v_1 \\ 
v_2 \\ 
v_3 
\end{bmatrix}
\rightarrow v_1 + v_2 + v_3
```

---

#### `float remains_v3(vector3_t v)`

**Description:**  
Returns the result of subtracting consecutive components.

**Parameters:**  
- `v` - Input vector

**Returns:**  
Float value representing the remainder after subtracting components.

**Mathematical basis:**

```math
\text{remains}(\mathbf{v}) =
\begin{bmatrix} 
v_1 \\ 
v_2 \\ 
v_3 
\end{bmatrix}
\rightarrow v_1 - v_2 - v_3
```

---

#### `float product_v3(vector3_t v)`

**Description:**  
Returns the product of all components.

**Parameters:**  
- `v` - Input vector

**Returns:**  
Float value representing the product of all vector components.

**Mathematical basis:**  

```math
\text{product}(\mathbf{v}) =
\begin{bmatrix} 
v_1 \\ 
v_2 \\ 
v_3 
\end{bmatrix}
\rightarrow v_1 \times v_2 \times v_3
```

---

#### `float mean_v3(vector3_t v)`

**Description:**  
Returns the arithmetic mean of all components.

**Parameters:**  
- `v` - Input vector

**Returns:**  
Float value representing the arithmetic mean of all vector components.

**Mathematical basis:**  

```math
\text{mean}(\mathbf{v}) =
\frac{1}{3} \left(
\begin{bmatrix} 
v_1 \\ 
v_2 \\ 
v_3 
\end{bmatrix}
\right)
\rightarrow \frac{v_1 + v_2 + v_3}{3}
```

---

#### `vector3_t scale_v3(vector3_t v, float k)`

**Description:**  
Scales vector by a scalar value.

**Parameters:**  
- `v` - Vector to scale
- `k` - Scalar value

**Returns:**  
A new vector with each component multiplied by k.

**Mathematical basis:**  

```math
k\mathbf{v} =
k \begin{bmatrix} 
v_1 \\ 
v_2 \\ 
v_3 
\end{bmatrix}
=
\begin{bmatrix} 
k \cdot v_1 \\ 
k \cdot v_2 \\ 
k \cdot v_3 
\end{bmatrix}
```

---

#### `vector3_t mul_v3(vector3_t a, vector3_t b)`

**Description:**  
Multiplies vectors component-wise (Hadamard product).

**Parameters:**  
- `a` - First vector
- `b` - Second vector

**Returns:**  
A new vector with component-wise multiplication results.

**Mathematical basis:**  

```math
\mathbf{a} \odot \mathbf{b} =
\begin{bmatrix} 
a_1 \\ 
a_2 \\ 
a_3 
\end{bmatrix} \odot
\begin{bmatrix} 
b_1 \\ 
b_2 \\ 
b_3 
\end{bmatrix}
=
\begin{bmatrix} 
a_1 \cdot b_1 \\ 
a_2 \cdot b_2 \\ 
a_3 \cdot b_3 
\end{bmatrix}
```

---

#### `vector3_t div_v3(vector3_t a, vector3_t b)`

**Description:**  
Divides vector a by vector b component-wise.

**Parameters:**  
- `a` - Numerator vector
- `b` - Denominator vector

**Returns:**  
A new vector with component-wise division results.

**Mathematical basis:**  

```math
\mathbf{a} \oslash \mathbf{b} =
\begin{bmatrix} 
a_1 \\ 
a_2 \\ 
a_3 
\end{bmatrix} \oslash
\begin{bmatrix} 
b_1 \\ 
b_2 \\ 
b_3 
\end{bmatrix}
=
\begin{bmatrix} 
\frac{a_1}{b_1} \\ 
\frac{a_2}{b_2} \\ 
\frac{a_3}{b_3} 
\end{bmatrix}
```

---

#### `vector3_t sdiv_v3(vector3_t v, float k)`

**Description:**  
Divides vector by a scalar value.

**Parameters:**  
- `v` - Vector to divide
- `k` - Scalar divisor

**Returns:**  
A new vector with each component divided by k.

**Mathematical basis:**  

```math
\frac{\mathbf{v}}{k} =
\frac{1}{k} \begin{bmatrix} 
v_1 \\ 
v_2 \\ 
v_3 
\end{bmatrix}
=
\begin{bmatrix} 
\frac{v_1}{k} \\ 
\frac{v_2}{k} \\ 
\frac{v_3}{k} 
\end{bmatrix}
```

---

#### `float dot_v3(vector3_t a, vector3_t b)`

**Description:**  
Calculates dot product of two vectors.

**Parameters:**  
- `a` - First vector
- `b` - Second vector

**Returns:**  
Float value representing the dot product.

**Mathematical basis:**  

```math
\mathbf{a} \cdot \mathbf{b} =
\begin{bmatrix} 
a_1 \\ 
a_2 \\ 
a_3 
\end{bmatrix} \cdot
\begin{bmatrix} 
b_1 \\ 
b_2 \\ 
b_3 
\end{bmatrix}
= a_1 \cdot b_1 + a_2 \cdot b_2 + a_3 \cdot b_3
```

---

#### `float sqr_magnitude_v3(vector3_t v)`

**Description:**  
Calculates squared magnitude of vector.

**Parameters:**  
- `v` - Input vector

**Returns:**  
Float value representing the squared magnitude.

**Mathematical basis:**  

```math
|\mathbf{v}|^2 =
\begin{bmatrix} 
v_1 \\ 
v_2 \\ 
v_3 
\end{bmatrix}^2
= v_1^2 + v_2^2 + v_3^2
```

---

#### `float magnitude_v3(vector3_t v)`

**Description:**  
Calculates magnitude (length) of vector.

**Parameters:**  
- `v` - Input vector

**Returns:**  
Float value representing the magnitude.

**Mathematical basis:**  

```math
|\mathbf{v}| =
\sqrt{
\begin{bmatrix} 
v_1 \\ 
v_2 \\ 
v_3 
\end{bmatrix}^2
} = \sqrt{v_1^2 + v_2^2 + v_3^2}
```

---

#### `vector3_t normalize_v3(vector3_t v)`

**Description:**  
Returns normalized vector (unit vector in same direction).

**Parameters:**  
- `v` - Vector to normalize

**Returns:**  
A new unit vector with the same direction as the input.

**Mathematical basis:**  

```math
\hat{\mathbf{v}} = \frac{\mathbf{v}}{|\mathbf{v}|} = \frac{1}{\sqrt{v_1^2 + v_2^2 + v_3^2}} 
\begin{bmatrix} 
v_1 \\ 
v_2 \\ 
v_3 
\end{bmatrix}
```

---

#### `vector3_t conjugate_v3(vector3_t v)`

**Description:**  
Returns conjugate of vector (negates y and z components).

**Parameters:**  
- `v` - Input vector

**Returns:**  
A new vector with the conjugate of the input.

**Mathematical basis:**  

```math
\text{conj}(\mathbf{v}) =
\begin{bmatrix} 
-v_1 \\ 
-v_2 \\ 
-v_3 
\end{bmatrix}
```

---

#### `vector3_t lerp_unclamped_v3(vector3_t a, vector3_t b, float t)`

**Description:**  
Linear interpolation between vectors (t not clamped).

**Parameters:**  
- `a` - Start vector
- `b` - End vector
- `t` - Interpolation parameter (unclamped)

**Returns:**  
A new vector representing the interpolation between a and b.

**Mathematical basis:**

```math
\text{lerp\_unclamped\_v3}(\mathbf{a}, \mathbf{b}, t) = 
\begin{bmatrix} 
a_x \\ 
a_y \\ 
a_z 
\end{bmatrix}
+ t \cdot 
\left( 
\begin{bmatrix} 
b_x \\ 
b_y \\ 
b_z 
\end{bmatrix} - 
\begin{bmatrix} 
a_x \\ 
a_y \\ 
a_z 
\end{bmatrix}
\right)
```

---

#### `vector3_t lerp_v3(vector3_t a, vector3_t b, float t)`

**Description:**  
Linear interpolation between vectors (t clamped to [0,1]).

**Parameters:**  
- `a` - Start vector
- `b` - End vector
- `t` - Interpolation parameter (clamped to [0,1])

**Returns:**  
A new vector representing the clamped interpolation between a and b.

**Mathematical basis:**  

```math
\text{clampf\_0\_1}(t) =
\begin{cases}
0.0 & \text{if } t < 0.0 \\
1.0 & \text{if } t > 1.0 \\
t & \text{otherwise}
\end{cases}\\
\text{lerp\_v3}(\mathbf{a}, \mathbf{b}, t) = 
\begin{bmatrix} 
a_x \\ 
a_y \\ 
a_z 
\end{bmatrix}
+ \text{clampf\_0\_1}(t) \cdot 
\left( 
\begin{bmatrix} 
b_x \\ 
b_y \\ 
b_z 
\end{bmatrix} - 
\begin{bmatrix} 
a_x \\ 
a_y \\ 
a_z 
\end{bmatrix}
\right)
```

---

#### `vector3_t move_towards_v3(vector3_t current, vector3_t target, float max_distance_delta)`

**Description:**  
Moves vector towards target with maximum step size.

**Parameters:**  
- `current` - Current position vector
- `target` - Target position vector
- `max_distance_delta` - Maximum movement distance

**Returns:**  
A new vector representing the moved position.

**Mathematical basis:**  

```math
\text{move\_towards\_v3}(\mathbf{p}, \mathbf{q}, d) =
\begin{cases}
\mathbf{q} & \text{if } \left( \mathbf{p} = \mathbf{q} \right) \text{ or } \left( d \geq 0.0 \text{ and } \left( \left\| \mathbf{q} - \mathbf{p} \right\| \leq d \right)^2 \right) \\
\mathbf{p} + \frac{(\mathbf{q} - \mathbf{p})}{\left\| \mathbf{q} - \mathbf{p} \right\|} \cdot d & \text{otherwise}
\end{cases}

\mathbf{p} = 
\begin{bmatrix} 
p_x \\ 
p_y \\ 
p_z 
\end{bmatrix}
, \quad
\mathbf{q} = 
\begin{bmatrix} 
q_x \\ 
q_y \\ 
q_z 
\end{bmatrix}
```

---

#### `vector3_t cross_v3(vector3_t lhs, vector3_t rhs)`

**Description:**  
Calculates cross product of two vectors.

**Parameters:**  
- `lhs` - Left-hand side vector
- `rhs` - Right-hand side vector

**Returns:**  
A new vector representing the cross product.

**Mathematical basis:**  

```math
\mathbf{a} \times \mathbf{b} =
\begin{bmatrix}
a_2 \cdot b_3 - a_3 \cdot b_2 \\
a_3 \cdot b_1 - a_1 \cdot b_3 \\
a_1 \cdot b_2 - a_2 \cdot b_1
\end{bmatrix}
```

---

#### `bool equals_v3(vector3_t a, vector3_t b)`

**Description:**  
Checks if vectors are approximately equal (within epsilon).

**Parameters:**  
- `a` - First vector
- `b` - Second vector

**Returns:**  
Boolean value indicating whether the vectors are approximately equal.

**Mathematical basis:**  

```math
| \mathbf{a} - \mathbf{b} | < \epsilon
```

---

#### `vector3_t reflect_v3(vector3_t in_direction, vector3_t in_normal)`

**Description:**  
Reflects vector around a normal vector.

**Parameters:**  
- `in_direction` - Direction vector to reflect
- `in_normal` - Normal vector to reflect around (should be normalized)

**Returns:**  
A new vector representing the reflected direction.

**Mathematical basis:**  

```math
\text{reflect}(\mathbf{v}, \mathbf{n}) = \mathbf{v} + 2 \left( - \mathbf{v} \cdot \mathbf{n} \right) \mathbf{n}
```

---

#### `vector3_t project_v3(vector3_t in_direction, vector3_t on_normal)`

**Description:**  
Projects vector onto another vector.

**Parameters:**  
- `in_direction` - Vector to project
- `on_normal` - Vector to project onto (should be normalized)

**Returns:**  
A new vector representing the projection.

**Mathematical basis:**  

```math
\text{project}_{\mathbf{b}}(\mathbf{a}) = \frac{\mathbf{a} \cdot \mathbf{b}}{|\mathbf{b}|^2} \mathbf{b}
```

---

#### `vector3_t aggregate_v3(vector3_t *vectors, size_t size, float t)`

**Description:**
Weighted aggregation of multiple vectors.

**Parameters:**
- `vectors` - Array of vectors
- `size` - Size of the array
- `t` - Weight parameter

**Returns:**
A new vector representing the weighted aggregation.

**Mathematical basis:**

```math
\frac{\sum_i \left( t^i \cdot \mathbf{v}_i \right)}{\sum_i t^i}
```

---

#### `float angle_v3(vector3_t from, vector3_t to)`

**Description:**  
Calculates angle between vectors in radians.

**Parameters:**  
- `from` - First vector
- `to` - Second vector

**Returns:**  
Float value representing the angle in radians.

**Mathematical basis:**  

```math
\theta = \arccos \left( \frac{\mathbf{a} \cdot \mathbf{b}}{|\mathbf{a}| \cdot |\mathbf{b}|} \right)
```

---

#### `float signed_angle_v3(vector3_t from, vector3_t to, vector3_t axis)`

**Description:**  
Calculates signed angle between vectors in radians, using axis to determine sign.

**Parameters:**  
- `from` - First vector
- `to` - Second vector
- `axis` - Reference axis for determining sign

**Returns:**  
Float value representing the signed angle in radians.

**Mathematical basis:**  

```math
\text{sign} \left( (\mathbf{a} \times \mathbf{b}) \cdot \text{axis} \right) \cdot \arccos \left( \frac{\mathbf{a} \cdot \mathbf{b}}{|\mathbf{a}| \cdot |\mathbf{b}|} \right)
```

---

#### `float distance_v3(vector3_t a, vector3_t b)`

**Description:**  
Calculates distance between two points/vectors.

**Parameters:**  
- `a` - First point/vector
- `b` - Second point/vector

**Returns:**  
Float value representing the distance.

**Mathematical basis:**  

```math
|\mathbf{b} - \mathbf{a}| = \sqrt{(b_1 - a_1)^2 + (b_2 - a_2)^2 + (b_3 - a_3)^2}
```

---

#### `vector3_t clamp_magnitude_v3(vector3_t v, float max_len)`

**Description:**  
Clamps vector magnitude to maximum length.

**Parameters:**  
- `v` - Vector to clamp
- `max_len` - Maximum allowed magnitude

**Returns:**  
A new vector with magnitude clamped to max_len.

**Mathematical basis:**  

```math
\mathbf{v} \cdot \min\left( \frac{\text{max\_len}}{|\mathbf{v}|}, 1 \right)
```

---

#### `vector3_t min_v3(vector3_t lhs, vector3_t rhs)`

**Description:**  
Creates vector with component-wise minimum values.

**Parameters:**  
- `lhs` - First vector
- `rhs` - Second vector

**Returns:**  
A new vector with the minimum value for each component.

**Mathematical basis:**  

```math
\min(\mathbf{a}, \mathbf{b}) = \left( \min(a_1, b_1), \min(a_2, b_2), \min(a_3, b_3) \right)
```

---

#### `vector3_t max_v3(vector3_t lhs, vector3_t rhs)`

**Description:**  
Creates vector with component-wise maximum values.

**Parameters:**  
- `lhs` - First vector
- `rhs` - Second vector

**Returns:**  
A new vector with the maximum value for each component.

**Mathematical basis:**  

```math
\max(\mathbf{a}, \mathbf{b}) = \left( \max(a_1, b_1), \max(a_2, b_2), \max(a_3, b_3) \right)
```

---

#### `vector3_t slerp_v3(vector3_t v1, vector3_t v2, float t)`

**Description:**  
Spherical linear interpolation between vectors.

**Parameters:**  
- `v1` - Start vector
- `v2` - End vector
- `t` - Interpolation parameter (typically in [0,1])

**Returns:**  
A new vector representing the spherical interpolation between v1 and v2.

**Mathematical basis:**  

```math
\frac{\sin\left((1 - t) \theta \right)}{\sin(\theta)} \cdot \mathbf{v_1} + \frac{\sin(t \theta)}{\sin(\theta)} \cdot \mathbf{v_2}
```

### ⭐ Best Practices

- Don't optimize beyond `-O3`, this will make the compiler ignore critical IEEE floating point rules.
- Normalize vectors before performing direction-sensitive operations
- Use `sqr_magnitude_v3()` instead of `magnitude_v3()` when possible to avoid square root operations
- For performance-critical code, consider inlining functions in your own code
- Watch for division by zero in operations like normalization with zero-length vectors
- When doing multiple vector operations in sequence, try to minimize creating temporary variables

## ⚠ Limitations
- Currently only supports 3D vectors
- Uses float precision, which may have accuracy limitations

## ✨ Future Improvements

- Vector2 implementation
- Vector4 implementation
- Quaternion implementation

## 📃 License
This project uses the `GNU GENERAL PUBLIC LICENSE v3.0` license
<br>
For more info, please find the `LICENSE` file here: [License](LICENSE)
