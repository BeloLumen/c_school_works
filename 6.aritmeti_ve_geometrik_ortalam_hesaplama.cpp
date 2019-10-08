#include<stdio.h>
#include<conio.h>
#include<math.h> //pow fonskiyonunu kullanmak iin kütühaneye ihtiyacimiz var.
main()
{
	int sayi1;
    int sayac1;
	int carpim=1;
	int sayac2;
	int toplam=0;
	printf("islem icin 10 tane sayi giriniz:\n");
	
	for(int i=0;i<10;i++)
	{
		printf("sayi:");
		scanf("%d",&sayi1);
		
		if(sayi1%2==0)
		{
			carpim*=sayi1;
			sayac1++;
			
		}

		else
		{
			toplam+=sayi1;
			sayac2++;
			
			
			}	
	
	
		}
	float sonuc1=pow(carpim, (float)1/sayac1); //pow kök alabilmemi saðlýyor.
	float sonuc2=(float)toplam/sayac2;
	
	
	printf("\nteklerin aritmetik ortalamasi: %.2f",sonuc2);
	printf("\nciftlerin geometrik ortalamasi: %.2f",sonuc1);
	
	

	
	getch();
	return 0;
}
