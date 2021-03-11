#include<stdio.h>
#include"module.h"
typedef void (*fptr)(void);
void mod1(){
	printf("module 1 ");
}
void mod2(){
	printf("module 2 ");
}
void mod3(){
	printf("module 3 ");
}
void mod4(){
	printf("module 4 ");
}
void mod5(){
	printf("module 5 ");
}


fptr get_fptr(int n)
{
	switch(n)
	{
		case 1:return mod1;
		       break;
		case 2:return mod2;
		       break;
		case 3:return mod3;
		       break;
		case 4:return mod4;
		       break;
		case 5:return mod5;
		       break;
	}
}

