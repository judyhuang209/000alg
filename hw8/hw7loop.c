#include<stdio.h>

void checkHamil(int adj[100][100], int V){
    int i = 1;
    int j = 1;
    int *visit;
    visit = (int *) malloc (V * sizeof(int*));
    for(i=1; i<=V; i++){
        for(j=i+1; j<=V; j++){
            if(adj[i][j]==1){

            }
        }
        printf("\n");
    }
}


int main(){
    int n = 0;
    scanf("%d", &n);
    while(n--){
        int V = 0;
        scanf("%d", &V);
        int adj[100][100] = {0};
        int m = V;
        while(m--){
            int i = 0;
            int j = 0;
            char trash;
            scanf("\n%c%d%c%d%c", &trash, &i, &trash, &j, &trash, &trash);
            adj[i][j] = 1;
            adj[j][i] = 1;
        }

        checkHamil(adj, V);
    }
}
