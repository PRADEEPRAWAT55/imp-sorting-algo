#include <bits/stdc++.h>
using namespace std;
void heapify(vector<int> &v, int n, int i)
{
    int large = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < n && v[large] < v[l])
        large = l;

    if (r < n && v[large] < v[r])
        large = r;

    if (large != i)
    {
        swap(v[large], v[i]);
        heapify(v, n, large);
    }
}
void heap(vector<int> &v)
{
    int n = v.size();
    for (int i = (n - 2) / 2; i >= 0; i--)
    {
        heapify(v, n, i);
    }
}
void heapSort(vector<int> &v)
{
    int n = v.size();
    heap(v);
    for (int i = n - 1; i > 0; i--)
    {
        swap(v[i], v[0]);
        heapify(v, i, 0);
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

    heapSort(arr);
    printarray(arr);
    return 0;
}