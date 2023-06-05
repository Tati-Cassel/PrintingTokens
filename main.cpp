#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = (char*)malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = (char*)realloc(s, strlen(s) + 1);
    
    const char e[2] = " ";
    char* token;

    token = strtok(s, e);

    while (token != NULL) {

        printf("%s\n", token);

        token = strtok(NULL, e);
    }
    
    return 0;
}
