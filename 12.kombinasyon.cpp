//C(n,r)=n!/(r!.(n-r)!) fonksiyonu.
#include<stdio.h>
float C(int n,int r)
{
	int ntotal=1; //n fakt�riyeli i�in
	int rtotal=1; //r fakt�riyeli i�in
	int nrtotal=1; //n-r fakt�riyeli i�in
    float total; // sonu� i�in.
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
