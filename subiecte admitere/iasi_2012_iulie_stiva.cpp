
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
const int nmax = 1e3 + 1;
int s1[nmax],s2[nmax],s3[nmax],vf1 = 0, vf2 = 0, vf3 = 0;
int main()
{  int n;
    fin >> n;
     
    for(int i = 1; i <= n; ++i)
    {
        int x;
        fin >> x;
        vf1++;
        s1[vf1] = x;
    }
   
    while(vf1)
    {
        vf3++;
        s3[vf3] = s1[vf1];
        vf1--;
    }
    while(vf3)
    {
        vf2++;
        s2[vf2] = s3[vf3];
        vf3--;
    }
    
return 0;
}// sub. 2 , ex.3 cu stive admitere info iasi

