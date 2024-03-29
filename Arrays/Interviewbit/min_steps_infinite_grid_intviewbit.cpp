#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <vector>
#include <queue>
#include <list>
#include <sstream>
#include <algorithm>
#include <stack>
#include <bits/stdc++.h>
#include <map>
#include <set>
#include <cmath>
#include <string>

using namespace std;

#define debug(x) cout << '>' << #x << ':' << x << endl;
#define rep(i,n) for(int i=0;i<(n);i++)
#define fori(i,a,b) for(int i=(a);i<=(b);i++)
#define ford(i,a,b) for(int i=(a);i>=(b);i--)

typedef long long ll;
typedef pair<int, int> pp;

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("~/input.txt","r", stdin);
		freopen("~/output.txt", "w", stdout);
	#endif
	
	
 return 0;
}

int Solution::coverPoints(vector<int> &A, vector<int> &B) 
{
	int n = A.size();
	sum = 0;
	fori(i, 1, n-1)
	{
		if(abs(A[i]-A[i-1]) == abs(B[i]-B[i-1]))
		{
			sum+=abs(A[i]-A[i-1]);
		}
		else if(abs(A[i]-A[i-1]) > abs(B[i]-B[i-1]))
		{
			sum+=abs(A[i]-A[i-1]);
		}
		else if(abs(A[i]-A[i-1]) < abs(B[i]-B[i-1]))
		{
			sum+=abs(B[i]-B[i-1]);
		}
	}
	return sum;
}								

