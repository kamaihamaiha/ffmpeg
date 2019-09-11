#include <stdio.h>
#include <stdlib.h>
//指针练习

int main(int argc ,char* argv[]){

	int* a;
	int* b;

	a = (int*)malloc(sizeof(int));
	b = (int*)malloc(sizeof(int));
	*a = 1;
	*b = 2;
	//数组
	int c[4] = {0,1,2,3};

	printf("address of pointer a:%p,value of pointer a:%p,value:%d\n",&a,a,*a);
	printf("address of pointer b:%p,value of pointer b:%p,value:%d\n",&b,b,*b);
	printf("address of pointer c:%p,value of pointer c:%p,value:%d\n",&c,c,*c);

	return 0;

}
