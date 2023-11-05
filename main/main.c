#include <unistd.h>
#include "driver/gpio.h"
#include "LED.h"

const gpio_num_t LED1 = GPIO_NUM_23;
const gpio_num_t LED2 = GPIO_NUM_22;
const gpio_num_t LED3 = GPIO_NUM_1;
const gpio_num_t LED4 = GPIO_NUM_3;
const gpio_num_t LED5 = GPIO_NUM_21;
const gpio_num_t LED6 = GPIO_NUM_19;
const gpio_num_t LED7 = GPIO_NUM_18;
const gpio_num_t LED8 = GPIO_NUM_5;


void app_main(void) {
	LED_Initial();
	while (true) {
		LED1_On();
		usleep(500000);
		LED1_Off();
		LED2_On();
		usleep(500000);
		LED2_Off();
		LED3_On();
		usleep(500000);
		LED3_Off();
		LED4_On();
		usleep(500000);
		LED4_Off();
		LED5_On();
		usleep(500000);
		LED5_Off();
		LED6_On();
		usleep(500000);
		LED6_Off();
		LED7_On();
		usleep(500000);
		LED7_Off();
		LED8_On();
		usleep(500000);
		LED8_Off();
		usleep(500000);
	}
}
