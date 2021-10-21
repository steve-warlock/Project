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
ifstream fin("dat.in");
ofstream fout("dat.out");
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
    int n;
    fin >> n;
    fout << 1 << ' ';
    int valx = 0, valy = 0, valz = 0;
    valx = 2;
    valy = 3;
    valz = 5;
    for(int i = 2; i < n; i++)
    {
       
    }
    
    return 0;
}
// Bucuresti_2010 (nu stiu)

