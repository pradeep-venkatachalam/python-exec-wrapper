
TARGETS := main  

OBJS := $(TARGETS:=.o)

SHELL := /bin/bash
OPT :=$(shell test $$(uname -m) = "x86_64" && echo /opt64)

CPPFLAGS=-I. -Wall -g
LDFLAGS=-lm

CPP=/usr/bin/g++

VERBOSE :=

all: $(TARGETS)

%.o : %.cpp
	$(VERBOSE)$(CPP) $(CPPFLAGS) -o $@ -c $<

% : %.o
	$(VERBOSE)$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS)

main : main.o
	$(VERBOSE)$(CPP) -o $@ $< $(LDFLAGS)

$(OBJS) : Makefile

clean:
	rm -f core *~ *.o a.out $(TARGETS)
