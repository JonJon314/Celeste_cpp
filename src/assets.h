#pragma once

#include "engine_lib.h"

// ################################
// Assets Constants
// ################################



// ################################
// Assets Structs
// ################################
enum SpriteID {
    SPRITE_SWORD,
    SPRITE_COUNT
};

struct Sprite {
    IVec2 atlasOffset;
    IVec2 spriteSize;
};


// ################################
// Assets Functions
// ################################
Sprite get_sprite(SpriteID spriteID) {
    Sprite sprite = {};

    switch(spriteID) {
        case SPRITE_SWORD: {
            sprite.atlasOffset = {0, 0};
            sprite.spriteSize = {16, 16};
        }
    }

    return sprite;
}