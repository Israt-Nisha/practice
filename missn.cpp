#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum = (n * (n+1)) / 2;
    int input;
    for (int i = 0; i < n-1; i++) {
        cin >> input;
        sum -= input;
    }
    cout << sum << endl;
    return 0;
}