// kullanc�n�n girdi�i metin i�erisinde kullan�c�n�n girdi�i kelimenin olup olmad��� ve hangi pozisyonda oldu�unu bulan program
#include<stdio.h>
#include<conio.h>
main(){
	char cumle[999];
	char kelime[90];
	int uzunluk=0;
	int sayac=0,k,i;
	printf("lutfen metninizi giriniz(turkce karakter kullanmayiniz): ");
	gets(cumle);
	printf("lutfen metin icerisinde aramak istediginiz kelimeyi giriniz(turkce karakter kullanmayiniz): ");
	gets(kelime);
	
for(i=0;kelime[i]!='\0';i++)
uzunluk++;    // boyut �l��l�yor

for(i=0;cumle[i]!='\0';i++)
{
	
	
      if(kelime[0]==cumle[i]){// baslangic al�n�yor.
      	k=1;// di�er harfi kontrol i�in 1 olmu�tur 

      		while(kelime[k]!='\0' && kelime[k]==cumle[k+i]) //t�m kelime taran�yor.
      			k++;
      			if(k==uzunluk){ // sonra taranan kelime her e�it oldu�unda k birer art�yor k uzunlu�a e�it olursa anl�yoruzki kelime burda vard�r.
      				sayac++;//ka� kez tekrar etmi�
      				printf("aradiginiz kelime %d--->%d ile %d arasindaki indextedir.\n",sayac,i,i+k);// indexlerini ve ka��nc� tekrar oldu�unu yaz�yor.
      				
				  }
      			
      			
      			 }
    
	
	
}
	if(sayac>0)
	printf("%s kelimesi %d kez tekrar etmistir",kelime,sayac);
	else printf("aranan kelime cumle icinde bulunamadi.");
	
	
	
	
	
	
	
	getch();
	return 0;
}
