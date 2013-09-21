all:
	gcc src/rational.cpp -Iinclude/ -lstdc++ -o app
clean:
	rm -rf app
