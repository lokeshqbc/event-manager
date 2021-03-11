IDIR =../header
CC=gcc
CFLAGS=-I$(IDIR)

ODIR=../bin

LIBS=-lm

_DEPS = module.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = init.o event_manager.o module.o 
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))


$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

hellomake: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)
