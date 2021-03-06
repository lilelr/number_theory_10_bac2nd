//// UVa10375 Choose and divide
//// https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&category=850&problem=1316&mosmsg=Submission+received+with+ID+18173941
//// Rujia Liu 唯一分解定理：一个数n = 2^a * 3^b * 5^c ... 即可写成若干素数的相乘
//// 用数组e表示当前结果的唯一分解式中各个素数的指数。 饿= {1，0，2，0，0，...} =
//// 2^1*5^2 = 50
//// C(p,q)/C(r,s) = (p!s! (r-s)!)/(q!r! (p-q)!)
//#include <cmath>
//#include <cstdio>
//#include <cstring>
//#include <iostream>
//#include <vector>
//using namespace std;
//
//const int maxn = 10000;
//vector<int> primes;
//int e[maxn];
//
//// 乘以或除以n. d=0表示乘，d=-1表示除
//void add_integer(int n, int d) {
//  for (int i = 0; i < primes.size(); i++) {
//    while (n % primes[i] == 0) {
//      n /= primes[i];
//      e[i] += d;
//    }
//    if (n == 1)
//      break; // 提前终止循环，节约时间
//  }
//}
//
//void add_factorial(int n, int d) {
//  for (int i = 1; i <= n; i++)
//    add_integer(i, d);
//}
//
//bool is_prime(int n) {
//  int m = floor(sqrt(n) + 0.5);
//  for (int a = 2; a <= m; a++)
//    if (n % a == 0)
//      return false;
//  return true;
//}
//
//int main() {
//  for (int i = 2; i <= 10000; i++)
//    if (is_prime(i))
//      primes.push_back(i);
//  int p, q, r, s;
//  while (cin >> p >> q >> r >> s) {
//    memset(e, 0, sizeof(e));
//    add_factorial(p, 1);
//    add_factorial(q, -1);
//    add_factorial(p - q, -1);
//    add_factorial(r, -1);
//    add_factorial(s, 1);
//    add_factorial(r - s, 1);
//    double ans = 1;
//    for (int i = 0; i < primes.size(); i++)
//      ans *= pow(primes[i], e[i]);
//    printf("%.5lf\n", ans);
//  }
//  return 0;
//}
