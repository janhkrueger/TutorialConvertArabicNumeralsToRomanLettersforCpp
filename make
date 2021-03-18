REPO=$(HOME)/ConvertRomanLetters

CC=g++
CFLAGS=-fsanitize=address -static-libasan -lrt -flto -pthread -D_FORTIFY_SOURCE=2 -pie -fPIE -ftrapv -Wl,-z,relro,-z,now,-rpath,/usr/local/lib/ -fpic -fvisibility=hidden -fstack-protector-all --param ssp-buffer-size=1 -fmessage-length=0 -fno-omit-frame-pointer
CWARNINGS=-Wextra -Wconversion -Wsign-conversion -Wformat-nonliteral -Wstack-protector -Wno-unused-parameter -Wformat=2 -Wformat-security -Winit-self -Wuninitialized -Wswitch-default -Wswitch-enum -Wunused-but-set-parameter -Wunused-parameter -Wunused-but-set-variable -Wfloat-equal -Wshadow -Wunreachable-code
CLIBS=

SOURCES=main.cpp
OBJECTS=$(SOURCES:.cpp=.o)

all:
	export GLIBCXX_FORCE_NEW=true
	$(CC) $(CFLAGS) -O3 $(SOURCES) $(CLIBS) $(CINCLUDES) -o ConvertRomanLetters
	export GLIBCXX_FORCE_NEW=false
