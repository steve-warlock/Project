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
#define nmax 101
using namespace std;
ifstream fin("date.in");
ofstream fout("date.out");
int n;
int t, d[101],u[101];
int cmmdc(int a, int b)
{
    if(b == 0)
        return a;
    return cmmdc(b,a%b);
}
int cmmmc(int a,int b)
{
    return (int)(a*b)/cmmdc(a,b);
}
void solve(int t, int n, int d[], int u[], int& nr)
{
    int fr[101] = {0};
nr = 0;
int maxi = -1;
for(int i = 1; i <= n; ++i)
    fr[i] = 2*d[i] + u[i] + 1;
    
  for(int i = 1; i <= n; ++i)
  {  int nr_robinete_sup = 0, p = 0;
      for(int j = i + 1; j <= n; j++){
          if(p == 0 && cmmmc(fr[i], fr[j]) <= t)
          {p = cmmmc(fr[i], fr[j]);
              nr_robinete_sup = 1;
          }
          else if(cmmdc(fr[i],fr[j]) != 1 && cmmmc(p, fr[j]) <= t)
          {
              
            p = cmmmc(p,fr[j]);
          nr_robinete_sup++;
          }
  }
     if(nr_robinete_sup > maxi)
     maxi = nr_robinete_sup;
  }
  nr = maxi;
}
int main()
{
   fin >> t >> n;
   for(int i = 1; i <= n; i++)
       fin >> d[i];
    for(int i = 1; i <= n; i++)
        fin >> u[i];
    int minRobineteSuplimentare = 0;
    solve(t,n,d,u,minRobineteSuplimentare);
    fout << minRobineteSuplimentare;
    return 0;
} // Cluj 2018 iulie prob.3

