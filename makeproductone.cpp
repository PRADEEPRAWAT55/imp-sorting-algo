#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int makeProductOne(int arr[], int n)
    {
        int zero = 0;
        int neg_element = 0;
        int step = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
            {
                zero++;
            }
            else if (arr[i] > 0)
            {
                step += (arr[i] - 1);
            }
            else if (arr[i] < 0)
            {
                neg_element++;
                step += (-1 - (arr[i]));
            }
        }
        step += zero;
        if (neg_element % 2 != 0 && zero == 0)
        {
            step += 2;
        }
        return step;
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        cout << ob.makeProductOne(arr, n) << endl;
    }
    return 0;
}