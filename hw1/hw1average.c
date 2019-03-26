#include <stdio.h>

int main(){
    int C = 0;
    scanf("%d", &C);
    for (C; C > 0; C--){
        int N = 0;
        scanf("%d", &N);
        int *score;
        score = (int *)malloc(sizeof(int*) * N);
        int i = 0;
        int aver = 0;
        for(i; i < N; i++){
            scanf("%d", &score[i]);
            aver += score[i];
        }
        aver = aver/N;
        int count = 0;
        for(i = 0; i < N; i++){
            if(score[i] > aver)
                count++;
        }
        float result = ((float)count)/((float)N)*((float)100);
        printf("%.3f%%\n", result);
    }

}
