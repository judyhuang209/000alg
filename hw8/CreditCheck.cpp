#include <iostream>
#include <stdlib.h>

using namespace std;

int Num_to_Char (int k){
    if(k < 10)
        return k;
    else{
        int p = k/10;
        int q = k%10;
        return p + q;
    }
}

int main(){
    int sets;
    cin >> sets;
    while(sets-- != 0){
        string a[4];
        int even = 0, num, sum = 0, sum1 = 0;

        for(int i=0; i <= 3; i++)
            cin >> a[i];

        for(int i=0; i <= 3; i++){
            num = (a[i][0] - '0') * 2 ;
            sum += Num_to_Char(num);
            num = (a[i][2] - '0') * 2 ;
            sum += Num_to_Char(num);
        }

         for(int i=0; i <= 3; i++){
            sum1 += a[i][1] - '0';
            sum1 += a[i][3] - '0';
         }

         if((sum + sum1)%10 == 0)
            cout << "Valid" << endl;
         else
            cout << "Invalid" << endl;
    }

    return 0;
}
