//#include <algorithm>
//#include <cmath>
//#include <cstdio>
//#include <cstdlib>
//#include <cstring>
//#include <iostream>
//#include <map>
//#include <queue>
//#include <set>
//#include <string>
//#include <vector>
//using namespace std;
//#define LL long long
//const int maxn = 300000;
//int cnt[maxn + 1], sum[maxn + 1];
//int n;
//
//void init() {
//  memset(cnt, 0, sizeof(cnt));
//  /**
//   *  类似素数筛选法，O(nlogn)  b = a-c , c = a^b
//   */
//  for (int c = 1; c <= maxn; c++) {
//    for (int a = c * 2; a <= maxn; a += c) {
//      int b = a - c;
//      if (c == (a ^ b)) {
//        cnt[a]++;
//      }
//    }
//  }
//  sum[0] = 0;
//  for (int i = 1; i <= maxn; i++) {
//    sum[i] = sum[i - 1] + cnt[i];
//  }
//}
//
//int main() {
//  freopen("/Users/yuxiao/XcodeProject/number_theory_10/number_theory_10/in",
//          "r", stdin);
//  freopen("/Users/yuxiao/XcodeProject/number_theory_10/number_theory_10/out",
//          "w", stdout);
//
//  int T, t;
//  cin >> T;
//  t = 1;
//  init();
//  while (T--) {
//    cin >> n;
//    printf("Case #%d: %d\n", t++, sum[n]);
//  }
//  return 0;
//}
