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
	//Main function was already given in problem
 return 0;
}

vector<int> Solution::plusOne(vector<int> &A)
{
    int n = A.size();
    vector<int> inc_num;//result array, this array filled in reverse direction
    int i; //for iteration

    //Traversing backwards in vec A to find pos 'i' where digit != 9
    //fills zeroes in result array (9+1=10)
    for(i = n-1; i >= 0 && (A[i] == 9); i--)
    {
        inc_num.push_back(0);
    }
    //'i' now stores pos of last consecutive '9' in given array A

    //if statement when all digits are 9
    if(i == -1)
    {
        inc_num.push_back(1);
    }
    else
    {
        inc_num.push_back(A[i]+1);
        int j = 0; //while loop to find pos 'j' till when given array filled with zero
        while(A[j] == 0)
        {
            j++;
        }
        for(int k = i-1; k >= j; k--) //to fill other elements in result array,
        {
            inc_num.push_back(A[k]);
        }
    }

    n = inc_num.size(); //size of result array
    for(int i = 0; i < n/2; i++) //for reversing result array
    {
        int temp = inc_num[i];
        inc_num[i] = inc_num[n-i-1];
        inc_num[n-i-1] = temp;
    }
    return inc_num;
}

