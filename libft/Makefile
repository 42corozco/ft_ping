NAME = libft.a
HEAD := -I includes/

CFLAGS =
#CFLAGS = -Wall -Wextra -Werror

SRC := \
	srcs/ft_getopt.c \
	srcs/ft_strchr.c \
	srcs/ft_strlen.c \

OBJS = $(addprefix objs/, $(SRC:.c=.o))

#color
COM_COLOR   = \033[0;34m
OBJ_COLOR   = \033[0;36m
OK_COLOR    = \033[0;32m
ERROR_COLOR = \033[0;31m
WARN_COLOR  = \033[0;33m
NO_COLOR    = \033[m

OK_STRING    = "[OK]"
ERROR_STRING = "[ERROR]"
WARN_STRING  = "[WARNING]"
COM_STRING   = "Compiling"

define run_and_test
printf "%b" "$(COM_COLOR)$(COM_STRING) $(OBJ_COLOR)$(@F)$(NO_COLOR)\r"; \
$(1) 2> $@.log; \
RESULT=$$?; \
if [ $$RESULT -ne 0 ]; then \
  printf "%-60b%b" "$(COM_COLOR)$(COM_STRING)$(OBJ_COLOR) $@" "$(ERROR_COLOR)$(ERROR_STRING)$(NO_COLOR)\n"   ; \
elif [ -s $@.log ]; then \
  printf "%-60b%b" "$(COM_COLOR)$(COM_STRING)$(OBJ_COLOR) $@" "$(WARN_COLOR)$(WARN_STRING)$(NO_COLOR)\n"   ; \
else  \
  printf "%-60b%b" "$(COM_COLOR)$(COM_STRING)$(OBJ_COLOR) $(@F)" "$(OK_COLOR)$(OK_STRING)$(NO_COLOR)\n"   ; \
fi; \
cat $@.log; \
rm -f $@.log; \
exit $$RESULT
endef



all: $(NAME)

$(NAME): $(OBJS) $(OBJB) $(OBJP)
	@ar rcs $(NAME) $(OBJS)

objs/%.o: %.c
	@mkdir -p $(dir $@)
	@gcc $(CFLAGS) $(HEAD) -c $< -o $@

clean:
	@rm -rf $(OBJS) $(OBJB) $(OBJP) objs

fclean:
	@rm -rf $(NAME) $(OBJS) $(OBJB) $(OBJP) objs

re: fclean all
