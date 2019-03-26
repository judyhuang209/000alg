#include<iostream>
using namespace std;

void bubbleSort(int arr[], int length)
{
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
            }
        }
        if (swapped == false)
            break;
    }
}

void printArray(int arr[], int length){
    for(int i = 0; i < length; i++){
        if (i != (length - 1))
            cout << arr[i] << " ";
        else
            cout << arr[i] << endl;
    }
}



int main()
{
    while(1)
    {
        int n;
        cin >> n;
        if (n == 0)
            break;
        int age[n] = {'\0'};
        for(int i = 0; i < n; i++)
            cin >> age[i];
        bubbleSort(age, n);
        printArray(age, n);
    }

}
