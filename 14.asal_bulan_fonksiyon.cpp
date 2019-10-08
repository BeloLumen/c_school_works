//asal olup olmadýðýný bakan fonksiyon.
#include<stdio.h>
void prime(int num)
{
	int check=1;
	for(int i=2;i<num;i++)
	{
		if(num%i==0)
		check=0;
		
	}
	if(num<=1)
	printf("sayi asal degildir");
	else if(check==0)
	printf("girdiginiz sayi asal degildir.");
	else
	printf("girdiginiz sayi asaldir.");
	
}
int main(){
	int num;
	printf("sayi giriniz:");
	scanf("%d",&num);
	
	prime(num);
	
	
	return 0;
	
}
