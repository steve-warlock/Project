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
int a[nmax][nmax];
void transformare(int a[nmax][nmax])
{
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            if(i > j && i + j > n - 1)
            {
                int aux = a[i][j];
                a[i][j] = a[n - i + 1][j];
                a[n - i + 1][j] = aux;
            }
}
int main()
{
    cin >> n;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> a[i][j];
    transformare(a);
    for(int i = 0; i < n; i++ && fout << '\n')
        for(int j = 0; j < n; j++)
            fout << a[i][j] << ' ';
 return 0;
}


