CHESSXX := ../build

run: main
	./program

main:
	g++ -I${CHESSXX}/include main.cc -o ./program -L${CHESSXX}/lib -lchessxx

clean:
	rm -rf ${CHESSXX}
	rm -f ./program