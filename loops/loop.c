#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char arr[10][10] = {"","one","two","three","four","five","six","seven","eight","nine"};
    int input = 0;

    scanf("%d", &input);

    if(input > 9) {
        printf("Greater than 9\n");
    } else if (input < 1) {
        printf("wrong input");
    } else {
        printf("%s", arr[input]);
    }
    return 0;
}
