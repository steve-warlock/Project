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
bool apartenenta(int a)
{
    int nrx = 0;
    for(auto& it :{2,3,5})
        while(a%it == 0)
    {
        nrx++;
        a/=it;
    }
    return (a == 1);
    //complexitatea este O(nrx)
}
int main()
{
    int n,nr = 0, i = 1;
    fin >> n;
    while(nr <= n)
    {
        nr++;
        if(apartenenta(i) == true)
            fout << i << ' ';
        i++;
    }
    // complexitatea O(n*nrx)
    return 0;
}
// Bucuresti_2010

