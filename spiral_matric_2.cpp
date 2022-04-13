// CODE BY :- AJAY PAL IIT (BHU) VARANASI
#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define kk '\n'
using namespace std;

vector<vector<int>> generateMatrix(int n)
{
    vector<vector<int>> v;
    for (int i = 0; i < n; i++)
    {
        vector<int> t;
        for (int j = 0; j < n; j++)
        {
            t.push_back(0);
        }

        v.push_back(t);
    }
 
    int m = n;
    int k = 1;
    int top = 0, bottom = n - 1, left = 0, right = m - 1;

    int dir = 0;
    while (k <= n * n)
    {
        if (dir == 0)
        {
            for (int j = left; j <= right; j++)
            {
                v[top][j] = k;
                k++;
            }
            top++;
        }
        else if (dir == 1)
        {
            for (int i = top; i <= bottom; i++)
            {
                v[i][right] = k;
                k++;
            }
            right--;
        }
        else if (dir == 2)
        {
            for (int j = right; j >= left; j--)
            {
                v[bottom][j] = k;
                k++;
            }
            bottom--;
        }
        else
        {
            for (int i = bottom; i >= top; i--)
            {
                v[i][left] = k;
                k++;
            }
            left++;
        }

        dir = (dir + 1) % 4;
    }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << v[i][j] << " ";
    //     }
    //     cout << kk;
    // }

    return v;
}
