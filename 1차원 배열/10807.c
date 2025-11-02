#include <stdio.h>

int main(void){
    int N,v;
    int ans = 0;
    scanf("%d",&N);

    int arr[N];

    for(int i=0; i<N; i++){
        scanf("%d",&arr[i]);
    }
    
    scanf("%d",&v);

    for(int i=0; i<N; i++){
        if(v==arr[i]) ans++; 
    }

    printf("%d\n",ans);
}