#
# FILE: 01-macro.mk
#

all: 4th
	@echo 'all: 4th'
	@echo '	$$@ (Target)	 	= $@'
	@echo '	$$* (Target:no ext.)	= $*'
	@echo '	$$? (Depend)		= $?'
	@echo '	$$< (Depend:first item) 	= $<'

4th: 3rd
	@echo '4th: 3rd'
	@echo '	$$@ (Target)	 	= $@'
	@echo '	$$* (Target:no ext.)	= $*'
	@echo '	$$? (Depend)		= $?'
	@echo '	$$< (Depend:first item) 	= $<'
	
3rd: main.o debug.o
	@echo '3rd: main.o debug.o'
	@echo '	$$@ (Target)	 	= $@'
	@echo '	$$* (Target:no ext.)	= $*'
	@echo '	$$? (Depend)		= $?'
	@echo '	$$< (Depend:first item) 	= $<'

main.o: debug.o
	@echo 'main.o: debug.o'
	@echo '	$$@ (Target)	 	= $@'
	@echo '	$$* (Target:no ext.)	= $*'
	@echo '	$$? (Depend)		= $?'
	@echo '	$$< (Depend:first item) 	= $<'

debug.o:
	@echo 'debug.o'
	@echo '	$$@ (Target)	 	= $@'
	@echo '	$$* (Target:no ext.)	= $*'
	@echo '	$$? (Depend)		= $?'
	@echo '	$$< (Depend:first item) 	= $<'
