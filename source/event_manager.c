#include<stdio.h>
#include<malloc.h>
#include"module.h"
typedef void(*fptr)(void);
int checkbit(int a, int b){
	if(a&(1<<(b-1))){
		return 1;
	}
	else{
		return 0;
	}
}

struct mod{
	int mod_id;
	int map;
	fptr cb;
	struct mod *next;
	struct mod *prev;
}*first=NULL,*last=NULL;

void event_register(int i,int evt, fptr add){
	struct mod *p=NULL;
	p=(struct mod *)malloc(sizeof(struct mod));
	p->mod_id = i;
	p->map = evt;
	p->cb = add;
	p->next=NULL;
	if(!first){
		first =p;
		p->prev = NULL;
		last = p;

	}
	else{
		p->prev = last;
		last ->next = p;
		last = p;
	}
}


void event (int eve){
	struct mod *p = first;
	printf("Event %d is interested by :",eve);
	while(p){
		if(checkbit(p->map,eve)){
			p->cb();
		}	
		p=p->next;
	}
	printf("\n");
}
