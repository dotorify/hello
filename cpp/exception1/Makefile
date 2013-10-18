# $< : 현재의 목표 파일보다 더 최근에 갱신된 파일 이름
# $? : 현재의 목표 파일보다 더 최근에 갱신된 파일 이름('$<'와 같다고 봐도 무방함)
# $@ : 목표 파일 이름
# $* : 확장자가 없는 이름
#

all:
	g++ 01_test_bad_exception.cpp -o 01_test_bad_exception
	g++ 02_test_good_exception.cpp -o 02_test_good_exception
	g++ 03_test_trace_exception.cpp -o 03_test_trace_exception
	g++ 04_test_inherit_exception.cpp -o 04_test_inherit_exception

clean:
	rm -rf *.o
	rm -rf *.gch
	rm -rf 01_test_bad_exception
	rm -rf 02_test_good_exception
	rm -rf 03_test_trace_exception
	rm -rf 04_test_inherit_exception

