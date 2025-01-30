#include <cstdio>

using namespace std;

int arr[100'000];
char s[100'001];
int main(void)
{
    int n, q, r, l;
    scanf("%d%d%s", &n, &q, s);

    for (int i = 1; i < n; i++)
    {
        if (s[i - 1] == 'A' && s[i] == 'C')
            arr[i] = arr[i - 1] + 1;
        else
            arr[i] = arr[i - 1];
    }

    for (int i = 0; i < q; i++)
    {
        scanf("%d%d", &l, &r);
        {
            l--; r--;
            int ans = arr[r] - arr[l - 1];
            if (s[l - 1] == 'A' && s[l] == 'C')
                ans--;
            printf("%d\n", ans);
        }
    }

    return 0;
}