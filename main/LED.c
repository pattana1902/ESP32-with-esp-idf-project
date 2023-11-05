/*
 * LED.c
 *
 *  Created on: 5 พ.ย. 2566
 *      Author: Pattanasak
 */
#include "driver/gpio.h"

extern gpio_num_t LED1;
extern gpio_num_t LED2;
extern gpio_num_t LED3;
extern gpio_num_t LED4;
extern gpio_num_t LED5;
extern gpio_num_t LED6;
extern gpio_num_t LED7;
extern gpio_num_t LED8;

void LED_Initial() {
	gpio_set_direction(LED1, GPIO_MODE_OUTPUT);
	gpio_set_direction(LED2, GPIO_MODE_OUTPUT);
	gpio_set_direction(LED3, GPIO_MODE_OUTPUT);
	gpio_set_direction(LED4, GPIO_MODE_OUTPUT);
	gpio_set_direction(LED5, GPIO_MODE_OUTPUT);
	gpio_set_direction(LED6, GPIO_MODE_OUTPUT);
	gpio_set_direction(LED7, GPIO_MODE_OUTPUT);
	gpio_set_direction(LED8, GPIO_MODE_OUTPUT);
}

void LED1_On() {
	gpio_set_level(LED1, 1);
}

void LED2_On() {
	gpio_set_level(LED2, 1);
}

void LED3_On() {
	gpio_set_level(LED3, 1);
}

void LED4_On() {
	gpio_set_level(LED4, 1);
}

void LED5_On() {
	gpio_set_level(LED5, 1);
}

void LED6_On() {
	gpio_set_level(LED6, 1);
}

void LED7_On() {
	gpio_set_level(LED7, 1);
}

void LED8_On() {
	gpio_set_level(LED8, 1);
}

void LED1_Off() {
	gpio_set_level(LED1, 0);
}

void LED2_Off() {
	gpio_set_level(LED2, 0);
}

void LED3_Off() {
	gpio_set_level(LED3, 0);
}

void LED4_Off() {
	gpio_set_level(LED4, 0);
}

void LED5_Off() {
	gpio_set_level(LED5, 0);
}

void LED6_Off() {
	gpio_set_level(LED6, 0);
}

void LED7_Off() {
	gpio_set_level(LED7, 0);
}

void LED8_Off() {
	gpio_set_level(LED8, 0);
}



