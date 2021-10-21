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
#include <stdlib.h>
#include <stdio.h>
#define INT_MAX   __INT_MAX__
#define ll long long
#define ld long double
#define ull unsigned long long
#define dim 100000001
#define dim1 100001
using namespace std;
ifstream fin("list.in");
ofstream fout("list.out");

const int dx[] = { -1, 0, 1, 0};
const int dy[] = { 0, 1, 0, -1};
const int nmax = 1e5 + 5;
int n;
int k;
int cmmdc(int a, int b)
{
    if(b == 0)
        return a;
    return cmmdc(b,a%b);
}
int main()
{   cin >> n >> k;
    int nr = 0;
    nr = n - n/cmmdc(n,k);
    cout << nr;
    return 0;
} // CJ_model_1_admitere_2018_subiectulB_pb1


