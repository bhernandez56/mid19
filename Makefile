all: mid19 midtest

mid19: mid19.cpp
	g++ mid19.cpp -Wall -o mid19

midtest: mid19.cpp
	g++ mid19.cpp -Wall -o unittest -DUNIT_TEST

clean:
	rm -f mid
	rm -f unittest
