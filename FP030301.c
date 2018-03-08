#include <stdio.h>
int main()
{
	int ng, th, na;
	//Nhap ngay thang nam
	printf("Nhap ngay thang nam\n"); 
	scanf("%d%d%d",&ng,&th,&na);
	int maxng;
	//Kiem tra cac thang co 31 ngay
	if(th==1 || th==3 || th==5 || th==7 || th==8 || th==10 || th==12 ){
		maxng=31;
	}
	//cac thang con lai 4,6,9,11
	else 
		if (th==4 || th==6 || th==9 ||th==11)
			{
				maxng=30;
		}
		//thang 2
		else 
				//truong hop nam nhuan
				if (na%4==0 && na%100==0 || na%400==0)
				{
					maxng=29;
				}
				//TH nam binh thuong
				 else {
						maxng=28; 
						} 
	
	//Kiem tra ngay cuoi thang
	if (ng<maxng){
		ng++;
	}
	//Neu la cuoi thang 12 tang nam len
	else  if (th == 12)
			{
			  ng=1;
			  th=1;
			  na++;
			}
		    else 
		    	//KHong phai thang 12 nen tang len mot thang nua
		    		{
		    	   ng=1;
		    	   th++;
		   		 }
	printf("%d %d %d\n",ng,th,na );
	return 0;
}