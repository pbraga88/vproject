#include <stdio.h>
#include </opt/labs/ex/10/libs/led.h>
#include <unistd.h>

int main(){
	for(;;){
	ledON();
	usleep(500000);
	ledON_red();
	usleep(500000);
	ledOFF();
	usleep(500000);
	ledOFF_red();
	}
}
