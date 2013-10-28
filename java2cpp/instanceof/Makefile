

TARGET := test

all:

	@javac $(TARGET).java
	@java $(TARGET)

	@g++ $(TARGET).cpp -oa.out
	@./a.out

	@g++ $(TARGET)2.cpp -oa2.out
	@./a2.out

	@g++ $(TARGET)3.cpp -oa3.out
	@./a3.out

	@javac $(TARGET)3.java
	@java $(TARGET)3
clean:
	rm -rf *.class
	rm -rf *.out
