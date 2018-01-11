#include <stdio.h>

void main(int argc, char *argv){
	int var;
	var = callfunc();
	printf("%i\n", var);
}

int callfunc(){
	int x = 10;
	return 1;
}
