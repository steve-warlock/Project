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
const int dx[]= {-1,0,1,0};
const int dy[]= {0,1,0,-1};
int n;
int a[51][51];
int b[51][51];
void subpunctul_a(int a[51][51], int *h)
{
    for(int i = 0; i < 255; i++){
        int nr = 0;
        for(int f = 1; f <= n; f++){
            for(int g = 1; g <= n; g++){
                if(a[f][g] == i)
                    nr++;
            }
        }
        h[i] = nr;
    }
}
double subpunctul_b(int *h)
{
    ld g = 0;
    ll g1 = 0;
    for(int i = 0; i < 255; i++)
        if(h[i])
            g += h[i] * i;
    for(int i = 0; i < 255; i++)
        if(h[i])
            g1+= h[i];
    return (double) g/g1;
}
void subpunctul_c(int a[51][51], double g, int b[51][51])
{
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            if(a[i][j] >= g)
                b[i][j] = 1;
            else b[i][j] = 0;
}
void subpunctul_d(int i, int j)
{
    b[i][j] = -1;
    for(int k = 0; k < 4; k++)
    {
        int iv = i + dx[k];
        int jv = j + dy[k];
        if(b[iv][jv] == 1)
            subpunctul_d(iv, jv);
    }
}
int main()
{
    int h[256]={0};
    fin >> n;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            fin >> a[i][j];
    
    subpunctul_a(a, h);
   cout << subpunctul_b(h);
    subpunctul_c(a, subpunctul_b(h), b);
    int i_start, j_start;
    fin >> i_start >> j_start;
    subpunctul_d(i_start,j_start);
    return 0;
}
// sub.III
