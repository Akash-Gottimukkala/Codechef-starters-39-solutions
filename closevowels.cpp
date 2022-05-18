#include<bits/stdc++.h>
#include<sstream>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define mt              make_tuple
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define range(a,b)		substr(a,b-a+1)
#define w(x)            int x; cin>>x; while(x--)
#define trace(x) 		cerr<<#x<<": "<<x<<" "<<endl;
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
void akash()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("Output.txt", "w", stdout);
#endif
}
int count(string s, int n, vector<int> v) {
	int cnt = 0;
		int m = pow(10,9)+7;
	char a, e, i, o, u;
	for (int i = 0; i < v.size(); i++) {
		int c1 = abs(97 - s[v[i]]);
		int c2 = abs(101 - s[v[i]]);
		int c3 = abs(105 - s[v[i]]);
		int c4 = abs(111 - s[v[i]]);
		int c5 = abs(117 - s[v[i]]);
		if (c1==c2||c2==c3||c3==c4||c4==c5) {
			cnt=(cnt*2)%m;
		}

	}
	return cnt;
}


int32_t main() {

	akash();

	w(t) {
		int n, ans = 1;
		int m = pow(10,9)+7;
		char a;
		cin >> n;
		string s;
		cin >> s;
		vector<int> v;
		for (int i = 0; i < n; i++) {
			if (s[i] == 'c' || s[i] == 'l' || s[i] == 'g' || s[i] == 'r' ) {
				ans = (ans*2)%m;
			}
		
		}
	//	int k = count(s, n, v);
		
		cout<<ans<<endl;











	}
	return 0;
}
