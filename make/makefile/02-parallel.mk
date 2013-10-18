#
# FILE: 02-parallel.mk
#
# NOTE: 1st와 2nd의 순서가 없다.
#       따라서 1st와 2nd의 로그가 섞여서 출력된다.

all: 4th
	@echo "all: 4th"

4th: 3rd
	@echo "4th: 3rd"
	
3rd: 1st 2nd
	@echo "3rd: 1st 2nd"

1st:
	@echo "1st"
	@echo "	1st: 1"
	@echo "	1st: 2"

2nd:
	@echo "2nd"
	@echo "	2nd: 1"
	@echo "	2nd: 2"
