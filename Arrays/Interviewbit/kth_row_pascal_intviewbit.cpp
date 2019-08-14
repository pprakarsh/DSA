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

//Logic: No need to create entire vector with all elements till the kth row. Only previous row is stored, other upper rows are discarded as loop iterates
vector<int> Solution::getRow(int A)
{
    vector<int> row; //denotes elements in present row
    vector<int> temp; //denotes elements in previous row (for temporary purpose)
    row.push_back(1); temp.push_back(1); //for row zero
    for(int i = 1; i <= A; i++)
    {
        row[0] = 1;
        for(int j = 1; j < i; j++)
        {
           row[j] = temp[j-1]+temp[j];
        }
        row.push_back(1); //push_back because no. of elements one greater than previous row. Need to create one extra space in vector row
	
	//to put values in temp array
        for(int j = 0; j < row.size()-1; j++)
        {
            temp[j] = row[j];
        }
        temp.push_back(1); //push_back because no. of elements one greater than previous row
    }

    return row;
}

