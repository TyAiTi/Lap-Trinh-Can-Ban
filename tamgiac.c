#include <stdio.h>
#include <math.h>
int main()
{	float a,b,c;
	printf("Enter three triangle edge\n"); scanf("%f %f %f",&a,&b,&c);	
	float p=(a+b+c)/2;
	float tmp=(p*(p-a)*(p-b)*(p-c));
	if (a+b>c && a+c>b && b+c>a)
	{	
		float CV=a+b+c;
		
		;
		printf("Perimeter and area of the triangle is: %.2f %.2f\n",CV,sqrt(tmp+0));
	}
	else{
		printf("No create triangle\n");
	}
	
	return 0;
}