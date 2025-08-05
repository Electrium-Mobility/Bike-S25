static const char *TAG = "CYD_ESP32_LVGL_EEZ";
#include "esp_log.h"

// --------------------------------------------------------------------------
//
// --------------------------------------------------------------------------

#include <string.h>
#include <stdio.h>
#include <sys/time.h>               // struct timeval
#include <esp32/rom/rtc.h>          // rtc_get_wakeup_cause()

#include "freertos/FreeRTOS.h"      // xPortGetFreeHeapSize()
#include "freertos/task.h"          // vTaskList()
#include "freertos/event_groups.h"

#include "esp_chip_info.h"          // esp_chip_info_t
#include "esp_mac.h"                // esp_read_mac()
#include "esp_netif.h"              // IPSTR, IP2STR()
#include "esp_heap_caps.h"          // heap_caps_get_largest_free_block(), heap_caps_get_minimum_free_size()
#include "esp_private/esp_clk.h"    // esp_clk_cpu_freq()
#include "nvs_flash.h"              // nvs_flash_init()
#include "esp_flash.h"              // esp_flash_get_size()

#include "ui/vars.h"

// --------------------------------------------------------------------------
// Externals
// --------------------------------------------------------------------------

void appGui( void );

// --------------------------------------------------------------------------
// the main program
// --------------------------------------------------------------------------

void app_main( void )
{
   esp_err_t err = ESP_OK;


   // show welcome screen
   appGui();
}

// --------------------------------------------------------------------------
//
// --------------------------------------------------------------------------
