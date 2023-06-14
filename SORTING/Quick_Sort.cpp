#include <iostream>
using namespace std;
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low);
    for (int j = low; j <= high-1; j++)
    {
        if (arr[j] < pivot)
        {
            swap(arr[i], arr[j]);
            i++;
        }
    }
    swap(arr[i], arr[high]);
    return i;
}
void quick_sort(int *arr, int s, int e)
{
    if (s < e)
    {
        int p = partition(arr, s, e);
        quick_sort(arr, s, p - 1);
        quick_sort(arr, p + 1, e);
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    quick_sort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}