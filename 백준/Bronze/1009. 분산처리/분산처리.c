#include <stdio.h>

int main (void){
    
    int t;
    int i, j; 
    int a , b;
    int result = 0;
    scanf("%d", &t);

    for (i = 0; i < t ; i++){
        scanf("%d %d",&a, &b);
        result = a;

        for(j = 0 ; j < b - 1; j++){
            result = result * a % 10; // 오버플로우 방지를 위함, 나머지 값만 있으면 되서 끝자리만 있으면 됨
        }
        
        if(result % 10 == 0){
            printf("%d\n", 10);
        }else{
            printf("%d\n", result % 10); 
        }

    }
    return 0; 
}
