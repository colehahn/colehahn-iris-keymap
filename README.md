# colehahn-iris-keymap

This repo holds the description of my custom keyboard layout for my keyboard, which is a Keebio Iris Rev 5. \

To be used properly with QMK, this repository should be nested like so: `qmk_firmware\keyboards\keebio\iris\keymaps\colehahn`. \

## Cool features:

- Shift key is hold for shift, tap for caps_word, and double tap for caps lock
- leds indicate current layer
- shift + backspace = delete ([taken from here](https://github.com/qmk/qmk_firmware/blob/master/docs/feature_advanced_keycodes.md#user-content-shift--backspace-for-delete-idshift-backspace-for-delete))

## Things I want to add:

- scrolling for using mouse
- swap hands for when using mouse
- dynamic macros? have leds indicate when recording, etc
- save preferred color instead of swapping back to red

## How to flash to board:

- edit keymap
- open QMK MSYS and run `qmk compile`
  - note: i have configured defaults so that this is the shortcut version of the command
  - wait a few minutes (I'm on windows so I think this takes extra long)
  - this will produce a `.hex` file somewhere
- open QMK Toolbox and make sure that `.hex` is selected
  - disconnect halves
  - press button on keeb twice to enter flashing mode
  - click "flash" to send to board
  - repeat with other half
