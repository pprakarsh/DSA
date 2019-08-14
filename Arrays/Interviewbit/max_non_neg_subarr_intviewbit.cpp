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

vector<int> Solution::maxset(vector<int> &A)
{
    int n = A.size();
    int st_ind = 0; int end_ind = -1;	//current largest sum sub_array's start_ind and end_ind, initialization helps to counter when all negative numbers 
    long long max_sum = -1;
    int st_temp = 0; long long sum = 0; int max_len = 0; //max_len contains curren largest sum sub_array's length

    //Logic: Array divided into sub-parts wherever negative number is found, sum of every sub-part calculated
    for(int i = 0; i < n; i++)
    {
        if(A[i] < 0) //Negative number indicates sub-part completed, calculate sum
        {
            if((sum > max_sum) || ((sum == max_sum) && (max_len < i-st_temp)))
            {
                max_sum = sum;
                st_ind = st_temp;
                end_ind = i-1;
                max_len = end_ind-st_ind;
            }
            sum = 0; //for new sub-part
            st_temp = i+1;
        }
        else
        {
            sum += A[i];
        }
    }
    //boundary case for last sub-part
    if((sum > max_sum) || ((sum == max_sum) && (max_len < n-st_temp)))
    {
        max_sum = sum;
        st_ind = st_temp;
        end_ind = n-1;
        max_len = end_ind-st_ind;
    }

    vector<int> v;
    for(int i = st_ind; i <= end_ind; i++)
    {
        v.push_back(A[i]);
    }
    return v;
}
