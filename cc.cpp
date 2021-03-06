
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
#include <iostream>
#include <sstream>

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

long long int myPow(long long int x, long long int p)
{
  if (p == 0) return 1;
  if (p == 1) return x;

  long long int tmp = myPow(x, p/2);
  if (p%2 == 0) return tmp * tmp;
  else return x * tmp * tmp;
}

char digits[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };

int main()
{
	return 0;
}
