//
//  main.cpp
//  Shokran
//
//  Created by Steve Warlock on 16.02.2021.
//

#include <iostream>
#include <fstream>
#include <algorithm>
#include <queue>
#include <vector>
#include <cmath>
#include <cstring>
#include <utility>
#include <cassert>
#include <cstring>
#include <string>
#include <sstream>
#include <iomanip>
#include <cctype>
#include <bitset>
#include <numeric>
#include <iterator>
#include <stack>
#include <unordered_map>
#include <map>
#define INT_MAX   __INT_MAX__
#define ll long long
#define ld long double
#define ull unsigned long long
#define ul unsigned long
#define dim 100000001
#define dim1 100000
#define nmax 100001
using namespace std;
ifstream fin("gasti.in");
ofstream fout("gasti.out");
int n, m;
bool verif(int m, int n)
{
    
  while(n)
  {
      int cm = m;
      bool ok = false;
      while(cm)
      {
          if(n%10 == cm%10)
          {ok = true;
              break;
          }
          cm/=10;
      }
      n/=10;
      if(!ok)
          return false;
  }
    return true;
}
int main()
{
    cin >> m >> n;
    cout << ((verif(m,n)) ? 1 : 0);
 return 0;
}

