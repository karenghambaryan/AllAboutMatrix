CXX = g++
CXXFLAGS = -std=c++17 -Wall

TARGET = program

OBJS = main.o matrix.o car.o

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp

matrix.o: matrix.cpp matrix.h
	$(CXX) $(CXXFLAGS) -c matrix.cpp

car.o: car.cpp car.h
	$(CXX) $(CXXFLAGS) -c car.cpp

clean:
	rm -f *.o $(TARGET)