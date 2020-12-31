#include "gnm.h"

GNM_USING_NAMESPACE

vec3 FresnelSchlick(float cosTheta, vec3 F0) {
  float reflectance = max(max(F0.r, F0.g), F0.b);
  vec3 F90 = vec3(clamp(reflectance * 25.0, 0.0, 1.0));
  return F0 + (F90 - F0) * pow(1.0 - cosTheta, 5.0);
}

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

  return 0;
}