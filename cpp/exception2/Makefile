# $< : 현재의 목표 파일보다 더 최근에 갱신된 파일 이름
# $? : 현재의 목표 파일보다 더 최근에 갱신된 파일 이름('$<'와 같다고 봐도 무방함)
# $@ : 목표 파일 이름
# $* : 확장자가 없는 이름
#

all:
	g++ -c main.cpp -o main.o
	g++ -c ClassA.cpp -o ClassA.o
	g++ -c NullPointerException.cpp -o NullPointerException.o
	g++ main.o ClassA.o NullPointerException.o -o test

clean:
	rm -rf *.o
	rm -rf test

