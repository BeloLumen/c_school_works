#include<stdio.h>
#include<conio.h>
int main()
{

	/* girilen 3 tam sayýnýn ortalamasýný hesaplayan program*/
	
	int sayi1;
	int sayi2;
	int sayi3;
	
	printf("girilecek olan uc sayinin ortalamasini hesaplama icin ilk sayiyi giriniz:");
	scanf("%d",&sayi1);
	printf("ikinci sayiyi giriniz:");
	scanf("%d",&sayi2);
	printf("ucuncu sayiyi giriniz:");
	scanf("%d",&sayi3);
	
	float ortalama=(float)(sayi1+sayi2+sayi3)/3;
	printf("ortalamasi:%f",ortalama);
	getch();
	return 0;	
	
	
	
	
	
}
