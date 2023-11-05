#include <stdio.h>
#include <stdlib.h>
#define STUDENT 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i;
	int a[STUDENT] = {1,2,3,4,5};
	int b[STUDENT] = {1,2,3,4,5};
	int flag_same=0;
	
	for (i=0;i<STUDENT;i++) {
		if (a[i]!=b[i]) {
			printf("array a and b are not the same\n");
			flag_same=1;
		}
	}
	if (flag_same==0) 
		printf("array a and b are the same\n");
	return 0;
}
