#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include </opt/labs/ex/10/libs/printaqui.h>

#define PATHLED "/sys/class/leds/status_green/brightness"


int main()
{
int FDesc;
char valueON = '1';
char valueOFF = '0';

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

	print();
	}
close(FDesc);
}

