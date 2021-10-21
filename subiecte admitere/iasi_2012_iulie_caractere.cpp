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
char s[256];
int fr[26];
int main()
{   cin.getline(s,sizeof(s));
    int maxi = -1;
    for(int i = 0; i < strlen(s); ++i)
    {    if(maxi < (int)s[i])
        maxi = s[i];
        fr[s[i]-'a']++;
    }
    for(int i = 0; i <= maxi; i++)
        if(fr[i])
            cout << char(i + 'a') << ": " << fr[i] << '\n';
return 0;
}// sub. 2 , ex.4 cu siruri de caractere admitere info iasi


