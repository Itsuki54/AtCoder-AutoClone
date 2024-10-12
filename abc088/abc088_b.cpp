#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, n[110];
    int N = 0;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> n[i];
    }
    sort(n, n + a);
    reverse(n, n + a);
    int b = a / 2;

    for (int i = 0; i < b; i++)
    {
        N += n[2 * i] - n[2 * i + 1];
    }
    if (a % 2)
        N += n[a - 1];

    cout << N << endl;
};