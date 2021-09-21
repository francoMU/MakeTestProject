
# C compiler
CC := gcc
# C++ compiler
CXX := g++
# linker
LD := g++
# C flags
CFLAGS := -std=c11
# C++ flags
CXXFLAGS := -std=c++11
# C/C++ flags
CPPFLAGS := -g -Wall -Wextra -pedantic
# linker flags
LDFLAGS :=
# linker flags: libraries to link (e.g. -lfoo)
LDLIBS :=
# flags required for dependency generation; passed to compilers
DEPFLAGS = -MT $@ -MD -MP -MF $(DEPDIR)/$*.Td