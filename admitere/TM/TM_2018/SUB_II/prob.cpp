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
int n;
int a[51][51];
int nr_celebritati(int n)
{
    ld s = 0.0;
    int nr_celeb = 0;
    for(int j = 1; j <= n; ++j)
    {
        int  nr = 0;
        for(int i = 1; i <= n; i++)
        {
            if(a[i][j] == 1)
                nr++;
        }
        s += nr;
    }
    s = (double) s/n;
    //    fout << s << '\n';
    for(int j = 1; j <= n; j++)
    {
        int nr = 0;
        for(int i = 1; i <= n; i++)
        {
            if(a[i][j] == 1)
                nr++;
        }
        if(nr > s)
            nr_celeb++;
    }
    return nr_celeb;
}
void afis_clic(int n)
{
    
    for(int i = 1; i <= n; i++)
        for(int j = i + 1; j <= n; j++)
            for(int k = j + 1; k <= n; k++)
                if(i!= j && j != k && i != k && a[i][j] * a[j][i] + a[i][k] * a[k][i] + a[j][k] * a[k][j] == 3)
                   
                        fout << i << ' ' << j << ' ' << k << '\n';
                
}
int main()
{
    fin >> n;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            fin >> a[i][j];
    // subpunctul a) raspunsul este (ii) ∑aji cu j = 1 -> n
    //
    //subpunctul b)
    fout << nr_celebritati(n) << '\n';
    //
    // subpunctul c) este (i) , (iii) si (iv)
    //
    // subpunctul d)
    afis_clic(n);
    return 0;
}
// sub.II
