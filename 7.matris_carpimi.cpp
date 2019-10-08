#include<stdio.h>
#include<conio.h>



int main()
{
	int matris1[5][5];
	int matris2[5][5];
	int matriscarpim[5][5];
	printf("5x5 matris carpimi icin sayilari giriniz:\n1.matrisin sayilarini giriniz:\n");
	//1.matrisin sayilarini alýcam.
	for(int satir=0;satir<5;satir++)
	{
		for(int sutun=0;sutun<5;sutun++)
		{
			
			printf("%d. satirindaki %d. sayiyi giriniz:",satir+1,sutun+1);
			scanf("%d",&matris1[satir][sutun]);
			
			
		}
		
		
	}
	//kontrol amacli

	printf("2.matrisin sayilarini giriniz:\n");
	for(int satir=0;satir<5;satir++)
	{
		for(int sutun=0;sutun<5;sutun++)
		{
			
			printf("%d. satirindaki %d. sayiyi giriniz:",satir+1,sutun+1);
			scanf("%d",&matris2[satir][sutun]);
			
			
		}
		
		
	}
	
		printf("1.matris kontrol:\n");
	for(int satir=0;satir<5;satir++)
	{
		for(int sutun=0;sutun<5;sutun++)
		{
			
			printf("%d ",matris1[satir][sutun]);
			
			
		}
		printf("\n");
		
	}
	
	printf("\n \n \n");
	
		printf("2.matris kontrol:\n");
	for(int satir=0;satir<5;satir++)
	{
		for(int sutun=0;sutun<5;sutun++)
		{
			
			printf("%d ",matris2[satir][sutun]);
			
			
		}
		printf("\n");
		
	}
	
	int toplam=0;
//carpalim
for(int i=0;i<5;i++)
{
	for(int j=0;j<5;j++)
	{
		for(int k=0;k<5;k++)
		{
			toplam+=matris1[i][k]*matris2[k][j];
			
			
		}
		matriscarpim[i][j]=toplam;
		toplam=0;
		
	}
	

}
		
		
		

	
	//yazdiralim.
	
	printf("matris carpimi:\n\n");
	
	for(int satir=0;satir<5;satir++)
	{
		for(int sutun=0;sutun<5;sutun++)
		{
			printf("%d ",matriscarpim[satir][sutun]);
			
		}
		printf("\n");
		
		
		
	}
	
	
	
	//matris carpimi 
	
	
	
	
	
	getch();
	return 0;
}
