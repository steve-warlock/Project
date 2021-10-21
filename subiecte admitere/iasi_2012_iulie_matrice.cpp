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
#define INT_MAX   __INT_MAX__
#define ll long long
#define ld long double
#define ull unsigned long long
#define dim 100000001
#define dim1 100000
using namespace std;
ifstream fin("list.in");
ofstream fout("list.out");
struct nod{
    int info;
    nod *urm;
};
int n;
int s[1001];
int main()
{
    cin >> n; int aux;
    for(int i = 1; i <= n; ++i)
    {cout << i << ' ';
        s[i] = i;
    }
    cout << '\n';
    for(int t = 2; t <= n; ++t)
    {
        aux = s[1];
        for(int i = 2; i <= n; ++i)
            s[i-1] = s[i];
        s[n] = aux;
        for(int i = 1; i <= n; i++)
            cout << s[i] << ' ';
        cout << '\n';
    }
    
}// sub. 2 , ex.5 matrice admitere info iasi


