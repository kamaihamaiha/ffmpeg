#include <stdio.h>
#include <stdlib.h>

int sum(int a,int b){
	return (a + b);
}

int sub(int a,int b){
	return (a - b);
}

int main(int argc,char *argv[]){

	int res_value;
	//声明函数指针
	int (*fun)(int,int);
	fun = sub;
	res_value = fun(8,1);

	printf("sub is %d\n",res_value);
	fun = sum;
	printf("sum is %d\n",fun(res_value,2));
	
}

