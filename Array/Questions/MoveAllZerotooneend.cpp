#include <iostream>
#include <vector>
using namespace std;

int Movezero(int arr[], int n)
{
    vector<int> temp;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            temp.push_back(arr[i]);
        }
    }
    int nsize = temp.size();
    for (int i = 0; i < nsize; i++)
    {
        arr[i] = temp[i];
    }
    for (int i = nsize; i < n; i++)
    {
        arr[i] = 0;
    }
}
void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 0, 0, 0, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printarray(arr, n);
    Movezero(arr, n);
    printarray(arr, n);
}