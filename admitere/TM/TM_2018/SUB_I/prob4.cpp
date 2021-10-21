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
int a,b;
int f(int a,int b)
{
    if(a == b)
        return a;
    else if(a > b)
        return f(a-b, b);
    return f(a,b-a);
}
int main()
{
    cin >> a >> b;
    // subpunctul a) f(12,9) = 3
    //
    // subpunctul b) relatia de recurenta determina c.m.m.d.c al celor 2
    //numere, a, respectiv, b.
    //
    // subpunctul c)
    cout << f(a,b);
    return 0;
}
// sub.I, pb. 4
