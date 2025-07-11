#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>
#include <stdlib.h>

#include "bush.h"

#define MAX_BUFF 1024

/**
 * Infinite loop to get user input
 * Handle input by calling helper functions to parse and exec commands where
 * applicable
*/
void getInput(void)
{
    char *line;
    size_t buffLen = 0;
    ssize_t lineLen;

    printf(">>> ");
    while ((lineLen = getline(&line, &buffLen, stdin)) != EOF) {
        if (lineLen > 0) {
            line[lineLen - 1] = '\0';
        }
        if (!line[0] || !line) {
            continue;
        }
        // Execute the program here
        if (strcmp(line, "pwd") == 0) {
            printDir();
        } else if (strcmp(line, "clear") == 0) {
            clear();
        }
        printf("Your input was %s\n", line);
        printf(">>> ");
    }
    printf("Exiting Shell...\n");
    free(line);
}

/**
 * Function to print current directory
*/
void printDir(void)
{
    char cwd[MAX_BUFF];

    getcwd(cwd, sizeof(cwd));
    printf("%s\n", cwd);
}

int main(int argc, char* argv[])
{
    clear(); // Clear terminal
    printf("Hello world!\n");
    getInput(); // Infinite loop

    return 0;
}