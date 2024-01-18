#include <stdio.h>
 
int main(void){
    int A, B, V;
    scanf("%d %d %d", &A, &B, &V); 
    int n;
    if((V-A)%(A-B)==0){
        n = (V-A)/(A-B)+1;
    }
    else{
        n = (V-A)/(A-B)+2;
    }
    printf("%d\n", n);
}