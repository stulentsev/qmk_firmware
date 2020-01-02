#ifndef USERSPACE
#define USERSPACE

#ifdef TAP_DANCE_ENABLE
    #include "tap_dances.h"
#endif

/* Define layer names */
enum userspace_layers {
    _NORMAN = 0,
    _FUNCTIONS_AND_PUNCTUATION,
    _MOUSE_AND_CURSOR_MOVEMENT,
    _QWERTY,
    _DIABLO,
};

#include "quantum.h"

void my_custom_function(void);

#ifdef TAPPING_TERM
#   undef TAPPING_TERM
#endif // TAPPING_TERM
#if defined(KEYBOARD_ergodox_ez)
#   define TAPPING_TERM 185
#endif

#ifdef TAP_DANCE_ENABLE
#   define KC_D3_1 TD(TD_D3_1)
#   define KC_D3_2 TD(TD_D3_2)
#   define KC_D3_3 TD(TD_D3_3)
#   define KC_D3_4 TD(TD_D3_4)
#else // TAP_DANCE_ENABLE
#   define KC_D3_1 KC_1
#   define KC_D3_2 KC_2
#   define KC_D3_3 KC_3
#   define KC_D3_4 KC_4
#endif // TAP_DANCE_ENABLE


#endif
