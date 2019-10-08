#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct node{
	int num;
	node *next;
}node;
node *ilk=NULL,*son=NULL;

void addlist(int temp){
	node *root=(node*)malloc(sizeof(node));
	root->num=temp;
if(ilk==NULL){
	ilk=(node*)malloc(sizeof(node));
	ilk=root;
	ilk->next=ilk;
	son=ilk;
}
else{
	son->next=root;
    root->next=ilk;
    son=root;
}
 
}

void del(int value){
	node *gecici=(node*)malloc(sizeof(node));
	node *silgecici=(node*)malloc(sizeof(node));
	node *temp=(node*)malloc(sizeof(node));
	gecici=ilk;
	temp=son;
	do{
		if(gecici->num == value)
		{
			temp->next=gecici->next;
			silgecici=gecici;
			gecici=gecici->next;
			free(silgecici);
		}
		else{
			gecici=gecici->next;
			temp=temp->next;
		}
	}while(gecici!=ilk);
	
}

void sortlist(node *r){
	node * iter = r;
	node * index = NULL;
     do
	{
		index = iter->next;
		while(index != r)
		{
			if(iter->num < index->num)
			{
				int temp;
				temp = iter->num;
				iter->num = index->num;
				index->num = temp;
			}
		index = index->next;
		}
		iter=iter->next;
	
	}	while(iter != r);
	
}

void printlist(node *root){
	node *iter=(node*)malloc(sizeof(node));
	iter = root;
		do
	{
		printf("%d ", iter->num);
		iter = iter->next;
	}while(iter != root);
}
main(){
	node *ptr=NULL;
	int select;
	
	while(1){
		printf("seciminizi yapiniz.\n\n1.ekleme \n2.sil \n3.sirala \n4.bastir \n0.cikis\n\nseciminiz:");
		scanf("%d",&select);
		if(select==0) break;
		switch(select){
			
			case 1:{
				int temp;
				printf("sayinizi giriniz:");
				scanf("%d",&temp);
				addlist(temp);
				break;
			}
			case 2:{
				int temp;
				printf("sileceginiz sayiyi giriniz:");
				scanf("%d",&temp);
				del(temp);
				break;
			}
			case 3:{
				node * temp=(node*)malloc(sizeof(node));
				temp=ilk;
				sortlist(temp);
				break;
			}
			case 4:{
				node * temp=(node*)malloc(sizeof(node));
				temp=ilk;
				printf("liste\n");
				printlist(temp);
				break;
			}
		}
	}	
}
