NAME = ft_ping
HEAD := -I./includes/ -I./libft/includes
CP = gcc

CFLAGS = 
#CFLAGS = -Wall -Wextra -Werror
CFLAGSF = -g3 -fsanitize=address -Wall -Wextra -Werror

SRC := \
	srcs/main.c \
	srcs/tools.c

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

$(NAME): $(OBJS)
	@make -sC ./libft
	@echo ''
	@$(CP) $(CFLAGS) $(HEAD) $(OBJS) -o $(NAME) -L./libft -lft
	@echo '	 '
	@echo '	......( \_/ ) '
	@echo '	......( o_o ) '
	@echo '	..../""""""""""""\======░ ▒▓▓█D' "$(WARN_COLOR)\t $(NAME)\t$(OK_COLOR)[CREATED]$(NO_COLOR)";
	@echo '	/"""""""""""""""""""\ '
	@echo '	\_@_@_@_@_@_@_@_@_@_/'

#objs/%.o: %.cpp
objs/%.o: %.c
	@mkdir -p $(dir $@)
	@$(call run_and_test,$(CP) $(CFLAGS) $(HEAD) -c $< -o $@)

clean:
	@rm -rf $(OBJS) objs
	@make clean -sC libft
	@printf "%b" "$(ERROR_COLOR)\tmake clean\t$(OK_COLOR)[SUCCESS]$(NO_COLOR)\n";

fclean:
	@make fclean -sC libft
	@rm -rf $(NAME) $(OBJS) objs
	@printf "%b" "$(ERROR_COLOR)\tmake fclean\t$(OK_COLOR)[SUCCESS]$(NO_COLOR)\n";

re: fclean all

cn: $(OBJS)
	@make -sC ./libft
	@$(CP) $(CFLAGS) $(HEAD) $(OBJS) -o $(NAME) -L./libft -lft
	@echo 'simple ' "$(WARN_COLOR)\t $(NAME)\t$(OK_COLOR)[CREATED]$(NO_COLOR)";

cs: $(OBJS)
	@$(CP) $(CFLAGSF) $(HEAD) $(OBJS) -o $(NAME) -L./libft -lft
	@echo 'sanitize' "$(WARN_COLOR)\t $(NAME)\t$(OK_COLOR)[CREATED]$(NO_COLOR)";

leaks:
	leaks $(NAME)

quimera:
	@echo '	 _**_**	'
	@echo '	_**___**	'
	@echo '	_**___**_________****	'
	@echo '	_**___**_______**___****	'
	@echo '	_**__**_______*___**___**	'
	@echo '	__**__*______*__**__***__**	'
	@echo '	___**__*____*__**_____**__*	'
	@echo '	____**_**__**_**________**	'
	@echo '	____**___**__**	'
	@echo '	___*___________*	'
	@echo '	__*_____________*	'
	@echo '	_*____0_____0____*	'
	@echo '	_*_______@_______*	'
	@echo '	_*_______________*	'
	@echo '	___*_____v_____*	'
	@echo '	_____**_____** 	Quimera '
