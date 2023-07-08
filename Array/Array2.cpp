#include <iostream>
using namespace std;

void insertElement(int arr[], int n, int pos, int ele)
{
    for (int i = n - 1; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos] = ele;
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[15] = {2, 4, 6, 8, 9, 2};
    int n = 6;
    int pos = 3;
    int ele = 28;
    cout << "Array Before Insertion : " << endl;
    printArray(arr, n);
    insertElement(arr, n, pos, ele);
    n++;
    printArray(arr, n);
    cout << "Array After Insertion: " << endl;
}