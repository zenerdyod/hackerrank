/* https://www.hackerrank.com/challenges/2d-array/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=arrays 
 * Author : Sayooj K Karun(info.sayooj@gmail.com)
*/
#include <stdio.h>
#include <stdlib.h>

#define STATIC_SIZE	6

int main() {
	int i = 0, j = 0, cur_sum = 0, prev_sum = 0;
	int *hourglass = (int*)malloc((STATIC_SIZE+1) * sizeof(int));
	int **array = (int**)(malloc(STATIC_SIZE * sizeof(int*)));

	for(i = 0; i < STATIC_SIZE; i++) {
		array[i] = (int*)(malloc(STATIC_SIZE * sizeof(int)));
	}
/*	int array[6][6] = {{0,-4,-6,0,-7,-6},
		       {-1,-2,-6,-8,-3,-1},
		       {-8,-4,-2,-8,-8,-6},
		       {-3,-1,-2,-5,-7,-4},
		       {-3,-5,-3,-6,-6,-6},
		       {-3,-6,0,-8,-6,-7}};
*/
	for(i = 0; i < STATIC_SIZE; i++) {
		for(j = 0; j < STATIC_SIZE; j++) {
			scanf("%d", &array[i][j]);
		}
	}
	for(i = 0; i < (STATIC_SIZE - 2); i++) {
		for(j = 0; j < (STATIC_SIZE - 2); j++) {
			cur_sum = (array[i][j] + array[i][j+1] + array[i][j+2] + array[i+1][j+1	] +  \
					array[i+2][j] + array[i+2][j+1] + array[i+2][j+2]);
			if(i == 0 && j == 0) {
				prev_sum = cur_sum;
			}
			if(cur_sum > prev_sum) {
				hourglass[0] = array[i][j];
				hourglass[1] = array[i][j+1];
				hourglass[2] = array[i][j+2];
				hourglass[3] = array[i+1][j+1];
				hourglass[4] = array[i+2][j];
				hourglass[5] = array[i+2][j+1];
				hourglass[6] = array[i+2][j+2];
			prev_sum = cur_sum;
			}
		}
	}
	printf("%d", prev_sum);
//	printf("%d %d %d\n  %d  \n%d %d %d\n", hourglass[0], hourglass[1], hourglass[2], hourglass[3], hourglass[4], hourglass[5], hourglass[6]);
	for(i = 0; i < STATIC_SIZE; i++) {
		free(array[i]);
	}
	free(array);
	free(hourglass);
}
	
