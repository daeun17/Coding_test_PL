#include <stdio.h>

int main (void){
    
    int input;
    int result = 0;

    scanf("%d",&input);
    char number[input]; 
    scanf("%s",&number);
    

    for (int i = 0 ; i < input ; i++){
        result += number[i] - '0';
    }

    printf("%d",result);
    return 0; 
}