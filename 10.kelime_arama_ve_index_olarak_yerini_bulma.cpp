// kullancýnýn girdiði metin içerisinde kullanýcýnýn girdiði kelimenin olup olmadýðý ve hangi pozisyonda olduðunu bulan program
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
uzunluk++;    // boyut ölçülüyor

for(i=0;cumle[i]!='\0';i++)
{
	
	
      if(kelime[0]==cumle[i]){// baslangic alýnýyor.
      	k=1;// diðer harfi kontrol için 1 olmuþtur 

      		while(kelime[k]!='\0' && kelime[k]==cumle[k+i]) //tüm kelime taranýyor.
      			k++;
      			if(k==uzunluk){ // sonra taranan kelime her eþit olduðunda k birer artýyor k uzunluða eþit olursa anlýyoruzki kelime burda vardýr.
      				sayac++;//kaç kez tekrar etmiþ
      				printf("aradiginiz kelime %d--->%d ile %d arasindaki indextedir.\n",sayac,i,i+k);// indexlerini ve kaçýncý tekrar olduðunu yazýyor.
      				
				  }
      			
      			
      			 }
    
	
	
}
	if(sayac>0)
	printf("%s kelimesi %d kez tekrar etmistir",kelime,sayac);
	else printf("aranan kelime cumle icinde bulunamadi.");
	
	
	
	
	
	
	
	getch();
	return 0;
}
