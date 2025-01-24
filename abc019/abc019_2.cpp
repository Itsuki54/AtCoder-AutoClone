#include <iostream>
#include <string>
using namespace std;

string solve(const string& s) {
    string result = "";
    int n = s.size();
    int count = 1;

    for (int i = 1; i < n; ++i) {
        if (s[i] == s[i - 1]) {
            count++;
        } else {
            result += s[i - 1] + to_string(count);
            count = 1;
        }
    }
    result += s[n - 1] + to_string(count);

    return result;
}

int main() {
    string s;
    cin >> s;
    cout << solve(s) << endl;
    return 0;
}
