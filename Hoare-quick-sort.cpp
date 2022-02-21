// faster then lomuto partition wala quick sort

#include <bits/stdc++.h>
using namespace std;
int partition(vector<int> &arr, int s, int e)
{
    int pivot = arr[s];
    int i = s - 1;
    int j = e + 1;
    while (true)
    {
        do
        {
            i++;
        } while (arr[i] < pivot);
        do
        {
            j--;
        } while (arr[j] > pivot);

        if (i >= j)
        {
            return j;
        }
        swap(arr[i], arr[j]);
    }
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
