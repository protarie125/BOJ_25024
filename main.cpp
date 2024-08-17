#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

ll t, x, y;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> t;
  while (0 < (t--)) {
    cin >> x >> y;

    if (0 <= x && x < 24 && 0 <= y && y < 60) {
      cout << "Yes";
    } else {
      cout << "No";
    }

    cout << ' ';

    auto is_yes = false;
    if (1 <= x && x <= 12) {
      switch (x) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
          if (1 <= y && y <= 31) {
            is_yes = true;
            cout << "Yes";
          }
          break;
        case 2:
          if (1 <= y && y <= 29) {
            is_yes = true;
            cout << "Yes";
          }
          break;
        default:
          if (1 <= y && y <= 30) {
            is_yes = true;
            cout << "Yes";
          }
          break;
      }
    }

    if (!is_yes) {
      cout << "No";
    }

    cout << '\n';
  }

  return 0;
}