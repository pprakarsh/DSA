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

int Solution::maxArr(vector<int> &A)
{
    int max1, min1, max2, min2;
    int n = A.size();
    max1 = A[0]+0; min1 = A[0]+0; max2= A[0]-0; min2= A[0]-0;
    for(int i = 1; i < n; i++)
    {
        if(A[i]+i > max1)
        {
            max1 = A[i]+i;
        }
        else if(A[i]+i < min1)
        {
            min1 = A[i]+i;
        }

        if(A[i]-i > max2)
        {
            max2 = A[i]-i;
        }
        else if(A[i]-i < min2)
        {
            min2 = A[i]-i;
        }
    }

    return max((max1-min1), (max2-min2));
}
