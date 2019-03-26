#include <stdio.h>

int main(){
    int n = 0;
    scanf("%d", &n);
    for(n; n > 0; n--){
        int wrong = 0;
        scanf("%d", &wrong);
        int i = 1;
        int sum = 0;
        for(i; sum <= wrong; i++){
            sum += i;
        }
        sum -= wrong;
        i--;
        printf("%d %d\n", sum, i);
    }
}
