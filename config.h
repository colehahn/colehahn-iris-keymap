#pragma once

#define TAPPING_TOGGLE 2         // tap layer button twice to toggle

#define RGBLIGHT_SLEEP           // rgb turn off when computer sleeps

#define TAPPING_TERM 175         // 175 ms between taps

// undefine some RGB animations to free up space: saved 1064 bytes
#undef RGBLIGHT_EFFECT_RAINBOW_MOOD
#undef RGBLIGHT_EFFECT_RAINBOW_SWIRL
#undef RGBLIGHT_EFFECT_SNAKE
#undef RGBLIGHT_EFFECT_CHRISTMAS
#undef RGBLIGHT_EFFECT_RGB_TEST
#undef RGBLIGHT_DEFAULT_MODE
#define RGBLIGHT_DEFAULT_MODE (RGBLIGHT_MODE_TWINKLE + 2)
