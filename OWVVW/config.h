/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/

#define PERMISSIVE_HOLD

#define COMBO_TERM 70

#define USB_SUSPEND_WAKEUP_DELAY 0
#define NO_AUTO_SHIFT_ALPHA
#define CAPS_LOCK_STATUS
#define SERIAL_NUMBER "OWVVW/RjOgaP"
#define LAYER_STATE_16BIT
#define COMBO_COUNT 36
#define HSS(report) host_system_send(record->event.pressed ? report : 0); return false
#define HCS(report) host_consumer_send(record->event.pressed ? report : 0); return false

#define RGB_MATRIX_STARTUP_SPD 60

