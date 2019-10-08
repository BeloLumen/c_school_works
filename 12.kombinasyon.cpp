//C(n,r)=n!/(r!.(n-r)!) fonksiyonu.
#include<stdio.h>
float C(int n,int r)
{
	int ntotal=1; //n faktöriyeli için
	int rtotal=1; //r faktöriyeli için
	int nrtotal=1; //n-r faktöriyeli için
    float total; // sonuç için.
	for(int i=1;i<=n;i++) //n!
	ntotal*=i;
	
	for(int i=1;i<=r;i++) //r!
	rtotal*=i;
	
	for(int i=1;i<=n-r;i++) //(n-r)!
	nrtotal*=i;
	
	printf("n!=%d \nr!=%d \n(n-r)!=%d\n\n",ntotal,rtotal,nrtotal);
	
	total=(float)ntotal/(rtotal*nrtotal);
	return total;
	
}
int main(){
	int n,r;
	float total;
	printf("lutfen kombinasyon icin n sayisini giriniz..:");
	scanf("%d",&n);
	printf("lutfen kombinasyon icin r sayisini giriniz..:");
	scanf("%d",&r);
	printf("n..:%d \nr..:%d \n",n,r);
	
	total=C(n,r);
	printf("kombinasyon..:%.2f",total);
	
	return 0;
	
}
