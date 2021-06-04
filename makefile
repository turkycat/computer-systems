#
# TODO: mostly from memory, improvements can be made
# 

CC=g++
INC=inc
#OBJECT_DIR=obj
SOURCE=src
TARGETS=bitness endian

#flags
DEFAULT_FLAGS=-I$(INC) -std=c++17
CFLAGS=
ALL_FLAGS=$(DEFAULT_FLAGS) $(CFLAGS)

all: $(TARGETS)

#common: $(INC)/common.h
#	$(CC) -c $(INC)/common.h $(ALL_FLAGS)

bitness: $(SOURCE)/bitness.cpp $(INC)/common.h
	$(CC) -o $@ $^ $(ALL_FLAGS)

endian: $(SOURCE)/endian.cpp $(INC)/common.h 
	$(CC) -o $@ $^ $(ALL_FLAGS)

.PHONY: clean

clean:
	rm -f $(TARGETS) *.o $(INC)/*~ *~