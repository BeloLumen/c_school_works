#include<stdio.h>
#include<conio.h>
#include<string.h>
//	"isci" yap�s�n� kendisine parametre olarak d�nd�recek fonksiyon yaz. bilgiler kullan�c�dan al�nacak ve ekrana bast�racak


struct isci{
	char isim[30];
	char soyisim[30];
	int yas;
	float aylikucret;
}kisi;
void bilgial(struct isci);
int main(){
	
	
	printf("iscinin bilgilerini giriniz\n");
	bilgial(kisi);
	
	
	
	getch();
	return 0;
}
void bilgial(struct isci kisi)
{
	printf("isim:"); gets(kisi.isim);
	printf("soyisim:"); gets(kisi.soyisim);
	printf("yas:"); scanf("%d",&kisi.yas);
	printf("aylik ucret:"); scanf("%f",&kisi.aylikucret);
	
	printf("\n\niscinin; \nismi:%s \nsoy ismi:%s \nyasi:%d \naylik ucreti:%.2f",kisi.isim,kisi.soyisim,kisi.yas,kisi.aylikucret);
}

