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
	//main fn already provided
 return 0;
}

int Solution::maxSubArray(const vector<int> &A)
{
    int n = A.size();
    int count = 0; int maxi = A[0];
    for(int i = 0; i < n; i++)  //To check if the entire array is filled with negative nums
    {                           //if yes, then also find the max number
        if(A[i] < 0)
        {
            count++;
        }
        if(A[i] > maxi)
        {
            maxi = A[i];
        }
    }
    if(count == n) //to check total no. of negative numbers
    {
        return maxi;
    }

    int sum = 0; maxi = 0;
    for(int i = 0; i < n; i++) //uses some redundancies to check sum of all subarrays in O(n)
    {                           //Brute force would take O(n^2)
        if(sum+A[i] <= 0)
        {
            sum = 0;
        }
        else
        {
            sum+=A[i];
            if(sum > maxi)
            {
                maxi = sum;
            }
        }
    }
    return maxi;
}

