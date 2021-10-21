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
int v[101],x;
int n;
int nr = 0;
int a[11][11];
int nrcif(int n)
{ int nr = 0;
    while(n)
        ++nr,n/=10;
    return nr;
}
bool prim(int n)
{
    if(n < 2 || (n%2 == 0 && n != 2))
        return false;
    for(int d = 3; d * d <= n; d += 2)
        if(n%d == 0)
            return false;
    return true;
}
int maxi(int a[11][11], int nr)
{
    int m = -1; // elem. maxim de deasupra diagonalei principale
    for(int i = 1; i <= nr; ++i)
        for(int j = i + 1; j <= nr; j++)
            if(m < a[i][j])
                m = a[i][j];
    return m;
}
int main()
{
    fin >> n;
    //subpunctul a
    fout << nrcif(n) << '\n';
//subpunctul b
    fout << prim(n) << '\n';
    //subpunctul c
    nr = 0;
    
    while(n)
    {
        a[++nr][1] = n%10;
        n/=10;
    }
//    fout << a[0][0] << a[1][0] << a[2][0] << a[3][0];
    for(int i = 1; i <= nr; ++i)
        for(int j = 2; j <= nr; j++)
            a[i][j] = a[i][j - 1] + i;
    for(int i = 1; i <= nr; ++i && fout << '\n')
        for(int j = 1; j <= nr; j++)
            fout << a[i][j] << ' ';
    // subpunctul d
    fout << maxi(a, nr) << '\n';
    // subpunctul e
    int val_determinant = 0;
    bool ok = false;
    for(int i = 1, j = 1; i < nr, j < nr; i++, j++){
    val_determinant = a[i][j] * a[i + 1][j + 1] - a[i + 1][j] * a[i][j + 1];
        if(val_determinant < 0)
            val_determinant = -val_determinant;
        if(prim(val_determinant)){
            ok = true;
            break;
        }
    }
    if(ok)
        fout << "DA";
    else fout << "NU";
    return 0;
} // problema 3 timisoara 2013
