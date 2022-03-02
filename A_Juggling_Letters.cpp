#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll long long int
#define sq(a) (a) * (a)
#define MAX 1e9
#define MIN -1e9
#define mod 1000000007
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define debug(x) cerr << #x << '=' << (x) << endl;
#define output(x) cout << (x ? "Yes" : "No") << '\n';
#define mxn 100005
using namespace std;
bool isPalindrome(string s)
{
    if (s.size() == 1)
        return true;
    for (int i = 0; i < s.size() / 2; i++)
    {
        if (s[i] != s[s.size() - 1 - i])
        {
            return false;
        }
    }
    return true;
}
bool isPrime(ll n)
{
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
ll fact(ll n)
{
    if (n == 1)
        return 1;
    else
        return n * fact(n - 1);
}
ll comb(ll n, ll r)
{
    return fact(n) / (fact(n - r) * fact(r));
}
struct comp
{
    template <typename T>
    bool operator()(const T &l, const T &r) const
    {
        if (l.second == r.second)
            return l.first < r.first;
        return l.second > r.second;
    }
};
void solve()
{
    ll strcount;
    cin >> strcount;
    ll count = 1;
    string str = "";

    for (ll i = 0; i < strcount; i++)
    {
        string s;
        cin >> s;
        str += s;
    }
    sort(str.begin(), str.end());
    bool flag = true;

    if (str.length() % strcount != 0)
        cout << "NO" << endl;
    else
    {
        for (int i = 1; i < str.length(); i++)
        {
            if (str[i] == str[i - 1])
                count++;
            else
            {
                if (count % strcount != 0)
                {
                    // cout<<str[i]<<" "<<count<<endl;
                    cout << "NO" << endl;
                    flag = false;
                    break;
                }
                count = 1;
            }
        }
        if (flag)
            cout << "YES" << endl;
    }
}
int main()
{
    FAST int t = 1;
    cin >> t;
    while (t-- > 0)
    {
        solve();
    }
    return 0;
}