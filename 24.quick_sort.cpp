#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void quickSortKucuk( int[], int, int);
int partitionKucuk( int[], int, int);
void quickSortBuyuk( int[], int, int);
int partitionBuyuk( int[], int, int);

int main(){
	int dizi[100],dizi1[50],dizi2[50];
     srand(time(NULL));
     for(int i=0;i<100;i++){
     	dizi[i]=rand()%100;
	 }
	for(int i=0;i<50;i++){// iki diziye ay�rd�m dizimi 
		dizi1[i]=dizi[i];
		dizi2[i]=dizi[i+50];
	}
	printf("rastgele sayilar:\n");
	for(int i=0;i<100;i++){
		printf("%d ",dizi[i]);
	}
	printf("\n\n");
	quickSortKucuk(dizi1,0,49);
	printf("kucukten buyuge quick sort:\n");
	for(int i=0;i<50;i++)
	printf("%d ",dizi1[i]);
	printf("\n\n");
	quickSortBuyuk(dizi2,0,49);
	printf("buyukten kucuge quick sort:\n");
	for(int i=0;i<50;i++)
	printf("%d ",dizi2[i]);
	
	
}

void quickSortKucuk( int a[], int sol, int sag)
{
   int j;
   if( sol < sag ) // soldaki index ile sagdaki index birbirine denk gelmeyene kadar cal���yor.
   {
        j = partitionKucuk( a, sol, sag);
       quickSortKucuk( a, sol, j-1);
       quickSortKucuk( a, j+1, sag);
   }
  
}
int partitionKucuk( int a[], int sol, int sag) {
   int pivot, i, j, t;
   pivot = a[sol];// en soldak say�y� s�n�r say� al�yoruz.
   i = sol; 
   j = sag+1;	// sagdaki say�ya +1 ekliyoruzki ayr�lank�menin en sag�ndaki say�y�da als�n.
   while(1)
   {
   	do ++i; while( a[i] <= pivot && i <= sag );//s�n�r say�dan b�y�k say�y� buldugunda duruyor ve en sagdaki say�ya kadar �al���yor.
   	do --j; while( a[j] > pivot );// buda ayn� bicimde fakat kendinden k�c�k say� bulana kadar j yi azalt�yor.
   	if( i >= j ) break;//soldan gelen say� sagdan gelen say�dan b�y�kse d�ng�y� kesiyor.
   	t = a[i]; // d�ng� kesimez ise yani i le j birbirini ge�tigi anda yer degi�tiriyorlar.
	a[i] = a[j]; 
	a[j] = t;
   }
   t = a[sol]; // kesilirse en soldaki say� ile sa�daki say�y� yer de�i�tiriyor. yani pivotu 
   a[sol] = a[j]; 
   a[j] = t;
   return j;
}

void quickSortBuyuk( int a[], int sol, int sag)
{
   int j;
   if( sol < sag ) 
   {
        j = partitionBuyuk( a, sol, sag);
       quickSortBuyuk( a, sol, j-1);
       quickSortBuyuk( a, j+1, sag);
   }
}
int partitionBuyuk( int a[], int sol, int sag) {
   int pivot, i, j, t;
   pivot = a[sol];
   i = sol; 
   j = sag+1;	
   while(1)
   {
   	do ++i; while( a[i] >= pivot && i <= sag );
   	do --j; while( a[j] < pivot );
   	if( i >= j ) break;
   	t = a[i]; 
	a[i] = a[j]; 
	a[j] = t;
   }
   t = a[sol]; 
   a[sol] = a[j]; 
   a[j] = t;
   return j;
}



