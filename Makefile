default: test

test:
	@g++ tests.cpp -o tests -std=c++11
	@./tests
	@rm tests

run:
	@g++ main.cpp -o program -std=c++11
	@./program
	@rm program
