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
bool verif(int n, char const x[], int perioada){
    for (int i = perioada; i < n; ++i)
        if (x[i + 1] != x[i % perioada + 1])
            return false;
    
    return true;
}
int perioadaMax(int n, char x[]){
    int perioada = -1;
    for (int per = 2; per * per <= n; ++per){
        if (n % per == 0){ // perioada trebuie sa fie printre divizorii lui n
            if (verif(n, x, n / per))
                return n / per;
            if ((per * per < n) && verif(n, x, per)) {
                perioada = per;
            }
        }
    }
    return perioada;
}

int main()
{
    char x[101];
    int n, pm = 0;
    fin >> n;
    fin.get();
    fin.getline(x,n);
    if(verif(n,x))
        perioadaMax(n,x,pm);
    if(pm != 0)
        fout << pm;
    else
        fout << -1;
    return 0;
} // nu am inteles codul

