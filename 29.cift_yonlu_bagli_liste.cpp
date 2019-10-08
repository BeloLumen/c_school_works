#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<conio.h>

typedef struct liste{
	int deger;
	struct liste *sonraki;
	struct liste *onceki;
	
}liste;


liste *sirala(liste *sira,int sayi){
	liste *ptr=(liste*)malloc(sizeof(liste)*1);
	ptr=sira;
	if(ptr==NULL){
		sira=(liste*)malloc(sizeof(liste));
		sira->deger=sayi;
		sira->onceki=NULL;
		sira->sonraki=NULL;
		return sira;
	}
	if(sira->deger >sayi)
	{
		liste* temp=(liste*)malloc(sizeof(liste));
		temp->deger=sayi;
		temp->sonraki=sira;
		sira->onceki=temp;
		temp->onceki=NULL;
		sira=temp;
		return sira;
	}
	while(ptr->sonraki != NULL && ptr->sonraki->deger < sayi)
	{
	ptr=ptr->sonraki;	
	}
	liste *temp=(liste*)malloc(sizeof(liste));
	temp->deger=sayi;
	temp->sonraki=ptr->sonraki;
	ptr->sonraki=temp;
	temp->onceki=ptr;
	
	if(temp->sonraki != NULL)
	temp->sonraki->onceki=temp;
	return sira;
}

main(){
	srand(time(NULL));
	FILE *fp=fopen("bir.txt","w");
	liste *ptr=NULL;
	for(int i=0;i<10;i++){
		fprintf(fp,"%d ",rand()%100);
	}
	
	fclose(fp);
	
	
	fp=fopen("bir.txt","r");
	
	while(!feof(fp)){
		int temp;
		fscanf(fp,"%d ", &temp);
		ptr=sirala(ptr,temp);
		
	}
	
	printf("bastiralim:\n");
	while(ptr!=NULL){
		printf("%d ",ptr->deger);
		ptr=ptr->sonraki;
	}
	fclose(fp);
	while(ptr->sonraki!=NULL){
		free(ptr);
		ptr=ptr->sonraki;
		
	}
}
