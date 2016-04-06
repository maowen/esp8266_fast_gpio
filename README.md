# esp8266_fast_gpio
Collection of Macros for ESP8266 GPIO init, input, and output that provides 6x performance improvement over the SDK GPIO API

The ESP8266 SDK provides an API for configuring and interfacing the device GPIOs for I/O. The SDK Programming Guide provides the following examples:

```c
/* SDK GPIO pin muxing and init */
#include <gpio.h>

...

gpio_init(); /* Required init call */
gpio_output_set(0, 0, BIT12, 0); /* Configure GPIO12 as output */
gpio_output_set(BIT12, 0, 0, 0); /* Set GPIO12 high */
gpio_output_set(0, BIT12, 0, 0); /* Set GPIO12 low */
gpio_output_set(0, 0, 0, BIT12); /* Set GPIO12 as input */
uint8_t in = GPIO_INPUT_GET(BIT12); /* Get the level status of GPIO12 */
```

All of these calls have significant overhead. Fast, direct register manipulation can easily accomplish the same tasks and provides ~6x performance improvement. Here's an example:

```c
#include "fast_gpio."

...

gpio_init(); /* Required init call */

GPIO12_OUTPUT_SET; /* Configure GPIO12 as output */
GPIO12_H; /* Set GPIO12 high */
GPIO12_L; /* Set GPIO12 low */
GPIO12_INPUT_SET; /* Set GPIO12 as input */
uint8_t in = GPIO12_IN;
```

Please note, Pins 6-8 and 11 are not configurable as GPIOs. Also, GPIO16 does not have a pull-up avaiable
