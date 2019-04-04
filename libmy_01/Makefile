##
## Makefile for  in /home/ryod1/piscine/week2_c1/libmy/selatn_r
## 
## Made by SELATNI Ryad
## Login   <selatn_r@etna-alternance.net>
## 
## Started on  Fri Oct 28 17:43:28 2016 SELATNI Ryad
## Last update Sat Oct 29 02:16:56 2016 SELATNI Ryad
##

TRASH	=	my_getnbr.c~\
		my_isneg.c~\
		my_put_nbr.c~\
		my_putchar.c~\
		my_putstr.c~\
		my_strcat.c~\
		my_strcmp.c~\
		my_strcpy.c~\
		my_strlen.c~\
		my_strncat.c~\
		my_strncmp.c~\
		my_strncpy.c~\
		my_strstr.c~\
		my_swap.c~\
		$(OBJO)\

OBJC   =       my_getnbr.c\
		my_isneg.c\
                my_put_nbr.c\
                my_putchar.c\
		my_putstr.c\
                my_strcat.c\
		my_strcmp.c\
                my_strcpy.c\
                my_strlen.c\
                my_strncat.c\
		my_strncmp.c\
                my_strncpy.c\
                my_strstr.c\
		my_swap.c\

OBJO   =     	my_getnbr.o\
		my_isneg.o\
                my_put_nbr.o\
                my_putchar.o\
		my_putstr.o\
                my_strcat.o\
		my_strcmp.o\
                my_strcpy.o\
                my_strlen.o\
                my_strncat.o\
		my_strncmp.o\
                my_strncpy.o\
                my_strstr.o\
		my_swap.o\

GCC	=	gcc -c

CFLAGS	=	-Wall -Werror

ARR	=	ar -r

ART	=	ar -t

RM      =       rm -rf

NAME_LIB	=	libmy.a

all	:
		$(GCC) $(CFLAGS) $(OBJC)
		$(ARR) $(NAME_LIB) $(OBJO)
		$(RM) $(TRASH)

clean	:
		$(RM) $(TRASH)

fclean	:	clean
		$(RM) $(NAME_LIB)

re	:	fclean all

.PHONY	: all fclean
