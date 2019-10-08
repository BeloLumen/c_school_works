#include<stdio.h>
#include<time.h>
#include<stdlib.h>


void selectionSort (int dizi[], int elemanSayisi)
{
     int i, j, enbuyuk, temp;
     for (i=0; i<elemanSayisi-1; i++)
     {
         enbuyuk = i; // en büyüðü baþlangýç index sayýyor
         for (j=i+1; j<elemanSayisi; j++) //tüm elelman sayýlarý tarýyoruz
         {
             if (dizi[j] > dizi [enbuyuk])//enbuyuk indexli diziden daha buyu varsa 
             enbuyuk = j;// yer deðiþtiriyoruz
         }
         temp = dizi[i];// en büyük index bulununca i indexe yani baþtan yerleþtirmeye baþlýyor.
         dizi[i] = dizi[enbuyuk];
         dizi[enbuyuk] = temp;
     }
     printf("selection sort ile buyukten kucuge siralama:\n");
     for(int a=0;a<50;a++){
     	printf("%d ",dizi[a]);
	 }
}

void insertionSort(int dizi[], int elemanSayisi) 
{ 
     int temp;
     int i, j;
 
	 for (i = 1; i < elemanSayisi; i++) 
	 {
 	 	 j = i;//i nin indexi ni j ye aktardýk.
		 
		 while (j > 0 && dizi[j - 1] > dizi[j]) { //j 0 a gelinceye kadar soldaki ile saðdaki sayýyý karþýlaþtýrýp 
		                                        // duruma uygunsa yer deðiþtiriyor.
			 temp = dizi[j];
			 dizi[j] = dizi[j - 1];
			 dizi[j - 1] = temp;
			 j--;
		 }
	
	 }

   printf("insertion sort ile kucukten buyuge siralama:\n");
   for (int a=0;a<50;a++){
   	printf("%d ", dizi[a]);
   }
}

int main(){
     
     int dizi[100],dizi1[50],dizi2[50];
     srand(time(NULL));
     for(int i=0;i<100;i++){
     	dizi[i]=rand()%100;
	 }
	for(int i=0;i<50;i++){
		dizi1[i]=dizi[i];
		dizi2[i]=dizi[i+50];
	}
	printf("rastgele sayilar:\n");
	for(int i=0;i<100;i++){
		printf("%d ",dizi[i]);
	}
	printf("\n\n");
	selectionSort(dizi1,50);
	printf("\n\n");
	insertionSort(dizi2,50);
	
	return 0;
	
	
}
