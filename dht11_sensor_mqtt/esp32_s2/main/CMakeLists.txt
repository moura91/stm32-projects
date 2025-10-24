idf_component_register(SRCS "app_main.c"
                    REQUIRES esp_driver_uart esp_driver_gpio esp_event esp_netif esp_wifi mqtt nvs_flash
                    INCLUDE_DIRS ".")
