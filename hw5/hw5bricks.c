#include<stdio.h>

void countMoves (int x, int *blocks, int aver){
    int i = 0;
    int move = 0;
    for(i; i<x; i++){
        if(blocks[i] > aver)
            move += (blocks[i] - aver);
    }
    printf("%d\n", move);
}


int main(){
    int n = 0;
    scanf("%d", &n);
    while(n--){
        int x = 0;
        scanf("%d", &x);
        int *blocks;
        blocks = (int *) malloc (sizeof(int*) * x);
        int i = 0;
        int aver = 0;
        for(i; i<x; i++){
            scanf("%d", &blocks[i]);
            aver += blocks[i];
        }
        aver = aver/x;
        countMoves(x, blocks, aver);
    }
}
