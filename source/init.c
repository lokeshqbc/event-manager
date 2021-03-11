#include <stdio.h>
#include"module.h"
#define setbit(a,b) (a|(1<<(b-1)));
void module_init(int,int);
int main()
{
    int numofmodules,numofevents;
    printf("Enter the number of modules");
    scanf("%d",&numofmodules);
    printf("Enter the number of events");
    scanf("%d",&numofevents);
    module_init(numofmodules,numofevents);
    for(int i=1;i<=numofevents;i++)
    {
	    event(i);
    }
    return 0;
}
void module_init(int numofmodules,int numofevents)
{
    int events=0,t=0,size;
    for(int i=1;i<=numofmodules;i++)
    {
        printf("Enter the number of events interested by module %d :",i);
        scanf("%d",&size);
	events = 0;
        while(size)
        {
	    printf("enter the event no. :");
	    scanf("%d",&t);
            events= setbit(events,t);
	    size--;
        }
        event_register(i,events,get_fptr(i));
    }
}

