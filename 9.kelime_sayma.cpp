//kullan�c�n�n klavyeden girdi�i metin i�erisinde ka� kelime oldu�unu bulan program.
#include<stdio.h>
#include<conio.h>


main()
{
	
	char cumle[999];
	int kelime=1;
	printf("lutfen metin giriniz: ");
	gets(cumle);
	
	for(int i=0;cumle[i]!='\0';i++)
{
	if(cumle[i]==' ') 
	kelime++;
	
}
	
printf("metnin icerisinde %d kadar kelime vardir.",kelime);
	
	
	

	
	
	
	getch();
	return 0;
}
