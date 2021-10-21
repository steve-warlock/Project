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
char s[256];
char aux[256];
int spatii(char t[])
{
    int nr = 0;
    for(int i = 0; i < strlen(t); ++i)
        if(t[i] == ' ')
            ++nr;
    return nr;
}
int nrcuv(char t[])
{
    int nr = 0;
    char * p = strtok(t," ");
    while(p)
    {
        if(strlen(p) >= 3)
            ++nr;
        p = strtok(NULL, " ");
    }
    return nr;
}
int main()
{
    fin.getline(s,sizeof(s));
    // subpunctul a
    fout << spatii(s) << ' ';
    strcpy(aux,s);
    // subpunctul b
    fout << nrcuv(aux) << '\n';
    // subpunctul c    
    int i = 0;
    while(s[i] == ' ')
        i++;
    s[i] = s[i] - 32;
    for(int j = i + 1; j < strlen(s); ++j)
        if(s[j] == ' ' && s[j + 1] != ' ')
            s[j + 1] = s[j + 1] - 32;
//    fout << s;
    char *p = strtok(s,"   ");
    while(p)
    {
        fout << p << '\n';
        p = strtok(NULL, "   ");
    }
    return 0;
} // problema 1 timisoara 2013


