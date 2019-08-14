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
vector<vector<int> > Solution::solve(int A) 
{
    vector<vector<int>> v(A);
    vector<vector<int>> t;
    if(A == 0) //returning empty vector
    {
        return t;
    }
    v[0].push_back(1);
    
    for(int i = 1; i < A; i++)
    {
        v[i].push_back(1); //first element of every row is 1
        for(int j = 1;  j < i; j++)
        {
            v[i].push_back(v[i-1][j-1]+v[i-1][j]); //other elements in the row can be calculated by this formula
        }
        v[i].push_back(1); //last element of every row is 1
    }
    return v;
}
