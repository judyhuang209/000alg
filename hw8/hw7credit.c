#include<stdio.h>

void LuhnCheck(int *numbers){
    int i = 0;
    int sum = 0;
    for(i; i<16; i++){
        if(i%2==0){
            int temp = numbers[i]*2;
            sum += temp/10 + temp%10;
        }
        else
            sum += numbers[i];
    }
    if(sum%10==0)
        printf("Valid\n");
    else
        printf("Invalid\n");
}

int main(){
    int n = 0;
    scanf("%d", &n);
    while(n--){
        int temp;
        int i = 0;
        int j = 0;
        int numbers[16] = {0};
        for(i; i<4; i++){
            scanf("%d", &temp);
            numbers[j]=temp/1000;
            temp=temp%1000;
            j++;
            numbers[j]=temp/100;
            temp=temp%100;
            j++;
            numbers[j]=temp/10;
            temp=temp%10;
            j++;
            numbers[j]=temp;
            j++;
        }
        /*
        i = 0;
        for(i; i<16; i++){
            printf("%d", numbers[i]);
        }
        */
        LuhnCheck(numbers);
    }
}
