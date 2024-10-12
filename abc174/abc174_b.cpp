#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int N;
    double D;
    cin >> N >> D;
    
    int count = 0;
    for (int i = 0; i < N; i++) {
        double X, Y;
        cin >> X >> Y;
        if (sqrt(X * X + Y * Y) <= D) {
            count++;
        }
    }
    
    cout << count << endl;
    return 0;
}