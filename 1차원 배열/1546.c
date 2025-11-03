#include <stdio.h>
#include <stdlib.h>

int main(void){
    int N;
    scanf("%d",&N);

    double* grade = (double*)malloc(sizeof(double)*N);

    for(int i=0; i<N; i++){
        scanf("%lf",&grade[i]);
    }

    double max = grade[0];
    for(int i=1; i<N; i++){
        if(max<grade[i]) max = grade[i];
    }

    for(int i=0; i<N; i++){
        grade[i] = (grade[i]/max)*100;
    }
    
    double sum = 0;

    for(int i=0; i<N; i++){
        sum += grade[i];
    }

    printf("%lf\n",sum/N);
    free(grade);
}