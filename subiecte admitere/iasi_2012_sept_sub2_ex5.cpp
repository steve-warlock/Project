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
#define dim1 100000
using namespace std;
ifstream fin("list.in");
ofstream fout("list.out");
const int dx[] = { -1, 0, 1, 0};
const int dy[] = { 0, 1, 0, -1};
int n;
int a[1001][1001];
char x;
//struct coada{
//    int x,y;
//} c[1005*1005];
int st = 1, dr = 0;
void afisare(int a[1001][1001], int n)
{
    for(int i = 0; i < n; ++i && cout << '\n')
        for(int j = 0; j < n; j++)
            cout << a[i][j] << ' ';
}
bool inside(int i, int j)
{
    return i >= 0 && i < n && j >= 0 && j < n;
}
void fill(int a[1001][1001],int i,int j, int val)
{
    a[i][j] = val;
    for(int k = 0; k < 4;++k)
    {
        int iv = i + dx[k];
        int jv = j + dy[k];
        if(inside(iv,jv) && a[iv][jv] == 1)
            fill(a, iv, jv , val);
    }
}
int main()
{
    cin >> n;
    cin.get();
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> x;
            a[i][j] = x - '0';
        }
        cin.get();
    }
    int val = 1;
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < n; j++)
            if(a[i][j] == 1)
                fill(a,i,j,val),val++;
    cout << val - 1 << '\n';
    for(int k = 1; k < val; ++k)
    {   int nr = 0;
        cout << 'G' << k << '=' << "{";
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < n; j++)
            if(a[i][j] == k)
        {
            ++nr;
            if(nr > 1)
                cout << ',';
            cout << '(' << i << ',' << j << ')';
            
            }
        cout << "}";
        if(k != val - 1)
            cout << ',';
    }
    cout << '.';
    return 0;
}
