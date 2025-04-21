CXX=g++
CXXFLAGS=-std=c++11 -Wall -Iinc

TARGET=Lab07
OBJS=main.o Cylinder.o

all:$(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)
imain.o: main.cpp inc/Cylinder.h
	$(CXX) $(CXXFLAGS) -c main.cpp
Cylinder.o: src/Cylinder.cpp inc/Cylinder.h
	$(CXX) $(CXXFLAGS) -c src/Cylinder.cpp -o Cylinder.o
clean:
	rm -f $(TARGET) *.o

