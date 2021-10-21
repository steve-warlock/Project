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
ifstream fin("inaltime.in");
ofstream fout("inaltime.out");
int n, m, a[dim + 1], b[dim + 1];
bool ok;
int k, nrMax;
void subalgoritm(int* a, int* b, int n, int m, bool& raspuns, int& k, int& nrMax)
{ k = 0, nrMax = -1;
    
        int val = 0; bool ok = true;
        int nr = 0;
    int j = 1;
        for(int i = 1; i <= n; i++){
            if(val > b[j])
            {
                ok = false;
                break;
            }
            if(j == m)
            {break;}
            if(val == b[j])
            {
                if(nr > nrMax)
                {
                    k = j;
                    nrMax = nr;
                }
                j++;
                val = 0;
                nr = 0;
            }
            val += a[i];
            nr++;
        }
            
    if(ok)
        raspuns = true;
}
int main()
{
    fin >> n;
    for(int i = 1; i <= n; ++i)
        fin >> a[i];
    fin >> m;
    for(int i = 1; i <= m; i++)
        fin >> b[i];
    ok = false;
    k = 0, nrMax = -1;
    subalgoritm(a,b,n,m,ok,k,nrMax);
   if(ok)
   { fout << "adevarat" << ' ';
       fout << k << ' ' << nrMax;
   }
   else fout << "fals";
    return 0;
} // problema 2 Cluj 2017

