/**#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <queue>
#include <deque>
#include <stack>
#include <list>
#include <set>
#include <bitset>
#include <utility>
#include <iterator>
#include <sstream>
#include <fstream>**/
#include <bits/stdc++.h>

using namespace std;

#define pb                              push_back
#define F                               first
#define S                               second
#define EPS                             1e-9
#define sf                              scanf
#define pf                              printf
#define si1(x)                          scanf("%d",&x)
#define si2(x,y)                        scanf("%d %d",&x,&y)
#define si3(x,y,z)                      scanf("%d %d %d",&x,&y,&z)
#define sd1(x)                          scanf("%lf",&x)
#define sd2(x,y)                        scanf("%lf %lf",&x,&y)
#define sd3(x,y,z)                      scanf("%lf %lf %lf",&x,&y,&z)
#define sl1(x)                          scanf("%lld",&x)
#define sl2(x,y)                        scanf("%lld %lld",&x,&y)
#define sl3(x,y,z)                      scanf("%lld %lld %lld",&x,&y,&z)
#define sz(x)                           (int)(x).size()
#define all(x)                          (x).begin(), (x).end()
#define rall(x)                         (x).rbegin(), (x).rend()
#define ms(x,a)                         memset(x,a,sizeof(x))
#define REP(i,a,b)                      for(int i=(a); i<(b); i++)
#define REPC(i,x)                       for(int i=0; i<(sz(x)); i++)
#define REPIT(it,x)                     for(__typeof((x).begin()) it=(x).begin(); it!=(x).end(); it++)

typedef long long int                   LL;
typedef pair<int,int>                   PII;
typedef vector<int>                     VI;
typedef vector<LL>                      VL;
typedef vector<string>                  VS;
typedef vector<char>                    VC;
typedef vector<bool>                    VB;
typedef vector<PII>                     VII;
typedef map<string,int>                 MSI;
typedef map<int,int>                    MII;
typedef map<char,int>                   MCI;
typedef map<int,string>                 MIS;

template<typename T> T Abs(T x) { return x>0 ? x : -x ; }
template<typename T> T const& Max(T const& a, T const& b) { return a>b ? a : b ; }
template<typename T> T const& Min(T const& a, T const& b) { return a<b ? a : b ; }
template<typename T> inline T gcd(T a, T b) { return (b ? gcd(b,a%b) : a) ; }
template<typename T> T sqaa(T a){ return a*a ; }
LL bigPow(LL a,LL p,LL mod){
    if(!p)
	return 1;
    if(p & 1)
	return ( ( a % mod ) * ( bigPow(a,p-1,mod) % mod ) );
    else{
	LL ret = bigPow(a,p>>1,mod);
	return ( ret * ret ) % mod;
    }
}
VS str_tok(string s){
    stringstream ss(s);
    string s1;
    VS ret;
    while(ss >> s1){
	ret.pb(s1);
    }
    return ret;
}
VS str_tok(char *str){
    VS ret;
    string s = "";
    for(int i=0; str[i]; i++){
	if(str[i] == ' '){
	    if(!s.empty())
		ret.pb(s);
	    s = "";
	}
	else{
	    s += str[i]; 
	}
    }
    return ret;
}

int main(){
#ifdef LU_SERIOUS
    freopen("in.txt","r",stdin);
#endif // LU_SERIOUS
    int T, n, m, cs=0, x, y;
    VI ar;
    string s;
    cin >> T;
    while(T-- && cin >> n >> m){
	ar.clear();
	ar = VI(n);
	REP(i,0,n){
	    cin >> ar[i];
	}
	REP(ki,0,m){
	    cin >> s;
	    if(s == "P"){
		cin >> x >> y;
		swap(ar[x],ar[y]);
	    }
	    if(s == "R"){
		reverse(all(ar));
	    }
	    if(s == "D"){
		cin >> x;
		for(int i=0; i<ar.size(); i++){
		    ar[i] /= x;
		}
	    }
	    if(s == "M"){
		cin >> x;
		for(int i=0; i<ar.size(); i++){
		    ar[i] *= x;
		}
	    }
	    if(s == "S"){
		cin >> x;
		for(int i=0; i<ar.size(); i++){
		    ar[i] += x;
		}
	    }
	}
	pf("Case %d:\n",++cs);
	for(int i=0; i<ar.size(); i++){
	    pf("%d ",ar[i]);
	}
	pf("\n");
    } 
    return 0;
}

