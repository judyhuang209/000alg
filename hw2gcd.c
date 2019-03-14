#include<stdio.h>

void print_gcd(int a, int b){
    while((a != 0) && (b != 0)){
        if(a > b)
            a = a % b;
        else
            b = b % a;
    }
    if(a == 0)
        printf("%d\n", b);
    else
        printf("%d\n", a);
}

int main(){
    int n = 0;
    scanf("%d", &n);
    while(n--){
        int x = 0;
        int y = 0;
        scanf("%d", &x);
        scanf("%d", &y);
        print_gcd(x, y);
    }
}
