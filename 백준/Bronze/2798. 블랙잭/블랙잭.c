#include <stdio.h>
 
int main(void){
    int N, M;
    scanf("%d %d", &N, &M);
 
    int cards[N];
    for(int num=0; num<N; num++){
        scanf("%d", &cards[num]);
    }
 
    int blackjack=0;
    for(int i=0; i<N-2; i++){
        for(int j=i+1; j<N-1; j++){
            for(int k=j+1; k<N; k++){
                int sum = cards[i]+cards[j]+cards[k];
                if(sum>blackjack && sum<=M)
                    blackjack = sum;
            }
        }
    }
    printf("%d\n", blackjack);
}