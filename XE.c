#include <stdio.h>
int main(int argc, char const *argv[])
{
	float km,tien;
	scanf("%f",&km);
	//NHo hon 2 km
	if (km<2)
	{
		tien=km*15000;
		printf("%f\n",tien );
	}
	//tu km2 tro di va nho hon 6km
	if (2<=km && km<=5)
		{
		tien=28.500+(km-2)*13.500;
		printf("%.3f\n",tien );
		} 
	//khoang tu 6km den 120km
	if (6<km && km<120)
	{
		tien=69.000+11.000*(km-5);
		printf("%.3f\n",tien );
	}
	//lon hon 120km
	if (6<km && km>120)
	{
		tien=69.000+11.000*(km-5);
		tien=0.9*tien;
	}
		
	printf("%.3f\n",tien );

	return 0;
}