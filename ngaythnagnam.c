#include <stdio.h>
int main()
{
	int ng, th, nm;
	scanf("%d %d %d ",&ng,&th,&nm);
	/*if (ng < (th == 2)? (((nm % 4)|| (nm%100 == 0 && nm % 400 != 0))? 28 : 29)
		: (((th > 7) ^ (th & 1))? 31:30))
	{
		ng++;
	}
	else {
		ng =1;
		if (th <12) th++;
		else {
			th=1;
			nm++;
		}
	} */
	if ( ng < (th == 2)? ( ( (nm % 4) || (nm % 100 == 0 && nm % 400 != 0) )? 28 : 29 )
                    : ( ((th > 7) ^ (th & 1))? 31 : 30 ) )
   ng++;
else
{
  ng = 1;
  if (th < 12) th++;
  else
  {
    th = 1;
    nm++;
  }
}

	printf("%d %d %d \n",ng,th,nm );
	return 0;
}