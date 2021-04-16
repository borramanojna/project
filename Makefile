# Name of the project
PROJECT_NAME = Movietickets

# Output directory
BUILD = build

# All source code files
SRC = main.c\
src/functions.c\


# All test source files
TEST_SRC = src/testt.c\
unity/unity.c\
src/functions.c\

TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).$(EXE)

# All include folders with header files
INC	= -Iinc\
-Iunity

#Library Inlcudes
#if working with CUnit 
#INCLUDE_LIBS = -lcunit
INCLUDE_LIBS =

# Project Output name
PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME)

# Document files
DOCUMENTATION_OUTPUT = documentation/html

# Default target built
$(PROJECT_NAME):all

# Run the target even if the matching name exists
.PHONY: run clean test doc all

all: $(SRC) $(BUILD)
	gcc $(INC) $(SRC) -o $(PROJECT_OUTPUT).$(EXE)

# Call `make run` to run the application
run:$(PROJECT_NAME)
	./$(PROJECT_OUTPUT).$(EXE)

# Document the code using Doxygen
#doc:
#	make -C ./documentation

# Build and run the unit tests
ifdef OS
  DEL = del/q
    EXE = exe
 else
   ifeq ($(shell uname), Linux)
   DEL=rm -rf
    EXE=out
    
    endif
    endif
test:$(BUILD)
	gcc $(TEST_SRC) $(INC) -o $(TEST_OUTPUT)
	./$(TEST_OUTPUT)
#Coverage
coverageCheck:$(BUILD)
	g++ -fprofile-arcs -ftest-coverage -fPIC -O0 $(TEST_SRC) $(INC) -o $(TEST_OUTPUT)
	./$(TEST_OUTPUT)

# Remove all the built files, invoke by `make clean`
clean:
	rm -rf $(BUILD) $(DOCUMENTATION_OUTPUT)

# Create new build folder if not present
$(BUILD):
	mkdir build
