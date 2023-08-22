#include <iostream>
#include <vector>

using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<int> a(n);
    int ones = 0;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      if (a[i] == 1) {
        ones++;
      }
    }

    int max_sum = max(ones, n - ones) * 2 - (ones == n - ones ? 1 : 0);
    cout << max_sum << endl;
  }

  return 0;
}
