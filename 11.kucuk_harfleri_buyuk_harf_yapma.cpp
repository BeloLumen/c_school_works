// kullan�c�n girdi�i metnin icersindeki k�c�k harfleri b�y�k harfleri k���k harfe �eviren program.

#include<stdio.h>
#include<conio.h>
main(){
	// A ile a n�n aras�nda 32 fark var.
	char cumle[9999];
	
	printf("lutfen metninizi giriniz: ");
	gets(cumle);
	for(int i=0;cumle[i]!='\0';i++)
	{
		if(cumle[i]>='a' && cumle[i]<='z')
		cumle[i]-=32;
		else if(cumle[i]>='A' && cumle[i]<='Z')
		cumle[i]+=32;
		
		
	}
	
	printf("%s",cumle);
	
	
	getch();
	return 0;
}
