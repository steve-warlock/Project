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
char s[256];
//subpunctul a)
void a(char *s)
{
    for(int i = 0; i < strlen(s); ++i)
        if(s[i] == ',')
            s[i] = '.';
}
//subpunctul b)
int b(char *s)
{
    int i = 0;
    ld val = 0.0;
    ll pp = 1;
    ll pp1 = 1;
    while(s[i + 1]!= '.')
    {
        
        i++;
        pp*=10;
    }
    
    while(s[i + 2] != '\0')
    {
        i++;
        pp1*=10;
    }
    i = 0;
    while(s[i] != '.')
    {
        val += (s[i] - '0')* pp;
        pp/=10;
        i++;
    }
    int j = strlen(s) - 1;
    while(s[j] != '.')
    {
        val += (double)(s[j] - '0') / pp1;
        pp1 = pp1 / 10;
        j--;
    }
    return val;
}
int main()
{
    fin.getline(s,sizeof(s));
    a(s);
    fout << b(s);
    return 0;
}
// sub.I, pb. 5
