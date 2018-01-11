#include <stdio.h>
#include <string.h>

int leds(char *argumento){
//	char arg_comp = argumento;	

	printf("%s\n", argumento);
	if (strcmp(argumento,"heartbeat") == 0){
		printf("Heart Beat\n");
	}
	else if (strcmp(argumento,"ledON") == 0){
		printf("Led ON\n");
	}
	else if (strcmp(argumento,"ledOFF") == 0){
		printf("Led OFF\n");
	}
	else{
		printf("Entrada invalida\n");
	}
	
}

int main(int argc, char *argv[]){
	char argument[30];
	strcpy(argument, argv[1]);
//	int argument_convert = atoi(argument);
	leds(argument);	
//	printf("%s \n",argument);	
}

