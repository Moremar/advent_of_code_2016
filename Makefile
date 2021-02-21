# make            # Build all executables
# make day01      # Build the executable for day 1 and execute it
# make clean      # Remove all executables


CC = g++
CFLAGS  = -W -Wall -Wextra -pedantic -g -Icommon -std=c++11
 
# The build targets are the executable for each day
TARGETS = bin/day01.bin \
          bin/day02.bin \
          bin/day03.bin \
          bin/day04.bin \
		  bin/day05.bin

# When running "make", build the executable for each day
all: $(TARGETS)

# Artificial targets that always need to be re-executed when called
# When running "make day01" it will always execute that executable
.PHONY: day01 day02 day03 day04 day05

day01: bin/day01.bin
	./$<

day02: bin/day02.bin
	./$<

day03: bin/day03.bin
	./$<

day04: bin/day04.bin
	./$<

day05: bin/day05.bin
	./$<

# Create the executable for a given day
bin/%.bin: %/part1.o %/part2.o %/main.o common/Utils.o common/md5.o
	$(CC) $(CFLAGS) -o $@ $^

# Create any .o file from its cpp file
%.o : %.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

# explicitly mention the headers included so the .o are rebuilt if these header change
# here we only add some dependencies, the actual command to run is above in the wildcard
%/part1.o: %/part1.hpp common/utils.hpp
%/part2.o: %/part1.hpp %/part2.hpp common/Utils.hpp

clean:
	$(RM) bin/*