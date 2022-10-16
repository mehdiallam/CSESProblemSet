#include <iostream>
using namespace std;

int main()
{
  long long n, s;
  int m;
  s = 0;
  cin >> n;
  for (int i = 1; i < n; ++i)
  {
    cin >> m;
    s += m;
  }
  cout << n * (n + 1) / 2 - s << endl;
}