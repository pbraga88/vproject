#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

//       int open(const char *pathname, int flags);

#define PATHLED "/sys/class/leds/ipe:green:usr1/brightness"

int main()
{
int FDesc;
char *valueON = '1';
char *valueOFF = '0';

FDesc = open(PATHLED, O_WRONLY);
while (1){
	write(FDesc,&valueON,1);
	sleep(1);

	write(FDesc,&valueOFF,1);
        sleep(1);
}
close(FDesc);
}

