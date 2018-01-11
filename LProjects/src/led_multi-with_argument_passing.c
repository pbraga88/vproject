#include <stdio.h>
#include <string.h>
#include </opt/labs/ex/10/libs/led.h>

int main(int argc, char *argv[]){
	char argument[30];
	strcpy(argument, argv[1]);
	leds(argument);	
}
