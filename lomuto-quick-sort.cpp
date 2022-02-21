#include <bits/stdc++.h>
using namespace std;
int partition(vector<int> &arr, int s, int e)
{
    // int pivot = arr[s];
    // int i = 0;
    // int j = e;
    // while (i < j)
    // {
    //     while (arr[i] <= pivot)
    //     {
    //         i++;
    //     }
    //     while (arr[j] > pivot)
    //     {
    //         j--;
    //     }
    //     if (i < j)
    //     {
    //         swap(arr[i], arr[j]);
    //     }
    // }
    // swap(arr[s], arr[j]);
    // return j;
    
    int pivot = arr[e];
    int i = s - 1;
    for (int j = s; j < e; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[e]);
    return i + 1;
}
void quicksort(vector<int> &arr, int s, int e)
{

    if (s < e)
    {
        int pivot = partition(arr, s, e);
        quicksort(arr, s, pivot - 1);
        quicksort(arr, pivot + 1, e);
    }
}
void printarray(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        arr.push_back(num);
    }

    quicksort(arr, 0, n - 1);
    printarray(arr);
    return 0;
}
