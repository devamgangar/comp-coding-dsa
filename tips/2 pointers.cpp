//1)sliding window: (cf b.books)
//Optimized Two-Pointer Sliding Window
//You can simplify and speed up your solution to an O(n) pass using a classic two-pointer (sliding window) approach. Maintain a window [l…r] whose sum of reading times never exceeds t. Expand r one book at a time, and whenever you overflow, shrink the window from the left.
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long t;
    cin >> n >> t;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int ans = 0;
    int l = 0;
    long long sum = 0;

    for (int r = 0; r < n; r++) {
        sum += a[r];
        while (sum > t) {
            sum -= a[l++];
        }
        ans = max(ans, r - l + 1);
    }

    cout << ans << "\n";
//*keep moving the right one untill condtion fails,then keep moving the left one untill
  condition satisfied again*/
  //  2)meet in middle leetcode(11.container with most water)
    important to see what happens if both equal! if u run into another loop approach will fail
    return 0;
}
