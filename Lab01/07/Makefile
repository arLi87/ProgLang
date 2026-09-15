#наличие програм.ехе 
all: program.exe
#что нужно для наличия програм.ехе
program.exe: main.o message.o hello.o goodbye.o
	g++ main.o message.o hello.o goodbye.o -o program.exe
#что нужно для маин.спп
main.o: main.cpp hello.h goodbye.h
	g++ -c main.cpp -o main.o
#что нужно для сообщения.спп и тд.
message.o: message.cpp message.h
	g++ -c message.cpp -o message.o

hello.o: hello.cpp hello.h message.h
	g++ -c hello.cpp -o hello.o

goodbye.o: goodbye.cpp goodbye.h message.h
	g++ -c goodbye.cpp -o goodbye.o 