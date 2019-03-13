#include <iostream>
using namespace std;

int main()
{
    char str1[10000] = "";
    char str2[10000] = "";
    while(cin >> str1 >> str2)
    {
        int i = 0;
        int j = 0;
        for(j; str2[j] != '\0'; j++)
        {
            if (str1[i] == str2[j])
                i++;
        }
        if (str1[i] == '\0')
            cout << "Yes\n";
        else
            cout << "No\n";
    }
}
