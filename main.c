#include <stdio.h>
#include <stdlib.h>
#define STUDENT 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int grade[STUDENT];
	int i,average,sum;
	printf("5���� ������ �Է��ϼ���.");
	
	sum=0;
	
	for (i=0;i<STUDENT;i++) {
		scanf("%d",&grade[i]);
		sum += grade[i]; 
	}
	average=sum/STUDENT;		
	printf("���� ��� : %d\n",average);
	return 0;
}
