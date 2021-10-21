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
int putere2(int n)
{
    ll p = 1;
    while(p <= n)
        p*=2;
    return p;
}
int main()
{
    cin >> n;
    cout << putere2(n);
 return 0;
}

