#include <stdio.h>
#include <stdlib.h>

int main (void){
    
    int input;
    int start_a,start_b;
    int a,b,c;
    int i = 0;  

    scanf("%d",&input);
    // printf("%d\n", input);

    if(!(input < 10)){
        start_a = input / 10;
        start_b = input % 10;
    }else{
        start_a = 0;
        start_b = input; 
    }

    // printf("%d %d\n", start_a,start_b);
    
    b = start_a + start_b;
    a = start_b;
    // printf("%d %d \n", a,b);
    while(1){
        // printf("%d %d / %d %d\n",start_a, a, start_b , b);
        if(a == start_a && b == start_b){
            break;
        }
        i++;
        c = b;
        b = (a+b)%10;
        a = c; 

    }

    printf("%d",i+1);
    return 0; 
}