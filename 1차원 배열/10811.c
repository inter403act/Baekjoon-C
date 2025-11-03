#include <stdio.h>
#include <stdlib.h>

void reverse(int* arr,int i,int j);

int main(void){
    int N,M;
    scanf("%d %d",&N,&M);
    int* basket = (int *)malloc(sizeof(int)*(N+1));
    for(int i=1; i<N+1; i++){
        basket[i] = i;
    }

    for(int repeat = 0; repeat<M; repeat++){
        int i,j;
        scanf("%d %d",&i,&j);
        reverse(basket,i,j);
    }

    for(int i=1; i<N+1; i++){
        printf("%d ",basket[i]);
    }
    printf("\n");
    free(basket);
}


void reverse(int* arr,int i,int j){

    while(1){
        if(j<=i) break;
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}