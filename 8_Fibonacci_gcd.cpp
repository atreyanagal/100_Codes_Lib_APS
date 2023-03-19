//https://www.hackerrank.com/challenges/fibonacci-gcd/problem

#include <iostream>
#include <algorithm>
using namespace std;

const int MOD = 1e9 + 7;

void mult(long long a[2][2], long long b[2][2])
{
    long long c[2][2];
    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 2; j++) {
            c[i][j] = 0;
            for(int k = 0; k < 2; k++)
                c[i][j] += (a[i][k] * b[k][j]) % MOD;
            c[i][j] %= MOD;
        }

    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 2; j++)
            a[i][j] = c[i][j];
}

int get(long long g)
{
    if(g <= 2) 
        return 1;

    long long cur[2][2];
    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 2; j++)
            cur[i][j] = i == j;
    long long p[2][2];
    p[0][0] = 0; 
    p[1][0] = p[0][1] = p[1][1] = 1;

    g--;
    g--;
    while(g) {
        if(g & 1)
            mult(cur, p);
        mult(p, p);
        g >>= 1;
    }

    return (cur[0][1] + cur[1][1]) % MOD;
}

int main()
{
    int n;
    cin.sync_with_stdio(false);
    cin >> n;
    long long g, x;
    cin >> g; 
    for(int i = 1; i < n; i++) {
        cin >> x;
        g = __gcd(g, x);
    }

    cout << get(g) << endl;
    return 0;
}
