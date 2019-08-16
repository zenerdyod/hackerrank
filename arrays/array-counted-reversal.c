#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void roatate_array(int *array, int roatation, int arr_sz) {
	int tmp_store = 0,i = 0;
	
		do {
			tmp_store = array[0];
			for(i = 0; i < (arr_sz -1); i++){
				array[i] = array[i+1];
			}
			array[arr_sz - 1] = tmp_store;
			roatation --;
		}while(roatation);
}
int main() {
	int arr_sz, rotation, *array = NULL, i = 0;
	arr_sz = rotation = 0;
	
	scanf("%d %d", &arr_sz, &rotation);
	if(rotation > arr_sz) {
		exit(-1);
	}

	array = (int *)malloc(arr_sz * (sizeof(int)));
	if(array == NULL) {
		perror("Error: ");
		exit(-2);
	}
	for(i = 0; i < arr_sz; i++) {
		scanf("%d", &array[i]);
	}
	roatate_array(array, rotation, arr_sz);
	for(i = 0; i < arr_sz; i++) {
		printf("%d ", array[i]);
	}
	exit(0);
}
