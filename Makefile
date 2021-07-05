ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out -lm
   endif
endif

TEST_PROJ_NAME = Combinational logic
BUILD_DIR=Build
# All include folders with header files
INC =-Iinc -Iunity
# All source code files
SRC = src/and_gate.c\
or_gate.c\
xor_gate.c\
half_adder.c\
full_adder.c\
half_subtractor.c\
full_subtractor.c\
bcd_to_excess3.c\
binary_to_gray.c\
combinational.c\
excess3_to_bcd.c\
gray_to_binary.c\
magnitude_comparator.c

# Main source code file
PROJECT=main.c

UNITY=unity/unity.c
TEST=test/test_combinational.c
	
execute:
	gcc $(INC) $(SRC) $(PROJECT) -o all.exe
run:all.exe
	all.exe

test:
	gcc $(SRC) $(TEST) $(UNITY) $(INC) -o $(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
	$(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))