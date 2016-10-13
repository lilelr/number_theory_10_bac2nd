//// UVa11582 Colossal Fibonacci Numbers!
//// https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=850&page=show_problem&problem=4510
//// 大数求余 + 数列规律探索
//// Rujia Liu
//#include <cstdio>
//#include <cstring>
//#include <iostream>
//using namespace std;
//
//const int maxn = 1000 + 5;
//typedef unsigned long long ULL;
//
//// 对于每个n, 计算f[n][i] 的值
//int f[maxn][maxn * 6];
//// 对于每个 n, 计算它的period[n] 的周期
//int period[maxn];
//
//// a^b %n
//int pow_mod(ULL a, ULL b, int n) {
//  if (!b)
//    return 1;
//  int k = pow_mod(a, b / 2, n);
//  k = k * k % n;
//  if (b % 2)
//    k = k * a % n;
//  return k;
//}
//
//int solve(ULL a, ULL b, int n) {
//  if (a == 0 || n == 1)
//    return 0; // attention!
//  int p = pow_mod(a % period[n], b, period[n]);
//  return f[n][p]; // p 为周期中的位置，返回那个位置的元素即为答案
//}
//
//int main() {
//  for (int n = 2; n <= 1000; n++) {
//    f[n][0] = 0;
//    f[n][1] = 1;
//    for (int i = 2;; i++) {
//      f[n][i] = (f[n][i - 1] + f[n][i - 2]) % n;
//      if (f[n][i - 1] == 0 && f[n][i] == 1) {
//        period[n] = i - 1; // 重复，周期为i-1.
//        break;
//      }
//    }
//  }
//  ULL a, b;
//  int n, T;
//  cin >> T;
//  while (T--) {
//    cin >> a >> b >> n;
//    cout << solve(a, b, n) << "\n";
//  }
//  return 0;
//}
