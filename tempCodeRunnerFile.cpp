#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using db = double;
using str = string;

#define sz(x) int((x).size())
#define all(x) begin(x), end(x)
#define Time cerr << "Time Taken: " << (float)clock() / CLOCKS_PER_SEC << " Secs" << "\n";
#define nl '\n'
#define deb(x)  cerr <<#x " : " << x << nl;
#define Num_of_Digits(n) ((int)log10(n) + 1)
#define ceil(n, m) (((n) / (m)) + ((n) % (m) ? 1 : 0))
#define Num_of_Digits(n) ((int)log10(n) + 1)

#define FOR(i,a,b) for (int (i) = (a); (i) < (b); ++(i))
#define REP(i,a) FOR(i,0,a)
#define each(a,x) for (auto& (a): (x))
#define cin(vec) for(auto& i : (vec)) cin >> i
#define cout(vec) for(auto& i : (vec)) cout << i << " "; cout << "\n";
#define cin_2d(vec, n, m) for(int i = 0; i < n; i++) for(int j = 0; j < m && cin >> vec[i][j]; j++);
#define cout_2d(vec, n, m) for(int i = 0; i < n; i++, cout << "\n") for(int j = 0; j < m && cout << vec[i][j] << " "; j++);
#define cout_map(mp) for(auto& [f, s] : mp) cout << f << "  " << s << "\n";

const int MOD = 1e9+7;
const int MX = 2e5+5;
const ll INF = 1e18;
const int dx[4] = {1,0,-1,0}, dy[4] = {0,1,0,-1};

inline namespace FileIO {
    void setIn(const str& s) {freopen(s.c_str(),"r",stdin);}
    void setOut(const str& s) {freopen(s.c_str(),"w",stdout);}
    void setIO(const str& s = "data") {
        //cout << fixed << setprecision(0);
        cin.tie(nullptr)->sync_with_stdio(false);
        cout.tie(nullptr)->sync_with_stdio(false);
#ifndef ONLINE_JUDGE
        if (sz(s)) setIn(s+".in"), setOut(s+".out");
#endif
    }
}
bool isPrime (ll n){
    
    if ((n%2 == 0 && n > 2) || n == 0 || n == 1) return false; 
    else {
        for (int i = 3 ; i*i < n ; i+=2){
            if (n % i == 0) return false;
        }
    }
    return true;
}

// n = t * n = 1e5*50 --> 1s = 1e7 -> 0.25 = 1e7/4
void AhmedAmin(){
   vector<ll> fib(51);
   fib[0] = 0; 
   fib[1] = 1;
   for (int i = 2 ; i < 51 ;i++){
       fib [i] = fib[i-1] + fib[i-2]; 
   }

   int t; cin >> t ; 
   while (t--){
       int n; cin >> n ;
       cout << (isPrime(fib[n])?"prime\n":"not prime\n");
   }

   bool x = (1e5*50 > 1e7/4);  
   deb(x);
}

int main() {
    setIO();
    int t=1;
    //cin >> t;
    while(t--){
        AhmedAmin();
        cout << nl;
        Time
    }

}