#include <bits/stdc++.h>
using namespace std;
void countSort(vector<int> &v)
{
    int n = v.size();
    int maxi = *max_element(v.begin(), v.end());
    int mini = *min_element(v.begin(), v.end());

    int range = maxi - mini + 1;

    vector<int> count(range), output(n);

    for (int i = 0; i < n; i++)
    {
        count[v[i] - mini]++;
    }

    for (int i = 1; i < range; i++)
    {
        count[i] += count[i - 1];
    }

    for (int i = n - 1; i >= 0; i--)
    {
        output[count[v[i] - mini] - 1] = v[i];
        count[v[i] - mini]--;
    }
    for (int i = 0; i < n; i++)
    {
        v[i] = output[i];
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

    countSort(arr);
    printarray(arr);
    return 0;
}