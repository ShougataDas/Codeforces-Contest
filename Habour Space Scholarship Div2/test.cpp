#include <bits/stdc++.h>
#include <vector>

using namespace std;

vector<int> construct_array(int x, int y, int n)
{
    // Initialize an array b of n - 1 elements, where bi = ai+1 - ai for 1 <= i <= n - 1.
    vector<int> b(n - 1);
    for (int i = 0; i < n - 1; i++)
    {
        b[i] = y - i;
    }

    // Sort the array b in decreasing order.
    sort(b.begin(), b.end(), greater<int>());

    // Initialize an array a of n elements.
    vector<int> a(n);

    // For each element in the array b, add it to the array a.
    a[0] = x;
    for (int i = 1; i < n; i++)
    {
        a[i] = a[i - 1] + b[i - 1];
    }

    return a;
}

int main()
{
    int x, y, n;
    cin >> x >> y >> n;

    vector<int> a = construct_array(x, y, n);

    if (a[n - 1] != y)
    {
        cout << -1 << endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}