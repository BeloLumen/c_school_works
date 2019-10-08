#include<stdio.h>
#include<conio.h>
// girilen sayiya kadar olan pozitif tam sayilarin toplami. 
int toplam(int n){
	if(n<=1){
		return n;
	}
	else {
		return n+toplam(n-1);
	}
	
}

int main(){
	int sayi;
	printf("sayiyi giriniz:");
	scanf("%d",&sayi);
	printf("sayiya kadar olan sayilarin toplami:%d",toplam(sayi-1)); // ! sayilara kadar dedigi için kendini dahil etmiyorum.!
	getch();
	return 0;
}
