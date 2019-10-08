#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>

main()
{
	
	int matris[10][10];
	int toplam=0;
	int sayi=0;
	int kontrol=0;
	
	srand(time(NULL));
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10;j++)
		{
			matris[i][j]=rand()%100;
			
			
		}
	}
	
	
	// kontrol
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10;j++)
		{
			printf("%d ",matris[i][j]);
			
			
	
		}
	printf("\n");
	}
	//asal sayýlar
	
	
	printf("\n\n\nAsal sayilar:\n");
	
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10;j++)
		{
		
			sayi=matris[i][j];
			
			
			for(int k=2;k<=sayi;k++)
			{
				
				if(sayi==2)
				break;
				else if(sayi!=k && sayi%k==0)
				{
					kontrol =1;
					break;
				}
				
				
			}
			if(kontrol==0)
			{
				if(sayi!=0 && sayi !=1)
				{
					printf("%d ",sayi);
					toplam+= sayi;
					
				}
				
			}
			kontrol=0;
		}
	}
	
	printf("\n\nAsal sayilarin toplamlari:%d",toplam);
	
	
	
	
	
	
	
	getch();
	return 0;
}
