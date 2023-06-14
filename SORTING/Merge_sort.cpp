#include <iostream>
using namespace std;
void merge(int *arr, int s, int e)
{
    int mid = (s + e) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;
    // creating 2 arrays to sorted and merged
    int first[len1];
    int second[len2];
    // copy values
    int k = s;// k = mainArrayIndex;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[k++];
    }
    k = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[k++];
    }
    // merge 2 sorted arrays
    int index1 = 0;
    int index2 = 0;
    k = s;
    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[k++] = first[index1++];
        }
        else
        {
            arr[k++] = second[index2++];
        }
    }
    while (index1 < len1)
    {
        arr[k++] = first[index1++];
    }
    while (index2 < len2)
    {
        arr[k++] = second[index2++];
    }
}
void merge_sort(int *arr, int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;// mid of the array
        merge_sort(arr, low, mid);// sorting left array
        merge_sort(arr, mid + 1, high);// sorting right array
        merge(arr, low, high);// merging both arrays
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    merge_sort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    } cout<<endl;
    
    return 0;
}