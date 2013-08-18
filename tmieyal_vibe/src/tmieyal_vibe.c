#include "pebble_os.h"
#include "pebble_app.h"
#include "pebble_fonts.h"


#define MY_UUID { 0xF5, 0x28, 0x34, 0x59, 0x78, 0xEF, 0x4F, 0x6F, 0x94, 0xF6, 0x23, 0x3C, 0xF2, 0xE1, 0x5B, 0x38 }
PBL_APP_INFO(MY_UUID,
             "Template App", "Your Company",
             1, 0, /* App version */
             DEFAULT_MENU_ICON,
             APP_INFO_STANDARD_APP);

Window window;


void handle_init(AppContextRef ctx) {

  window_init(&window, "Window Name");
  window_stack_push(&window, true /* Animated */);
}


void pbl_main(void *params) {
  PebbleAppHandlers handlers = {
    .init_handler = &handle_init
  };
  app_event_loop(params, &handlers);
}
