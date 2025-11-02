#include <stdio.h>
#include <stdlib.h>


void swap(int *basket,int a,int b);

int main(void){
    int N,M;
    int a,b;
    scanf("%d %d",&N,&M);
    int *basket = (int*)malloc(sizeof(int)*(N+1));
    for(int i=1; i<=N; i++){
        basket[i] = i;
    }

    for(int i=0; i<M; i++){
        scanf("%d %d",&a,&b);
        swap(basket,a,b);
    }

    for(int i=1; i<=N; i++){
        printf("%d ",basket[i]);
    }
    printf("\n");
    free(basket);
}

void swap(int *basket,int a,int b){
    int temp = basket[a];
    basket[a] = basket[b];
    basket[b] = temp;
}