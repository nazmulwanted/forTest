#include<stdio.h>

int main(){
	
	int x = 28;
	int y = 50;

	printf("x is %d\n",x);
	printf("y is %d\n",y);

	//swapping 
	int tmp = x;
	x = y;
	y = tmp;

	printf("x is now %d\n",x);
	printf("y is now %d\n",y);

}
