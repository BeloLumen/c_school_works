#include<stdio.h>

int lrs(int sayi,int kaydir){
int i = sizeof(int) * 8 - 1;
    for (int a = 1;a<=kaydir;a++)
{
     if ((sayi >> i & 1) == 1)
     sayi=(sayi<<1) | 1;
     else 
     sayi<<=1;

	}    
	return sayi;
                  
                    
}
void bitoku(int sayi){

      int i = sizeof(int) * 8 - 1;
      for (i ; i >= 0; --i)
      {
            if (sayi >> i & 1 == 1)
                  putchar('1');
            else
                  putchar('0');
                  if (i%4==0) putchar(' ');
      }
      printf("\n");
      
}
main(){
	int sayi;
	int kaydir;
	int yenisayi;
	printf("sayiyi giriniz:");
	scanf("%d",&sayi);
	bitoku(sayi);
	printf("kaydirmak istediginiz sayiyi giriniz:");
	scanf("%d",&kaydir);
	yenisayi=lrs(sayi,kaydir);
	printf("yeni sayi : %d\n",yenisayi);
	bitoku(yenisayi);
	
	
	return 0;
}
