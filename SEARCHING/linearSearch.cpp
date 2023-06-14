#include<iostream>
using namespace std;
void LinearSearch(int arr[], int n, int x)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == x)
        {
            cout << i + 1 << " ";
            return;
        }
    }
}
int main()
{
    int arr[] = {1 ,2 , 3, 4};
    int n = 4;
    LinearSearch(arr, n, 4);
    return 0;
}