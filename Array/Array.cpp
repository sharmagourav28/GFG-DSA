#include <iostream>
using namespace std;

int linearserch(int arr[], int n, int num)
{
    // linear search in array
    for (int i = 0; i < n; i++)
    {
        if (num == arr[i])
        {
            return i;
        }
    }
    return -1;
}

int binarysearch(int arr[], int start, int end, int num)
{

    while (start <= end)
    {

        int mid = (start + end) / 2;
        if (arr[mid] == num)
        {
            return mid;
        }
        else if (arr[mid] > num)
        {
            end = mid - 1;
        }
        else if (arr[mid] < num)
        {
            start = mid + 1;
        }
    }
    return -1;
}

void reversearray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
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
    int arr[] = {3, 5, 6, 7, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int ele = 9;
    int ans = linearserch(arr, size, ele);

    // Linear Search
    if (ans != -1)
    {
        cout << ele << " Found at index " << ans << endl;
    }
    else
    {
        cout << ele << " Not found in array" << endl;
    }

    // Binary Search
    int key = binarysearch(arr, 0, size - 1, ele);
    if (key != -1)
    {
        cout << ele << " Found at index " << key << endl;
    }
    else
    {
        cout << ele << " Not Found in array " << endl;
    }
    cout << "Size of an array " << size << endl;
    // reverse an array
    printarray(arr, size);
    reversearray(arr, 0, size - 1);
    printarray(arr, size);

    return 0;
}