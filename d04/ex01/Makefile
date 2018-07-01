ifeq ($(HOSTTYPE),)
	HOSTTYPE := $(shell uname -m)-$(shell uname -s)
endif

TARGET := Sorcery

BINDIR := bin
SRCDIR := ./
SRCS := $(wildcard $(SRCDIR)/*.cpp)
OBJS := $(patsubst $(SRCDIR)/%.cpp, $(BINDIR)/%.o, $(SRCS))
DEPS := $(patsubst $(SRCDIR)/%.cpp, $(BINDIR)/%.d, $(SRCS))

CC := clang++
CCFLAGS := -g -Wall -Wextra -std=c++98

LD := clang++
LDFLAGS := -O3 -g

all: $(TARGET)

$(TARGET): $(OBJS)
	@echo "LD $@"
	@$(CC) $(LDFLAGS) -o $@ $^

$(BINDIR)/%.o: $(SRCDIR)/%.cpp
	@echo "CC $<"
	@mkdir -p $(shell dirname $@)
	@$(CC) -MM -MP -MT $@ -I$(SRCDIR) $(CCFLAGS) $< > $(patsubst %.o,%.d,$@)
	@$(CC) -I$(SRCDIR) -c $< $(CCFLAGS) -o $@

-include $(DEPS)

clean:
	@echo "Cleaning object files"
	@rm -rf $(BINDIR)

fclean:
	@echo "Cleaning generated binary"
	@rm -rf $(TARGET)
	@rm -rf $(BINDIR)

re: fclean clean all

.PHONY: all clean fclean re
