# $< : 현재의 목표 파일보다 더 최근에 갱신된 파일 이름
# $? : 현재의 목표 파일보다 더 최근에 갱신된 파일 이름('$<'와 같다고 봐도 무방함)
# $@ : 목표 파일 이름
# $* : 확장자가 없는 이름
#
# all: first
# first: second
# 	
# second: third forth
# 		$@ ==> second
# 		$? ==> third forth
# 		$< ==> third
#

all:
	g++ -c main.cpp -o main.o

clean:
	rm -rf *.o

