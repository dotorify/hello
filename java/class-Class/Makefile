

TARGET := test

all: java

java: cpp
	@javac $(TARGET).java
	@java $(TARGET)

cpp: 
	@g++ $(TARGET).cpp -oa.out
	@./a.out

	@g++ $(TARGET)2.cpp -oa2.out
	@./a2.out

clean:
	rm -rf *.class
