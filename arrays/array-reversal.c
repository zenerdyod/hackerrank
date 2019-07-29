#include <stdio.h>
#include <stdlib.h>

int main() {
    int sz_array = 0, *data_array = NULL, i = 0;

    scanf("%d", &sz_array);

    if(sz_array < 1){
        printf("invalid input\n");
        exit (-1);
    }
    data_array = (int *)malloc(sz_array * sizeof(int));
    if(!data_array) {
        printf("Allocation failure\n");
        exit(-1);
    }

    for(i = 0; i < sz_array; i ++ ) {
        scanf("%d", &data_array[i]);
    }
    for(i = (sz_array - 1); i >= 0; i--) {
        printf("%d ", data_array[i]);
    }
    free(data_array);
    exit (0);
}
