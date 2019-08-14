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

vector<vector<int> > Solution::generateMatrix(int A)
{
    vector<vector<int>> v(A);
    for(int i = 0; i < A; i++) //Initialize with -1
    {
        for(int j = 0; j < A; j++)
        {
            v[i].push_back(-1);
        }
    }

    char dir = 'r'; int i = 0; int j = 0; //dir denotes the direction in which we are presently heading while creating spiral. (i, j) denotes exact cell, our present location
    int count = 1; int n = A;
    while(count <= A*A) //after creating entire spiral
    {
        if(dir == 'r')  
        {
            v[i][j] = count;
            if(j+1 >= n || v[i][j+1] != -1) //condition to change direction (when hit the wall)
            {
                dir = 'd';
                i++;
            }
            else //when continuing in same direction
            {
                j++;
            }
        }
        else if(dir == 'd')
        {
            v[i][j] = count;
            if(i+1 >= n || v[i+1][j] != -1)
            {
                dir = 'l';
                j--;
            }
            else
            {
                i++;
            }
        }
        else if(dir == 'l')
        {
            v[i][j] = count;
            if(j-1 < 0 || v[i][j-1] != -1)
            {
                dir = 'u';
                i--;
            }
            else
            {
                j--;
            }
        }
        else if(dir == 'u')
        {
            v[i][j] = count;
            if(i-1 < 0 || v[i-1][j] != -1)
            {
                dir = 'r';
                j++;
            }
            else
            {
                i--;
            }
        }
        count++;
    }
    return v;
}

