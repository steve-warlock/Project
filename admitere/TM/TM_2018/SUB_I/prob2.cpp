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
int N1,N2;
void creare(int n, int& N1, int& N2)
{
    N1 = N2 = 0;
    ll p1 = 1;
    ll p2 = 1;
    while(n)
    {
       if(n%10%2 == 1)
       {
           N1 =  N1 + (n%10) * p1 ;
           p1*=10;
       }
       else {
           if(n%10 != 0)
               N2 = N2 + (n%10) * p2;
           p2 *= 10;
       }
        n/=10;
    }
}
int main()
{
    cin >> n;
    N1 = N2 = 0; // N1 - cifre impare si N2 - cifre pare
    creare(n,N1,N2);
    cout << N1 << ' ' << N2;
    return 0;
}
// sub.I, pb. 2
