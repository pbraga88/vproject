#include <stdio.h>
#include </opt/labs/ex/10/libs/led.h>
#include <string.h>

int main(int argc, char *argv[]){
        char argument[30];
        strcpy(argument, argv[1]);
        printf("%s \n",argument);
        int argument_convert = atoi(argument); //Convert 'char' into 'int'
	switch(argument_convert){
		case 1:
			heartbeat();
			break;
		case 2:
			ledON();
			break;
		case 3:
			ledOFF();
			break;
		default:
			printf("invalid argument\n");
	}
	return 0;
}
