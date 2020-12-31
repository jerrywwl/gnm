# GNM (GLSL Native Mathematics)

GNM is a lightweight mathematics library which is C++ implementation followed [GLSL Specifications](https://www.khronos.org/registry/OpenGL/specs/gl/GLSLangSpec.4.60.html).

Features:
- Header only library
- Usages are in complete accord with GLSL
- Supports all types and operations for mathematics part of GLSL 
- Supports swizzle operation as GLSL
- Supports quaternion
- Any C++11 compiler
- Other features are in progress...

Example Code:

```GLSL
vec3 camera_pos(10.0f, 10.0f, 10.0f);
vec3 view_pos(0.0f);
vec3 normal(1.0f, 1.0f, 1.0f);

vec3 albedo = vec3(0.75f);
vec3 metallic = vec3(0.25f);

vec3 f0 = vec3(0.04);
vec3 diffuse = albedo * 0.96 * (1.0 - metallic);
vec3 specular = mix(f0, albedo, metallic);

vec3 v = normalize(camera_pos.xyz - view_pos.xyz);

float n_dot_v = clamp(abs(dot(normal, v)), 0.001f, 1.0f);
```

## Building

### Prerequisites  

- ``CMake`` 3.15 or later : http://www.cmake.org/cmake/resources/software.html

  Note: Add CMake to ${Path} environment variable.

### Windows
- Run <tt>build.bat</tt>, choose the selection to generate <tt>.sln</tt>
- Open <tt>.sln</tt> with Visual Studio, and building.
