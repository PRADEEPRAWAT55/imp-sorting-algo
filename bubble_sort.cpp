#include <bits/stdc++.h>
using namespace std;
void bubble_sort(vector<int> &arr)
{
    int num = 0;
    while (num < arr.size()-1)
    {
        int temp = 0;
        for (int i = 0; i < arr.size() - num - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
                temp = 1;
            }
        }
        if (temp == 0)
        {
            break;
        }
        num++;
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

    bubble_sort(arr);
    printarray(arr);
    return 0;
}