#include<stdio.h>
#include<conio.h>

int ebob(int x,int y){
	if(y==0)
	return x;
	return ebob(y,x%y);
	
}
int main(){
	int sayi1,sayi2;
	printf("1.sayiyi giriniz:"); scanf("%d",&sayi1);
	printf("2.sayiyi giriniz:"); scanf("%d",&sayi2);
	if (sayi1==0 || sayi2==0)
	printf("sayilarin EBOBlari: 0");
	else
	printf("sayilarin OBEBleri: %d",ebob(sayi1,sayi2));
	getch();
	return 0;
}
