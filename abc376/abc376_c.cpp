#include <bits/stdc++.h>

using namespace std;

bool canFitAllToys(vector<int>& toys, vector<int>& boxes, int extraBoxSize) {
    int n = toys.size();
    vector<int> allBoxes = boxes;
    allBoxes.push_back(extraBoxSize);
    sort(allBoxes.begin(), allBoxes.end());
    sort(toys.begin(), toys.end());

    int j = 0;
    for (int i = 0; i < n; ++i) {
        while (j < n && allBoxes[j] < toys[i]) {
            ++j;
        }
        if (j == n) {
            return false;
        }
        ++j;
    }
    return true;
}

int main() {
    int N;
    cin >> N;
    vector<int> toys(N);
    vector<int> boxes(N - 1);
    for (int i = 0; i < N; ++i) {
        cin >> toys[i];
    }
    for (int i = 0; i < N - 1; ++i) {
        cin >> boxes[i];
    }

    int left = 1, right = *max_element(toys.begin(), toys.end());
    int result = -1;

    while (left <= right) {
        int mid = (left + right) / 2;
        if (canFitAllToys(toys, boxes, mid)) {
            result = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    cout << result << endl;
    return 0;
}