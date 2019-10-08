#include<stdio.h>
#include<conio.h>
#include<string.h>
//3 öðrencinin bilgilerini giriþini yapan ve bastiran kod .
struct ders{
	int derskod;
	int vize;
	int final;
	double notu;
	
	
};

struct ogrenci{
	char ad[40];
	char soyad[40];
	int no;
	struct ders dersler[5];
		
	
}ogr[3]; //3 öðrenci olsun istendi.
void notlar(int i,int j){
	printf("\n%d.ders bilgilerini giriniz\n",j+1);
	printf("dersin kodu:");scanf("%d",&ogr[i].dersler[j].derskod);
	printf("vize notu:");scanf("%d",&ogr[i].dersler[j].vize);
	printf("final notu:");scanf("%d",&ogr[i].dersler[j].final);
	ogr[i].dersler[j].notu=(double)((0.4*ogr[i].dersler[j].vize)+(0.6*ogr[i].dersler[j].final));
	
	
}
void bilgi(int i){
	printf("\n%d.ogrencinin  bilgilerini giriniz\n",i+1);
	printf("adi:"); scanf("%s",&ogr[i].ad);

	printf("soyadi:"); scanf("%s",&ogr[i].soyad);
	printf("numarasi:");scanf("%d",&ogr[i].no);
	for(int j=0;j<5;j++){
		notlar(i,j);
	}
	
}
void bastir(int i){
	printf("\n%d.ogrencinin bilgileri:\n",i+1);
	printf("adi:%s \nsoyadi:%s \nnumarasi:%d\n\n",ogr[i].ad,ogr[i].soyad,ogr[i].no);
	for(int j=0;j<5;j++){
		printf("%d kodlu dersin:\n",ogr[i].dersler[j].derskod);
		printf("vize:%d\nfinal:%d\nnotu:%.2f\n\n",ogr[i].dersler[j].vize,ogr[i].dersler[j].final,ogr[i].dersler[j].notu);
	}
}
void gecmenotu(){
	
	int toplam[5];
	for(int i=0;i<5;i++)
	toplam[i]=0;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<3;j++)
		toplam[i]+=ogr[j].dersler[i].notu;
	}
    for(int i=0;i<5;i++)
    {
    	printf("%d. dersin gecme notu:%.2f\n",i+1,(float)toplam[i]/3);
	}
}
main(){
	

 for(int i=0;i<3;i++){
 
 	bilgi(i);
bastir(i);
}


gecmenotu();
//printf("---tum ogrencilerin bilgileri---");
//for (int i=0;i<3;i++)
//bastir(i);
	
	
	getch();
	return 0;
}
