#include <bits/stdc++.h>
using namespace std;
int n;
bool verif(int n)
{
	int c = n%10;
	n/=10;
	while(n)
	{
	if(n%10 == c)
		return true;
	n/=10;
	}
	return false;
}
int main()
{
	cin >> n;
	bool ok = ((verif(n))? true : false);
	cout << ok;
	return 0;
}
