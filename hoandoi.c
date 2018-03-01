#include <stdio.h>
int main(){
	int a, b;
	printf("Enter an integer: ");
	scanf("%d", &a);
	printf("Enter another one: ");
	scanf("%d", &b);
	printf("Before: a is %d and b is %d\n", a, b);
	if(a > b) {
		int tmp;
			tmp = a;
			a = b;
			b = tmp;

	}
	printf("After: a is %d and b is %d\n", a, b);
	return 0;}