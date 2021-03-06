// compProg.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <limits>
#include <bitset>
#include <time.h>
#include <cmath>
#include <vector>
#include <string>
#include <set>

using namespace std;

#define MOD 1000000007LL
#define LL long long
#define LD long double
#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))
#define ABS(x) ((x)<0?-(x):(x))

#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define FORR(i,n) for(int i=(n);i>=0;i--)

const double PI=3.14159265358979323846264338327950288419716939937510582097494459230;

#define SIZE 100001
int main()
{
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);

	int t,n,min=SIZE,max=0,d;
		scanf("%d",&t);
	REP(i,t)
	{
		min = SIZE;
		max = 0;
		vector<int> a;

		scanf("%d",&n);
		REP(j,n)
		{
			scanf("%d",&d);
			a.push_back(d);
		}
		set<int> sa(a.begin(),a.end());

		printf("%d\n",sa.size());
	}

	return 0;
}

