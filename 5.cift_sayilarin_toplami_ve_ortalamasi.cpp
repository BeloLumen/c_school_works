#include<stdio.h>
#include<conio.h>
main()
{
	
	int sayi1;
	int toplam=0;
	int sayac=0;
	
	printf("sayi giriniz:");
	scanf("%d",&sayi1);
	
	for(int i=2;i<=sayi1;i+=2)     
	/*örnek: sayi 10 girildiðinde sayýlar, 2 4 6 8 10 olcak toplamý 30 yapýcak toplam 5 tane sayý 
	olcak sonucu 6 vericek o mantýkla düþünülmüþtür.*/
	{
		toplam+=i;
		sayac++;
		
	}
	printf("\nsayiniza kadar olan cift sayilarin toplami: %d",toplam);
	
	printf("\nsayiniza kadar olan cift sayilarin ortalamasi: %.2f",(float)toplam/sayac);
	
	
	
	
	//girilen sayýlara kadar var olan çift sayýlarýn toplamýný ve ortalamsýný veren program
	
	
	getch();
	return 0;
}
