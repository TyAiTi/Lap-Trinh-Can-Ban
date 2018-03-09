#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
	int n;
	
	scanf("%d",&n);
	int m=sqrt(n);
	//n=2 la SNT
	if (n==2)
	{
		printf("%dLa so nguyen to\n",n ); 
	}
	//TH
	else{
	for (int i = n; i > m; --i)
	if (n%i!=0)
	{
		printf(" %dKhong la so nguyen to\n",n); 
	}else {
		printf("%dLa so nguyen to\n",n); break;
	}}
		
		return 0;
}