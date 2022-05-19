#include <stdio.h>

int add( int a, int b ){
	int sum = a + b;
	return sum;
}


int main(){
	printf("Hello, world!\n");
	int sum = add(5, 4);
	printf("Sum of 5 and 4 is %d\n", sum);
	return 0;
}



