#include <bits/stdc++.h>
using namespace std;

void Largest3Element(int arr[], int size)
{
    if (size < 3)
    {
        cout << "Invalid input" << endl;
        return;
    }

    int F, S, T = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > F)
        {
            T = S;
            S = F;
            F = arr[i];
        }
        else if (arr[i] > S && arr[i] != F)
        {
            T = S;
            S = arr[i];
        }
        else if (arr[i] > T && arr[i] != S && arr[i] != F)
        {
            T = arr[i];
        }
    }
    cout << "The largest three element in the array is : " << F << " " << S << " " << T << endl;
}
int main()
{
    int arr[] = {10, 4, 3, 50, 23};
    int n = sizeof(arr) / sizeof(arr[0]);
    Largest3Element(arr, n);
    return 0;
}