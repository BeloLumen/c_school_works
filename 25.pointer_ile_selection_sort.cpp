#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void select(int *p,int boyut){
    int enb,temp,i,j;
    for(i=0;i<boyut-1;i++){
    	enb=i;
    	for(j=i+1;j<boyut;j++){
    		if(*(p+enb)<*(p+j)){
    			enb=j;
			}
		}
		
		temp=*(p+i);
		*(p+i)=*(p+enb);
		*(p+enb)=temp;
	}
}
main(){
srand(time(NULL));
int *dizi;
dizi=(int*)malloc(sizeof(int) * 20);

for(int i=0;i<20;i++){
*(dizi+i)=rand()%100;
}
select(dizi,20);

for(int i=0;i<20;i++){
	printf("%d ",*(dizi+i));
}
	
	
}
