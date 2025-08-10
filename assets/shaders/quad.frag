#version 430 core

// INPUT
layout (location = 0) in vec2 textureCoordsIn;

// OUTPUT
layout (location = 0) out vec4 fragColor;

// BINDINGS
layout (location = 0) uniform sampler2D textureAtlas;

void main() {
  vec4 textureColor = texelFetch(textureAtlas, ivec2(textureCoordsIn), 0);

  if(textureColor.a == 0.0) {
    discard;
  }
  
  fragColor = textureColor;
}