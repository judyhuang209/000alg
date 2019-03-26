#include<iostream>
using namespace std;

int bubbleSortCount(int arr[], int length)
{
    int swapCount = 0;
    for(int i = 0; i < (length - 1); i++)
    {
        bool swapped = false;
        for(int j = 0; j < (length - i - 1); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr [j] = arr[j + 1];
                arr [j + 1] = temp;
                swapped = true;
                swapCount++;
            }
        }
        if (swapped == false)
            break;
    }
    return swapCount;
}

int main(){
    int n = 0;
    cin >> n;
    while(n--){
        int m = 0;
        cin >> m;
        int num[m] = {'\0'};
        for(int i = 0; i < m; i++){
            cin >> num[i];
        }
        cout<< "Optimal swapping takes " << bubbleSortCount(num, m) << " swaps." << endl;
    }
}
