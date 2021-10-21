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
#include <cassert>
#include <numeric>
#include <iterator>
#include <stack>
#define INT_MAX   __INT_MAX__
#define ll long long
#define ld long double
#define ull unsigned long long
#define dim 100000001
#define dim1 100001
#define nmax 101
using namespace std;
ifstream fin("date.in");
ofstream fout("date.out");
int n;
char x[201];
int pm;
void calcul(char x[], int n, int& per)
{        
	per = -1;
	char aux[201];
    aux[0] = '\0';
	char y[201];
	y[0] = '\0';
	for(int i = 2; i <= n/2; ++i)
		if(n%i == 0)
		{
			strncpy(aux,x,i);
			for(int j = 1; j <= n/i; j++)
				strcat(y,aux);
			
            if(strcmp(y,x) == 0)
             per = i;
                
            y[0] = '\0';
		}
}
int main()
{

    fin >> n;
    fin.get();
    fin.getline(x,sizeof(x));
    calcul(x,n,pm); 
fout << pm;

        return 0;
} // Cluj 2018 iulie sub.2

