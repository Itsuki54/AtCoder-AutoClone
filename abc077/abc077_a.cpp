#include <bits/stdc++.h>

using namespace std;
#define rep(n) for (int i = 0; i < (int)(n); i++)

int main() {
    string a, b;
    cin >> a >> b;
if((a.at(0)==b.at(2))&&(a.at(1)==b.at(1))&&(a.at(2)==b.at(0)))cout << "YES"<<endl;
else cout << "NO"<<endl;
}
