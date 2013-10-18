#
# FILE: 00-order.mk
#

all: 4th
	@echo 'all: 4th'

4th: 3rd
	@echo '4th: 3rd'
	
3rd: 1st 2nd
	@echo '3rd: 1st 2nd'

2nd: 1st
	@echo '2nd'

1st:
	@echo '1st'
