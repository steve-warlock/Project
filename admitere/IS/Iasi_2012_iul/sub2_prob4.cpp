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
int main()
{
    cin.getline(s,sizeof(s));
    int fr[26] = {0};
    int maxi = -1;
    for(int i = 0; i < strlen(s); i++){
        fr[s[i] - 'a']++;
        if(maxi < s[i] - 'a')
            maxi = s[i] - 'a';
    }
    for(int i = 0; i <= maxi; i++)
        if(fr[i])
            cout << char(i + 'a') << ": " << fr[i] << '\n';
    return 0;
}
// Iasi_2012_iulie_sub2_pb4
