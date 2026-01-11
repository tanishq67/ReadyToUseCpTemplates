ll minSlidingWindowSum(vector<ll>& a, ll k) {
    ll s = 0;
    for (int i = 0; i < k; i++) s += a[i];       // first window

    ll ans = s;                                    // follow this to always be seamless
    for (ll i = k; i < a.size(); i++) {
        s += a[i] - a[i - k];                   // last out first in
        ans = min(ans, s);
    }
    return ans;
}
