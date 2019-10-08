#include<stdio.h>
#include<conio.h>
int main()
{
	/*girilen iki sayiyi karþýlaþtýrýcaðýz.*/
	
	float sayi1;
	float sayi2;
	
	printf("birinci sayiyi giriniz:");
	scanf("%f",&sayi1);
	printf("ikinci sayiyi giriniz:");
	scanf("%f",&sayi2);
	
	if(sayi1>sayi2)
	{
		printf("birinci girilen  sayi ikinci girilen sayidan buyuktur.");
		
		}	
	else if(sayi1<sayi2)
	{
		printf("ikinci girilen sayi ilk girilen sayidan buyuktur.");
	}
	else
	{
		printf("iki sayi birbirine esittir.");
	
	}
	
	getch();
	return 0;
	

	
	
	
}
