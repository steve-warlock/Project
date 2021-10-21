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
#include <cassert>
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
int x[4300];
int k = 0;
bool frp[10],frq[10];
bool solve(int p, int q, int i)
{
    int i_copie = i;
    while(i_copie != 1)
        frp[i_copie%p] = true , i_copie/=p;
    i_copie = i;
    while(i_copie != 1)
        frq[i_copie%q] = true , i_copie/=q;
    
    for(int j = 0; j <= 9; j++)
        if((frp[j] == false && frq[j] == true)||(frp[j] == true && frq[j] == false))
            return false;
    return true;
}
int main()
{
    for(int i = 0; i<=9; ++i)
        frp[i] = frq[i] = false;
    int q,p,n;
    cin >> p >> q >> n;
    for(int i = 1; i <= n; ++i)
        if(solve(p,q,i) == true)
            x[++k] = i;

    cout << k << '\n';
    for(int i : x)
        cout << x[i] << ' ';
    return 0;
} // CJ_model_1_admitere_2018_subiectulB_pb2 ??
