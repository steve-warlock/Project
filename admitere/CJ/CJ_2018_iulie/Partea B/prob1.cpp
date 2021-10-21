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
char s[256];
int n,p, q, nr = 0;
int cal(char *s, int n, int p, int q, int nr)
{
    if (p > q)
        return nr;
    else 
        if(s[p] < '0' && s[p] > '9')
        return nr + cal(s, n, p + 1, q, 0);
    return cal(s,n,p + 1,q,10 * nr + s[p]-'0');
}
int main()
{
    fin >> s >> n >> p >> q;
    fin.get();
    fout << cal(s, n, p, q, 0);
    return 0;
}
// Cluj_2018_iulie Partea B prob.1
`
