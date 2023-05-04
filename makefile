MAKEFLAGS += --no-print-directory
MAKEFLAGS += --quiet

define printout
	@echo "Running for Appendix $(2)"
	@echo "==========================================="
	@echo "Clearing from any previous files";
	make clear
	@echo "==========================================="
	@echo "Compiling $(1)";
	make $(1)
	@echo "==========================================="
	@echo "Running $(1)";
	@echo "-------------------------------------------"
	make $(1)run --ignore-errors
	@echo "==========================================="
endef

define valgrindout
	@echo "Running valgrind for Appendix $(2)"
	@echo "==========================================="
	@echo "Clearing from any previous files";
	make clear
	@echo "==========================================="
	@echo "Compiling $(1)";
	make $(1)
	@echo "==========================================="
	@echo "Running $(1) through valgrind";
	@echo "-------------------------------------------"
	valgrind --leak-check=full ./$(1)
	@echo "==========================================="
endef

breaker:
	g++ breaker.cpp -o breaker -std=c++03
timetest:
	g++ timetest.cpp -o timetest -std=c++11
unique:
	g++ unique.cpp -o unique -std=c++17
autoowner:
	g++ autoowner.cpp -o autoowner -std=c++03
breakerrun:
	./breaker
shared:
	g++ -g shared.cpp -o shared
sharedleak:
	valgrind --leak-check=full ./shared
uniquerun:
	./unique
autoownerrun:
	./autoowner
sharedrun:
	./shared
weak:
	g++ -g weak.cpp -o weak
weakrun:
	./weak
weakleak:
	valgrind --leak-check=full ./weak
clear:
	rm -f breaker test unique timetest autoowner shared weak

appE:
	$(call printout,breaker,"E")
appG:
	$(call printout,unique,"G")
appI:
	$(call printout,shared,"I")
appJ:
	$(call valgrindout,shared,"J")
appL:
	$(call printout,weak,"L")
appM:
	$(call valgrindout,weak,"M")