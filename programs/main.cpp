#include <bits/stdc++.h>
using namespace std;
#define all(x)          (x).begin(),(x).end()
#define MOD             1000000007
#define case(tc)        cout << "Case " << tc << ": ";
#define close           << "\n";
typedef int64_t ll;
typedef uint64_t ull;
typedef long double lld;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

void test(int tc){
    int n,x; cin >> n >> x;
    map<int,int> freq;
    int cnt = n;    
    for(int i = 0; i < n; ++i){
        int tmp; cin >> tmp;
        if(freq.count(tmp/x)){
            cnt -= 2;
            freq[tmp/x]--;
        }else{
            freq[tmp]++;
        }
    }
    cout << cnt close 
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#ifdef necromancer
    freopen("./input.txt",  "r", stdin);
    // freopen("./output.txt", "w", stdout);
    // freopen("./error.txt",  "w", stderr);
#endif
    int testcase = 1;
    cin >> testcase;
    for (int tc = 0; tc < testcase; tc++) {
        test(tc);
    }
}
