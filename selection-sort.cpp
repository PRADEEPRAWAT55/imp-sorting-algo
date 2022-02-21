#include <bits/stdc++.h>
using namespace std;
void selectionsort(vector<int> &arr)
{
    for (int i = 0; i < arr.size() - 1; i++)
    {
        int min-index = i;
        for (int j = 1 + i; j < arr.size(); j++)
        {
            if (arr[min-index] > arr[j])
            {
                min-index = j;
            }
        }
        swap(arr[i], arr[min-index]);
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

    selectionsort(arr);
    printarray(arr);
    return 0;
}