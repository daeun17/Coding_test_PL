#include <stdio.h>
#include <stdlib.h>

int main (void){
    
    int t;
    scanf("%d", &t);
    int* arr;
    arr = (int*)malloc(sizeof(int) * t);
    int max_score = 0; 
    double result = 0; 
    int i; 

    for(i = 0; i < t ; i++){
        scanf("%d",&arr[i]);
        if (max_score < arr[i]){
            max_score = arr[i];
        }
    }

    for(i = 0 ; i < t ; i++){
        result += (double)arr[i]/max_score * 100;
    }
    printf("%f", result/t);

    free(arr);
    return 0; 
}