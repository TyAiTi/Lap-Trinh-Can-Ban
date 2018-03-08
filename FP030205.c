#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
	int m,n;
	//NHap n
	scanf("%d",&n);
	// m can bac hai cua n
	m=sqrt(n);
	// Neu m^2 = n
	if(m*m == n){
		printf("Chinh phuong\n");
	}
	else {
		printf("Khong chinh phuong\n");
	}
	return 0;
}