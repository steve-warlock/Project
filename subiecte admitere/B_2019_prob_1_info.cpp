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
#define long long ll

using namespace std;
ifstream fin("paranteze3.in");
ofstream fout("paranteze3.out");
const int nmax = 1e5 + 1;
int n;
int v[nmax];
int maxi = -1;
int main() {
    cin >> n;
    for(int i = 1; i <= n; ++i)
        cin >> v[i];
    int i = 1, j = n;
    while(i < j)
    {
        int mini = INT_MAX;
        if(v[i] < v[j])
            mini = v[i];
        else mini = v[j];
        if(mini * (j - i) >= maxi)
        {
            maxi = mini * (j - i);
            i++;
        }
        else i++;
        if(mini == v[j] && mini * (j - i) < maxi)
            j--;
    }
    cout << maxi;
    return 0;
} // problema admitere facultate Bucuresti 2019

