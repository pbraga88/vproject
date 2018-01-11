#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include </opt/labs/ex/10/libs/printaqui.h>

#define PATHLED "/sys/class/leds/status_green/brightness"
#define PATHLED_RED "/sys/class/leds/status_red/brightness"


int FDesc;

char valueON = '1';
char valueOFF = '0';

int heartbeat()
{
//	printf("heartbeat\n");

	FDesc = open(PATHLED, O_WRONLY);
	for (;;){
		write(FDesc,&valueON,1);
		sleep(1);

		write(FDesc,&valueOFF,1);
	        usleep(100000);

        	write(FDesc,&valueON,1);
	        usleep(100000);

	        write(FDesc,&valueOFF,1);
	        usleep(100000);
		}
	close(FDesc);
	return 0;
}
int ledON(){
//	printf("led on\n");
	FDesc = open(PATHLED, O_WRONLY);
	write(FDesc,&valueON,1);
	close(FDesc);
	return 0;
}

int ledOFF(){
//	printf("led off\n");
        FDesc = open(PATHLED, O_WRONLY);
        write(FDesc,&valueOFF,1);
        close(FDesc);
        return 0;
}

// Led Red
int ledON_red(){
//        printf("led on RED\n");
        FDesc = open(PATHLED_RED, O_WRONLY);
        write(FDesc,&valueON,1);
        close(FDesc);
        return 0;
}

int ledOFF_red(){
//        printf("led off RED\n");
        FDesc = open(PATHLED_RED, O_WRONLY);
        write(FDesc,&valueOFF,1);
        close(FDesc);
	return 0;
}

// Call with argument passing
int leds(char *argumento){

        printf("%s\n", argumento);
        if (strcmp(argumento,"heartbeat") == 0){
                printf("Heart Beat\n");
		heartbeat();

        }
        else if (strcmp(argumento,"ledON") == 0){
                printf("Led ON\n");
		ledON();
        }
        else if (strcmp(argumento,"ledOFF") == 0){
                printf("Led OFF\n");
		ledOFF();
        }
        else{
                printf("Entrada invalida\n");
        }
	return 0;
}
