#include <bits/stdc++.h>
using namespace std;
int n, m, ans, idx;

struct job {
	int d, v;
} a[100001];
priority_queue<int> q;

bool cmp(job a, job b) {
	return a.d < b.d;
}

int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> a[i].d >> a[i].v;
	sort(a, a + n, cmp);
	for (int i = 0; i < m; i++) {
		for (; a[idx].d <= i + 1 and idx < n; idx++)
			q.push(a[idx].v);
		if (!q.empty()) {
			ans += q.top();
			q.pop();
		}
	}
	cout << ans;
	return 0;
}
