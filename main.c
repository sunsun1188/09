#include <stdio.h>
#include <stdlib.h>
#define STUDENT 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int grade[STUDENT];
	int score[STUDENT];
	int i;
	
	for (i=0;i<STUDENT;i++) {
	
		grade[i] = rand()%100;
		score[i] = grade[i];
	}
	
	for (i=0;i<STUDENT;i++)
		printf("score[%d] = %d\n", i, score[i]);
	return 0;
}
