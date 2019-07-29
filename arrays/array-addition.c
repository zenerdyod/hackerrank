#include <stdio.h>
#include <stdlib.h>

int main() {

    int sz_array = 0, *data_array = NULL, sum =0, i = 0;
    scanf("%d", &sz_array);

    data_array = (int *)malloc( sz_array * sizeof(int));
    if(!data_array) {
        printf("Allocation error!\n");
    }
    for (i = 0; i < sz_array; i++) {
        scanf("%d", &data_array[i]);
        sum += data_array[i];
    }
    printf("%d", sum);
    free(data_array);
    return 0;
}
