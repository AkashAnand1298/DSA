#include <iostream>
using namespace std;
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int min(int arr[], int n,int k)
{
    int min;
    min = k;
    for (int i = k; i < n; i++)
    {
        if (arr[min] > arr[i])
        {
            min = i;
        }
    }
    return min;
}
void Selection_sort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int x = min(arr,n,i);
        swap(arr[x],arr[i]);
    }
}

int main()
{
    int N;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    Selection_sort(arr, N);
    cout << "Sorted array: \n";
    printArray(arr, N);
    return 0;
}