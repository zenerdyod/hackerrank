#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int distinct_characters_count(char* a) {
    bool present = false;
    int i = 0, j = 0, returnable = 0;

    for(i = 0; i < strlen(a); i++) {
        present = false;
        for(j = 0; j < strlen(a); j++) {
            if(a[i] == a[j]) {
                present = true;
            }
        }
        if(!present) {
            returnable++;
        }
    }
    return returnable;
}
int lexicographic_sort(char* a, char* b) {
    char *temp = NULL;
    if(strcmp(a,b) > 0) {
        temp = (char *)malloc(1024 * (sizeof(char)));
        if(!temp) {
            printf("Memory allocation issue\n");
            exit(-1);
        }
        strcpy(temp, b);
        strcpy(b,a);
        strcpy(a,temp);
        free(temp);
        temp = NULL;
    }
    return 0;
}

int lexicographic_sort_reverse(char* a, char* b) {

    char *temp = NULL;
    if(strcmp(a,b) < 0) {
        temp = (char *)malloc(1024 * (sizeof(char)));
        if(!temp) {
            printf("Memory allocation issue\n");
            exit(-1);
        }
        strcpy(temp, b);
        strcpy(b,a);
        strcpy(a,temp);
        free(temp);
        temp = NULL;
    }
    return 0;

}

int sort_by_number_of_distinct_characters(char* a, char* b) {

    char *temp = NULL;
    if(distinct_characters_count(a) < distinct_characters_count(b)) {
        temp = (char *)malloc(1024 * (sizeof(char)));
        if(!temp) {
            printf("Memory allocation issue\n");
            exit(-1);
        }
        strcpy(temp, b);
        strcpy(b,a);
        strcpy(a,temp);
        free(temp);
        temp = NULL;
    }
    return 0;
}

int sort_by_length(char* a, char* b) {

    char *temp = NULL;
    if(strlen(a) > strlen(b)) {
        temp = (char *)malloc(1024 * (sizeof(char)));
        if(!temp) {
            printf("Memory allocation issue\n");
            exit(-1);
        }
        strcpy(temp, b);
        strcpy(b,a);
        strcpy(a,temp);
        free(temp);
        temp = NULL;
    }
    return 0;
}

void string_sort(char** arr, int len,int (*cmp_func)( char* a, char* b)){

    int i = 0;
    for(i = 0; i < (len-1); i++) {
        cmp_func(arr[i], arr[i+1]);
    }

}


int main()
{
    int n;
    scanf("%d", &n);

    char** arr;
	arr = (char**)malloc(n * sizeof(char*));
    for(int i = 0; i < n; i++){
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s", *(arr + i));
        *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
    }

    string_sort(arr, n, sort_by_length);
    //lexicographic_sort(arr[0], arr[1]);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");
    /*
    string_sort(arr, n, lexicographic_sort);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, lexicographic_sort_reverse);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, sort_by_length);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");
    */
}
