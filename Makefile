# **************************************************************************** #

TARGET		= bin/vectorlib.a

CC			= cc
CFLAGS		= -Wall -Wextra -Werror -Wstrict-prototypes		\
			  -Wmissing-prototypes -Wpedantic -std=gnu17	\
			  -fstack-protector-strong -O3

SRCS		= src/add_v3.c				\
			  src/aggregate_v3.c		\
			  src/angle_v3.c			\
			  src/clamp_magnitude_v3.c	\
			  src/conjugate_v3.c		\
			  src/cross_v3.c			\
			  src/distance_v3.c			\
			  src/div_v3.c				\
			  src/dot_v3.c				\
			  src/equals_v3.c			\
			  src/init_v3.c				\
			  src/lerp_unclamped_v3.c	\
			  src/lerp_v3.c				\
			  src/magnitude_v3.c		\
			  src/max_v3.c				\
			  src/min_v3.c				\
			  src/move_towards_v3.c		\
			  src/mul_v3.c				\
			  src/normalize_v3.c		\
			  src/project_v3.c			\
			  src/reflect_v3.c			\
			  src/scale_v3.c			\
			  src/sdiv_v3.c				\
			  src/signed_angle_v3.c		\
			  src/slerp_v3.c			\
			  src/sqr_magnitude_v3.c	\
			  src/sub_v3.c				\
			  src/sum_v3.c				\
			  src/remains_v3.c			\
			  src/product_v3.c			\
			  src/mean_v3.c

OBJS		= $(SRCS:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	ar rcs $@ $(OBJS)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(TARGET)

re: fclean all

.PHONY: all clean fclean re
