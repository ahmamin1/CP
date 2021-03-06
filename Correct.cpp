#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ordered_set tree<ll, null_type,less<ll>, rb_tree_tag,tree_order_statistics_node_update> 
#define cin(vec) for(auto& i : vec) cin >> i
#define cin_2d(vec, n, m) for(int i = 0; i < n; i++) for(int j = 0; j < m && cin >> vec[i][j]; j++);
#define cout(vec) for(auto& i : vec) cout << i << " "; cout << "\n";
#define cout_2d(vec, n, m) for(int i = 0; i < n; i++, cout << "\n") for(int j = 0; j < m && cout << vec[i][j] << " "; j++);
#define cout_map(mp) for(auto& [f, s] : mp) cout << f << "  " << s << "\n";
#define Time cerr << "Time Taken: " << (float)clock() / CLOCKS_PER_SEC << " Secs" << "\n";
#define fixed(n) fixed << setprecision(n)
#define ceil(n, m) (((n) / (m)) + ((n) % (m) ? 1 : 0))
#define fill(vec, value) memset(vec, value, sizeof(vec));
#define Num_of_Digits(n) ((int)log10(n) + 1)
#define mod_combine(a, b, m) (((a % m) * (b % m)) % m)
#define all(vec) vec.begin(), vec.end()
#define rall(vec) vec.rbegin(), vec.rend()
#define sz(x) int(x.size())
#define debug(x) cout << #x << ": " << (x) << "\n";
#define fi first
#define se second
#define Pair pair < int, int >
#define ll long long
#define ull unsigned long long
#define Mod  1'000'000'007
#define OO 2'000'000'000
#define EPS 1e-9
#define PI acos(-1)

void Fast_IO(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("data.in", "r", stdin), freopen("Correct_output.txt", "w", stdout);
    #endif
}

void Solve(){
	string value,sub1 = "",sub2;
	cin>>value;   // acmicpc
	string myValue = value;  // acmicpc
	// 0123456
	// acmicpc
	string smallString = value;
	for(int i = 0;i<value.length()-1;i++){
		sub1 += value[i]; // "acm"
		myValue.erase(0,1); // "icpc"
		sub2 = myValue;   // "micpc"
		sort(sub1.begin(),sub1.end()); //  "a"
		sort(sub2.begin(),sub2.end()); //  "cccimp"     acccimp   
		smallString = min(smallString,sub1+sub2);
	}
	cout<<smallString<<endl;
}   

int main(){
    Fast_IO();
    int t = 1;
    //cin >> t;
    while(t--)
        Solve();
    return 0;
} 