#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
	int n;
	
	scanf("%d",&n);
	int m=sqrt(n);
	//TH : nho hon 2 thi khong phai nguyen to
	if (n<2)
	{
		printf("%d KHong la  so nguyen to\n",n ); 
	}
	//TH: bang 2 va bang 3 la so nguyen to
	if (n==2 || n==3)
	{
		printf("%d La so nguyen to\n",n );
	}
	for (int i = 2; i <=m; ++i)
	{
		if (n%i==0)
		{
			printf("%d Khong la so nguyen to\n",n ); 
		}
		else{
			printf("%d La so nguyen to\n",n );
		}
	}

		
		return 0;
}