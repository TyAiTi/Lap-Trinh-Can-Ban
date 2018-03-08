#include <stdio.h>
int main(int argc, char const *argv[])
{
	char ch;
	int a,b;
	float pt;
	//Nhap 2 so nguyen va 1 ki tu
	scanf("%d %d %c",&a,&b,&ch);
	//printf("%d %d %c\n",a,b,ch);
	//ch= +,-,*,/;
	switch(ch){
		case '+' :
		 pt= a+b;
		 printf("%.2f\n",pt );
				break;
		case '-' : pt= a-b;
		        printf("%.2f\n",pt );
				break;
		case '*' : pt= a*b;
				printf("%.2f\n",pt );
				break;
		case '/' : pt= (float)a/(float)b;
				printf("%.2f\n",pt );
				break;
		default : {
		printf("Error\n");
				}
	}
	

	
	return 0;
}