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
int n, k;
void nr(int n, int k, int &nrr)
{   
     //formula este nrr = n - n/cmmdc(n,k)
     int cp = n;
// cmmdc(n,k)
     nrr = n % k;
    while(nrr)
    {
        cp = k;
        k = nrr;
        nrr = cp % k;
    }
// daca n si k sunt prime intre ele, toti copii primesc ciocolata => nrr = 0
    if(k == 1)
        nrr = 0;
    else
        nrr = n - n/k;
    
}
int main()
{
    fin >> n >> k;
    int nr1 = 0;
    nr(n,k,nr1);
    fout << nr1;
    return 0;
} // problema 1 Cluj 2017

