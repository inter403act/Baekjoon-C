#include <stdio.h>
#include <stdlib.h>


void basket_ball(int *basket,int i,int j,int k);

int main(void){
    int N,M;
    int i,j,k;
    scanf("%d %d",&N,&M);

    int* basket = (int*)malloc(sizeof(int)*(N+1));

    for(int i=0; i<=N; i++){
        basket[i] = 0;
    }

    for(int count=0; count<M; count++){
        scanf("%d %d %d",&i,&j,&k);
        basket_ball(basket,i,j,k);
    }

    for(int i=1; i<=N; i++){
        printf("%d ",basket[i]);
    }
    printf("\n");
    free(basket);
}

void basket_ball(int *basket,int i,int j,int k){
    for(int num = i; num<=j; num++){
        basket[num] = k; 
    }
}