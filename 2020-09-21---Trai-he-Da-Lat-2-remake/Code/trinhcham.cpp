#include<bits/stdc++.h>
using namespace std;

const string _name = "cmax";
const int nTest = 5;
const int nMax = 1e5;
const int aMax = 1e9;

long long Rand(long long l, long long r) {
  return l + (long long)rand() * (long long)rand() % (r - l + 1);
}

int main() {
  srand(time(NULL));

  system(("g++ " + _name + ".cpp -o " + _name).c_str());
  system(("g++ " + _name + "_trau.cpp -o " + _name + "_trau").c_str());

  for (int iTest = 0; iTest < nTest; iTest++) {
    ofstream inp((_name + ".inp").c_str());
      int n = Rand(1, nMax);
      inp << n << '\n';
      for (int i = 0; i < n; i++) {
        int a = Rand(-aMax, aMax), b = Rand(-aMax, aMax);
        inp << a << ' ' << b << '\n';
      }
      int m = Rand(1, nMax);
      inp << m << '\n';
      for (int i = 0; i < m; i++) {
        int a = Rand(-aMax, aMax);
        inp << a << '\n';
      }
    inp.close();

    system(("./" + _name).c_str());
    system(("./" + _name + "_trau").c_str());

    if (system(("diff " + _name + ".inp " + _name + ".ans").c_str()) != 0) {
      cout << "Test" << iTest << ": WRONG!\n";
      break;
    } else cout << "Test" << iTest << ": Correct!\n";
  }

  return 0;
}