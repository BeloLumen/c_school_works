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
	/*�rnek: sayi 10 girildi�inde say�lar, 2 4 6 8 10 olcak toplam� 30 yap�cak toplam 5 tane say� 
	olcak sonucu 6 vericek o mant�kla d���n�lm��t�r.*/
	{
		toplam+=i;
		sayac++;
		
	}
	printf("\nsayiniza kadar olan cift sayilarin toplami: %d",toplam);
	
	printf("\nsayiniza kadar olan cift sayilarin ortalamasi: %.2f",(float)toplam/sayac);
	
	
	
	
	//girilen say�lara kadar var olan �ift say�lar�n toplam�n� ve ortalams�n� veren program
	
	
	getch();
	return 0;
}
