#!/bin/bash
gcc -Wall -pedautic -Werror -Wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a
