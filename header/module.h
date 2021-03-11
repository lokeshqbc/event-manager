typedef void(*fptr) (void);
void event_register(int,int,fptr);
fptr get_fptr(int);
void event(int);
