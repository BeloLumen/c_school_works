//basamaklarý toplayan fonksiyon.,
#include<stdio.h>
int digitsum(int num)
{
	int temp,total=0;
	while(num>0)
	{
		temp=num%10;
		total+=temp;
		
		num/=10;
		
	}
	
	return total;
	
}
int main(){
	int num;
	printf("sayinin basamaklarini toplamak icin lutfen sayi giriniz:");
	scanf("%d",&num);
	
	printf("basamaklarin toplami..:%d",digitsum(num));

	return 0;
	
}
