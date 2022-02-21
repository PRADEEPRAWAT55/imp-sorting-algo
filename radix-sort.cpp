#include <bits/stdc++.h>
using namespace std;
void countSort(vector<int> &v, int k)
{
    static int num = 1;
    cout << "My " << num << "th iteration" << endl;
    num++;
    int n = v.size();
    vector<int> count(10), output(n);
    for (int i = 0; i < n; i++)
    {
        count[(v[i] / k) % 10]++;
    }
    for (int i = 1; i < 10; i++)
    {
        count[i] += count[i - 1];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        output[count[((v[i] / k) % 10)] - 1] = v[i];
        count[(v[i] / k) % 10]--;
    }
    for (int i = 0; i < n; i++)
    {

        v[i] = output[i];
        cout << v[i] << " ";
    }
    cout << endl;
}
void radix_sort(vector<int> &v)
{
    int maxi = *max_element(v.begin(), v.end());
    for (int i = 1; (maxi / i) > 0; i *= 10)
    {
        countSort(v, i);
    }
}
void printarray(vector<int> &arr)
{
    cout << "final array" << endl;
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

    radix_sort(arr);
    printarray(arr);
    return 0;
}