#include <stdio.h>
int main(){
	int a,b,c,d,min1,min2,min;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	
	if (a<b)
	{
		min1=a;
	}
	if (c<d){
		min2=c;
	}
	min=min1;
	if (min2<min1)
	{
		min=min2;
	}
	printf("%d\n",min );
	return 0;
}