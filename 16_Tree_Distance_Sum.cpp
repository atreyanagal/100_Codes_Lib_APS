//https://www.codechef.com/problems/TREEDIST

#include <bits/stdc++.h>
#include <sys/resource.h>


using namespace std;

template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) {
    return os << '(' << p.first << ", " << p.second << ')'; 
}

template<typename A> ostream& operator<<(ostream &os, const vector<A> &vt) {
    os << '[';
    for (size_t i = 0; i + 1 < vt.size(); i++) os << vt[i] << ", ";
    if (!vt.empty()) os << vt.back();
    return os << ']';
}

void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#ifdef GAREN
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

const int MOD = 1000000007;

void run_case() {
    int n;
    cin >> n;
    vector<vector<int>> g(n);
    for (int i = 1; i < n; i++) {
        int u, v;
        cin >> u >> v;
        u--, v--;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    vector<int> dp(n, 0), sz(n, 0);
    vector<int> sum_add(n, 0);
    vector<int> sum_up(n, 0);
    long long res = 0;

    function<void(int, int)> dfs2 = [&](int u, int p) {
        for (int e : g[u]) {
            if (e == p) continue;
            dfs2(e, u);
            sum_up[u] = (sum_up[u] + sum_up[e] + sz[e]) % MOD;
        }
    };

    function<void(int, int, int)> dfs = [&](int u, int p, int acc) {
        int r_acc = acc;
        dp[u] = 1;
        for (int e : g[u]) {
            if (e == p) continue;
            dfs(e, u, acc);
            acc = (acc + dp[e]) % MOD;
            dp[u] = (dp[u] + dp[e] + sz[e]) % MOD;
            sz[u] += sz[e];
        }
        sz[u]++;
        res = (res + 1LL * dp[u] * r_acc) % MOD;
        sum_add[u] = (sum_add[u] + r_acc) % MOD;
    };
    dfs(0, -1, 0);
    dfs2(0, -1);
    // dbg(dp);
    fill(dp.begin(), dp.end(), 0);
    fill(sz.begin(), sz.end(), 0);
    for (int i = 0; i < n; i++) reverse(g[i].begin(), g[i].end());
    dfs(0, -1, 0);
    for (int i = 0; i < n; i++) {
        res = (res + 1LL * sum_add[i] * sum_up[i]) % MOD;
    }
    cout << res << '\n';
}

int32_t main() {
    ios::sync_with_stdio(false);
#ifdef GAREN
    cin.tie(nullptr);
#endif
    rlimit R;
    getrlimit(RLIMIT_STACK, &R);
    R.rlim_cur = R.rlim_max;
    setrlimit(RLIMIT_STACK, &R);
    int tests = 1;
    cin >> tests;
    while (tests--) run_case();
    return 0;
}