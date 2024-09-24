#include <bits/stdc++.h>

using namespace std;
#define rep(n) for (int i = 0; i < (int)(n); i++)

int main() {
    string a, b;
    cin >> a >> b;
    if(a==b)cout << "="<<endl;
    else if (a < b)cout << "<" << endl;
    else cout << ">" << endl;
}
