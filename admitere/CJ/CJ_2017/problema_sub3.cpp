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
int n, m, a[4*nmax][4*nmax], b[4*nmax][4*nmax];
char x[5];
void read(int &m ,int a[4*nmax][4*nmax] ,int &n , char s[])
{
    fin >> m;
    fin.get();
    for(int i = 1; i <= m; ++i)
        for(int j = 1; j <= m; j++)
            fin >> a[i][j];
    fin.get();
    fin.getline(s, sizeof(s));
}
void Rotire(int a[4*nmax][4*nmax])
{
    for(int i = 1; i <= m; ++i)
        for(int j = 1; j <= m; j++)
            b[i][j] = a[m - j + 1][i];
    for(int i = 1; i <= m; ++i)
        for(int j = 1; j <= m; j++)
            a[i][j] = b[i][j];
    for(int i = 1; i <= m; i++)
        for(int j = 1; j <= m; j++)
            b[i][j] = 0;
}
void Inversare(int a[4*nmax][4*nmax])
{
    for(int i = 1; i <= m; ++i)
        for(int j = 1; j <= m; j++)
            if(a[i][j] == 1)
                a[i][j] = 0;
    else if(a[i][j] == 0)
        a[i][j] = 1;
}
void Zoom(int &m, int a[4*nmax][4*nmax])
{ m = 2 * m;
    for(int i = 1; i <=(int)m/2; i++)
        for(int j = 1; j <= (int)m/2; j++)
            b[2*i][2*j] = b[2*i][2*j - 1] = b[2*i - 1][2*j] = b[2*i -1][2*j - 1] = a[i][j];
    
}
void prelucrare(int m, int a[4*nmax][4*nmax])
{
    for(int i = 0; i < strlen(x); ++i)
        if(x[i] == 'R')
            Rotire(a);
    else if(x[i] == 'I')
        Inversare(a);
    else if(x[i] == 'Z')
        Zoom(m,a);
}
void afisare(int m, int a[4*nmax][4*nmax])
{
    
    for(int i = 1; i <= m; i++ && fout << '\n')
        for(int j = 1; j <=  m; j++)
            fout << a[i][j] << ' ';
}
int main()
{
    read(m, a, n, x);
    Rotire(a);
    Inversare(a);
    Rotire(a);
    Zoom(m, a);
    afisare(m,b);
    return 0;
} // problema_sub3 Cluj 2017

