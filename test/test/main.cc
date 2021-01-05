#include "gnm.h"

GNM_USING_NAMESPACE

int main() {
  
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

  vec4 v0 = vec4(10.0f, 20.0f, 30.0f, 40.0f);
  vec4 v1 = vec4(10.0f, 20.0f, 30.0f, 40.0f);

  float d = distance(v0.xyz, VEC3_ZERO);

  return 0;
}