#ifndef BUSH_H
#define BUSH_H

#include <stdio.h>

#define clear() printf("\033[H\033[J") // Clears terminal

void printDir(void);

void getInput(void);

#endif