#include<stdio.h>

void countPacks (float *P, int n){
    int i = 0;
    int j = 0;
    float *A;
    int pack = 0;
    A = (float *) malloc (sizeof(float *)*n);
    int a = 0;
    for(a; a<n; a++){
        A[a] = 0;
    }
    for(i; i<n; i++){
        j = 0;
        for(j; j<n; j++){
            if(P[i]+A[j] <= 1.000001){
                A[j] = A[j] + P[i];
                break;
            }
        }
    }
    int x = 0;
    printf("%d", j+1);
}

int main(){
    int n = 0;
    scanf("%d", &n);
    float *packages;
    packages = (float *) malloc (sizeof(float *)*n);
    int i = 0;
    for(i; i<n; i++)
        scanf("%f", &packages[i]);

    countPacks(packages, n);
}
