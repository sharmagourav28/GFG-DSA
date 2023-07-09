#include <bits/stdc++.h>
using namespace std;

void secondLargest(int arr[], int size)
{
    if (size < 2)
    {
        cout << "Invalid input" << endl;
        return;
    }

    int F, S = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > F)
        {

            S = F;
            F = arr[i];
        }
        else if (arr[i] > S && arr[i] != F)
        {

            S = arr[i];
        }
    }
    cout << "The Second largest  element in the array is : " << S << endl;
}
int main()
{
    int arr[] = {10, 4, 3, 50, 23};
    int n = sizeof(arr) / sizeof(arr[0]);
    secondLargest(arr, n);
    return 0;
}