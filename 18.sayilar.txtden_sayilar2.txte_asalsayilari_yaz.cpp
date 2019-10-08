#include<stdio.h>
#include<conio.h>


//sayilar.txt deki sayilarin asal olanlari sayilar2.txt ye yaz.
int asal(int sayi)
{
    if(sayi<2) return 0;
	if(sayi== 2)return 1;
  
    
    for(int i=2 ;i<sayi;i++)
    {
    	if(sayi % i== 0)
    	return 0;
	}
	
	return 1;
}
main(){
	FILE *dosyaoku = fopen("sayilar.txt","r");
	FILE *dosyayaz = fopen("sayilar2.txt","w");
	int num =0;
	if(dosyaoku == NULL)
	{
		printf("dosya bulunamadi.");
		return 0;
	}
	if(dosyayaz == NULL)
	{
		printf("dosya olusturalamadi.");
		return 0;
	}
	fprintf(dosyayaz,"Asallar:\n");
	while(!feof(dosyaoku)){
		fscanf(dosyaoku,"%d ",&num);
		if(asal(num)){
			fprintf(dosyayaz,"%d ",num);
		}
			
	}
	fclose(dosyaoku);
	fclose(dosyayaz);
	printf("islem tamamlandi.");
	
	
	
    getch();
	return 0;
    
}
