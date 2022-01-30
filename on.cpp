#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, min, count = 0, arr[n];
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        min = arr[0];
        for (int i = 0; i < n; i++)
        {
            if (min > arr[i]){
                min = arr[i];
            }
                
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % min == 0)
            {
                count ++;
            }
        }
        if (count == n)
        {
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] / min << " ";
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
        }
    }
}