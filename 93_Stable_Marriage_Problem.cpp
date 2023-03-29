//https://www.codechef.com/problems/STABLEMP

#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cctype>
#include<algorithm>
#include<iterator>
#include<map>
#include<vector>
#include<list>
#include<set>
#include<queue>
#include<cassert>
#include<deque>
#include<stack>
#include<bitset>
#include<functional>
#include<numeric>
#include<utility>
#include<sstream>
#include<iomanip>
#include<string>
#include<cmath>
#include<ctime>
using namespace std;

#define Debug 0
#define LET(x,a) 	__typeof(a) x(a)
#define IFOR(i,a,b) 	for(LET(i,a);i!=(b);++i)
#define EACH(it,v)  	IFOR(it,v.begin(),v.end())
#define FOR(i,a,b)  	for(int i=(int)(a) ; i < (int)(b);i++)
#define	REP(i,n)    	FOR(i,0,n)
#define SZ		size()
#define PB		push_back

#define V(x) vector< x >
typedef V(int)		VI;
typedef V(VI)		VII;
typedef V(string) 	VS;
typedef long long	LL;
typedef long double	LD;
typedef pair<int,int>	PI;

#define INF (int)(1e8)

int men[500][500],women[500][500],m2[500][500];
int m[500],w[500],ind[500];

int main(){
	int N,n,t,d;
	scanf("%d",&N);
	while(N--){
		scanf("%d",&n);
		REP(i,n){
			scanf("%*d");
			REP(j,n){
				scanf("%d",&t);
				women[i][t-1] = j;
			}
		}
		REP(i,n){
			scanf("%*d");
			REP(j,n){
				scanf("%d",&men[i][j]);
				men[i][j]--;
			}
			m[i] = -1;
			w[i] = -1;
			ind[i] = 0;
		}
		while(1){
			bool state = false;
			REP(i,n){
				if(m[i] == -1){
					state = true;
					bool prop = false;
					while(!prop){
						int temp = men[i][ind[i]];
						if(w[temp] == -1){
							m[i] = temp;
							w[temp] = i;
							prop = true;
						}
						else if(women[temp][i] < women[temp][w[temp]]){
							m[w[temp]] = -1;
							w[temp] = i;
							m[i] = temp;
							prop = true;
						}
						ind[i]++;
					}
				}
			}
			if(!state){
				break;
			}
		}
		REP(i,n){
			printf("%d %d\n",i+1,m[i]+1);
		}
	}
	return 0;
}