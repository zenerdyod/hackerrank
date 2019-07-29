#include <stdio.h>
#include <stdlib.h>

#define MAX(x,y) (y=(2*x)-1)

int main () {
    int max = 0, len = 0, i = 0, decr = 0;
    scanf("%d", &max);
    if((max > 1000) || (max < 1)) {
        printf("We dont support above 1000 and below 1 :(\n");
        exit(0);
    }
    int in = max;
    MAX(max,len);
    int *arr = (int *)malloc(len * sizeof(int));
    while(max > 0) {
    for(i = decr; i < (len - decr); i++) {
        arr[i] = max;
    }
    for(i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
        printf("\n");
    decr++;
    max--;
    }
    decr--;
    max++;
    do {
        decr--;
        max++;
        for(i = decr; i < (len - decr); i++) {
            arr[i] = max;
        }
        for(i = 0; i < len; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }while(max != in);
    free(arr);
}
