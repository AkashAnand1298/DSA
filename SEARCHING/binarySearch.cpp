#include<iostream>
using namespace std;
void BinarySearch(int arr[], int start, int end, int x)
{
    int mid = (start + end)/2;
    if(arr[mid] == x)
    {
        cout << mid + 1 << " ";
        return;
    }
    else if(arr[mid] > x)
    {
        BinarySearch(arr, mid + 1, end, x);
    }
    else
    {
        BinarySearch(arr, start, mid, x);
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4};
    int n = 4;
    BinarySearch(arr, n, 0, 4);
    return 0;
}