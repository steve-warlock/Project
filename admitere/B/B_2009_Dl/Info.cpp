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
char s1[256], s2[256];
char s[256];
char a[200][256];
bool verif(char *s1, char *s2)
{
    if(strlen(s1)!=strlen(s2))
        return false;
    int fr1[26] = {0},fr2[26] = {0};
    for(int i = 0; i < strlen(s1); ++i)
        fr1[s1[i] - 'a']++;
    for(int i = 0; i < strlen(s2); ++i)
        fr2[s2[i] - 'a']++;
    for(int i = 0; i < 26; i++)
        if(fr1[i]!=fr2[i] && fr1[i])
            return false;
    return true;
}
int main()
{  // subpunctul a
    fin.getline(s1,sizeof(s1));
    fin.getline(s2,sizeof(s2));
    if(verif(s1,s2))
        fout << "DA" << '\n';
    else fout << "NU" << '\n';
    //subpunctul b
    int n;
    fin >> n;
    fin.get();
    bool ok = true;
    int k = 0;
    for(int i = 1; i <= n; i++)
    {
        fin.getline(s, sizeof(s));
        strcpy(a[k++],s);
    }
    for(int i = 0; i < k - 1; i++)
        for(int j = i + 1; j < k; j++)
            if(verif(a[i], a[j]))
            {
                ok = true;
                break;
            }
    if(ok)
        fout << "exista anagrame" << '\n';
    else fout << "nu exista anagrame" << '\n';
    // subpunctul c - ne exista(nu stiu)    
    return 0;
}// Subiect Bucuresti 2009 Dl

