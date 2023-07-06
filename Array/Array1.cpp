#include <iostream>
using namespace std;
void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int insertAtend(int arr[], int n, int k, int cap)
{
    if (n >= cap)
    {
        return n;
    }
    arr[n] = k;
    return (n + 1);
}

int main()
{
    int arr[20] = {23, 4, 5, 6, 7, 8, 9};
    int cap = sizeof(arr) / sizeof(arr[0]);
    int n = 7;
    int k = 28;
    printarray(arr, cap);
    insertAtend(arr, n, k, cap);
    printarray(arr, n);
}