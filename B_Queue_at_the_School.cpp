#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t;
    string s;
    cin >> n >> t >> s;
    while (t--) { // biến t ở đây có nghĩa là nhỏ girl đc phép dịch chuyển lên trước bao nhiêu t thg boy
        for (int i = 0; i < n - 1; i++) {
            if (s[i] == 'B' && s[i + 1] == 'G') {
                swap(s[i], s[i + 1]);
                i++;
            }
        }
    }
    cout << s;
    return 0;
}