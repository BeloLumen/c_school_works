#include<stdio.h>
#include<conio.h>
main()
{
	
	int vize,but,final;
	
	
	printf("vize notunuzu giriniz:"); scanf("%d",&vize);
	printf("final notunuzu giriniz:"); scanf("%d",&final);
	
	
	float ortalama1=(0.6*final)+(0.4*vize);
	
	if(ortalama1>=60){
    printf("notunuz:%.2f\n",ortalama1);
	printf("gectiniz.");	}
	else
	{
		printf("notunuz 60'in altinda but notunuzu giriniz:"); scanf("%d",&but);
		
		float ortalama2=(0.6*but)+(0.4*vize);
		
		if(ortalama2>=60)
		printf("butunleme ile gectiniz.");
		else
		printf("kaldiniz.");
		
	}
	
	
	
	
	
	// geçme notu hesaplama
	
	
	
	getch();
	return 0;
}
