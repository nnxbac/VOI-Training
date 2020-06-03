#include <bits/stdc++.h>
using namespace std;

const string NAME = "center";

long long Rand(long long l, long long r) {
  return l + (long long)rand() * (long long)rand() % (r - l + 1);
}

int main() {
  srand(time(NULL));

  system(("g++ " + NAME + ".cpp -o " + NAME).c_str());
  system(("g++ " + NAME + "_trau.cpp -o" + NAME + "_trau").c_str());

  for (int iTest = 1; iTest <= 1000; iTest++) {
    ofstream inp((NAME + ".inp").c_str());
<<<<<<< HEAD
      int n = Rand(1, 5), k = (Rand(1, n));
      inp << n << " " << k << '\n';
=======
      int n = Rand(1, 1000), m = (Rand(1, 1000));
      inp << n << " " << m << '\n';
>>>>>>> eceab4ad0e1d623a743b51b9498b459cc946990c
      for (int i = 1; i <= n; i++)
        inp << Rand(1, 1000) << ' ';
      inp << '\n';
      for (int i = 1; i <= n; i++)
        inp << Rand(1, 1000) << ' ';
      inp << '\n';
      for (int i = 1; i <= m; i++)
        inp << Rand(1, 1000) << '\n';
    inp.close();

    system(("./" + NAME + "_trau").c_str());
    system(("./" + NAME).c_str());
    
    if (system(("diff " + NAME + ".out " + NAME + ".ans").c_str()) != 0) {
      cout << "Test " << iTest << ": WRONG!\n";
      return 0;
    } else {
      cout << "Test " << iTest << ": CORRECT!\n";
    }
  }

  return 0;
}