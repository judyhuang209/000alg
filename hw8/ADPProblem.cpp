#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main(){
    int Set;
    cin >> Set;
    while(Set-- != 0){
        string a;
        cin >> a;
        float coef = 0, cons = 0, eq;
        for(int i=0; i <= a.length()-1; i++){
            if(a[i] == '=')
                eq = i;
            if(a[i] == 'x'){
                if(a[i-1] < '0' || a[i-1] > '9')
                    a.insert(i, "1");
            }
        }

        for(int i=0; i <= a.length()-1; i++){
            if(a[i] == 'x'){
                int temp1 = i-1;
                int temp2 = i-1;
                while(a[temp1-1] <= '9' && a[temp1-1] >= '0')
                    temp1--;

                int exp = temp2 - temp1;
                int num = 0;

                for(int j = 0; j<=exp; j++)
                    num += (a[temp2--] - '0')*pow(10,j);

                if(a[temp1-1] == '-')
                    num *= -1;

                if(i < eq)
                    coef += num;
                else
                    coef -= num;
            }
        }

        for(int i=0; i <= a.length()-1; i++){
            int temp1;
            if((a[i] <= '9' && a[i] >= '0') && (a[i-1] > '9' || a[i-1] < '0')){
                temp1 = i;
                int temp2 = temp1;
                while(a[temp2+1] >= '0' && a[temp2+1] <= '9'){
                    temp2++;
                }
                int exp = temp2 - temp1;
                int num = 0;
                if(a[temp2+1] != 'x'){
                    string b = a.substr(0,temp2+1);
                    num +=  atoi(&b[temp1]);
                }

                if(a[temp1-1] == '-')
                    num *= -1;

                if(temp1 < eq)
                    cons -= num;
                else
                    cons += num;
            }
        }

        if(coef == 0){
            if(cons == 0)
                cout << "IDENTITY" << endl;
            else
                cout << "IMPOSSIBLE" << endl;
        }
        else{
            float ans = cons/coef;
            cout << floor(ans) << endl;
        }
    }

    return 0;
}
