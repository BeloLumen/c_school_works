#include<stdio.h>
#include<conio.h>
int main()
{
	
	/* �dev.1 iki say�n�n 4 i�lemini yap�caz.*/
	float sayi1;
	float sayi2;

	printf("ilk sayiyi giriniz:");
	scanf("%f",&sayi1);
	
	printf("ikinci sayiyi giriniz:");
	scanf("%f",&sayi2);
	
	float toplam=sayi1+sayi2;
	float carpim=sayi1*sayi2;
	float cikarma=sayi1-sayi2;
	float bolum=sayi1/sayi2;
	
	printf("\n toplam: %f \nfark: %f \ncarpim: %f \nbolum:%f ",toplam,cikarma,carpim,bolum);
	
	getch();
	return 0;

	
	
	
}


