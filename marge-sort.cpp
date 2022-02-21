#include <bits/stdc++.h>
using namespace std;
void marge(int arr[], int s, int mid, int e)
{
    int n1 = mid - s + 1;
    int n2 = e - mid;
    int arr1[n1], arr2[n2];
    int k1 = s;
    for (int i = 0; i < n1; i++)
    {
        arr1[i] = arr[k1++];
    }
    int k2 = mid + 1;
    for (int i = 0; i < n2; i++)
    {
        arr2[i] = arr[k2++];
    }
    int i = 0, j = 0, k = s;
    while (i < n1 && j < n2)
    {
        if (arr1[i] <= arr2[j])
        {
            arr[k] = arr1[i];
            i++;
        }
        else
        {
            arr[k] = arr2[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k++] = arr1[i++];
    }
    while (j < n2)
    {
        arr[k++] = arr2[j++];
    }
}
void margesort(int arr[], int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int mid = s + (e - s) / 2;
    margesort(arr, s, mid);
    margesort(arr, mid + 1, e);
    marge(arr, s, mid, e);
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
    margesort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}