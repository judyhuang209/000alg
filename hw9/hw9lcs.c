#include<stdio.h>

int max(int a, int b){
    if(a>b)
        return a;
    else
        return b;
}

int main(){
    int N = 0;
    scanf("%d", &N);
    while(N--){
        char X[99] = {'\0'};
        char Y[99] = {'\0'};
        scanf("%s", &X);
        scanf("%s", &Y);
        int m = 0;
        int n = 0;
        while(X[m]!='\0')   m++;
        while(Y[n]!='\0')   n++;
        int c[99][99];
        int i = 0;
        for (i; i<=n; i++) c[i][0] = 0;
        i = 0;
        for (i; i<=m; i++) c[0][i] = 0;
        i = 1;
        int j = 1;
        for(i; i<=m; i++){
            for(j=1; j<=n; j++){
                if(X[i-1]==Y[j-1])
                    c[i][j] = c[i-1][j-1]+1;
                else
                    c[i][j] = max(c[i-1][j], c[i][j-1]);
            }
        }
        printf("%d\n", c[m][n]);
    }
}
