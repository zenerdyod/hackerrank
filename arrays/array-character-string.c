#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *data_array = NULL, *token = NULL;

    data_array = (char *) malloc(1024 * sizeof(char));
    if(!data_array) {
        printf("Allocation failure\n");
        exit(-1);
    }
    scanf("%[^\n]s", data_array);
    token = strtok(data_array, " ");
    while(token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, " ");
    }
    exit(0);
}
