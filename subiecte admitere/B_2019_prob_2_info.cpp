//
//  main.cpp
//  experiment
//
//  Created by Steve Warlock on 13.04.2021.
//

#include <iostream>
#include <fstream>
#include <stack>
#include <queue>
#include <sstream>
#include <algorithm>
#include <string>
#include <vector>
#include <array>
#include <iterator>
#include <cmath>
#define INT_MAX __INT_MAX__
#define ll long long
using namespace std;
ifstream fin("paranteze3.in");
ofstream fout("paranteze3.out");
const int nmax = 1e5 + 1;
int n;
int v[nmax];
int maxi = -1;
int s = 0;
int main() {
    cin >> n;
    for(int i = 1; i <= n; ++i)
    {cin >> v[i];
        s += v[i];
        if(s/i > maxi)
            maxi = (int) s/i;
    }
    cout << maxi;
    return 0;
}// problema a doua (importanta) de la admitere fac. Bucuresti info 2019 O(n)

