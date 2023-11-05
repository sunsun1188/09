#include <stdio.h>
#include <stdlib.h>
#define STUDENT   5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int grade[STUDENT];
	int i;
	
	for (i=0;i<STUDENT;i++)
		grade[i]=(i+1)*10;
	
	for (i=0;i<STUDENT;i++)
		printf("grade[%d] = %d\n",i,grade[i]);
	return 0;
}
