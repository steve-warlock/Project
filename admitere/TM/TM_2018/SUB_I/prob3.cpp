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
int *v = new int[n];
int main()
{
    cin >> n;
    for(int i = 1; i <= n; ++i)
        cin >> v[i];
    for(int i = 1; i < n; ++i)
        for(int j = i + 1; j <= n; j++)
            if(i%2 == 0 && i%2 == j%2 && v[i] > v[j])
            {
                int aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
    else if(i%2 == 1 && i%2 == j%2 && v[i] < v[j])
    {
        int aux = v[j];
        v[j] = v[i];
        v[i] = aux;
    }
    for(int i = 1; i <= n; ++i)
        cout << v[i] << ' ';
    return 0;
}
// sub.I, pb. 3
