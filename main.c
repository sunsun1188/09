#include <stdio.h>
#include <stdlib.h>
#define STUDENT 4
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void square_array(int a[], int size) {
	int i;
	
	for (i=0;i<STUDENT;i++)
		a[i]=a[i]*a[i];
}
void print_array(int a[], int size) {
	int i;
	
	for (i=0;i<STUDENT;i++)
		printf("%3d", a[i]);
	printf("\n");
}
int main(int argc, char *argv[]) {
	
	int list[STUDENT] = {1,2,3,4};
	
	print_array(list, STUDENT);
	square_array(list, STUDENT);
	print_array(list, STUDENT);
	return 0;
}
