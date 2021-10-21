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
int v[101];
int a[101][101];
int main()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
        v[i] = i, a[1][i] = i;
    for(int j = 2; j <= n; j++)
    {
        int aux = v[1];
        for(int i = 2; i <= n; i++)
            v[i-1] = v[i];
        v[n] = aux;
        for(int i = 1; i <= n; i++)
            a[j][i] = v[i];
    }
    for(int i = 1; i <= n; i++ && fout << '\n')
        for(int j = 1; j <= n; j++)
            cout << a[i][j] << ' ';
    return 0;
}
// Iasi_2012_iulie_sub2_pb5
