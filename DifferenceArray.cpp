// Written with 0 based indexing in mind
vl get_difference_array(vl v){
    ll n = v.size();
    vl d(n + 1); d[0] = v[0]; d.back() = 0;
    rep(i,1,n){
        d[i] = v[i] - v[i - 1];
    }
    return d;
} 

void update_differnce_array(vl&d, ll l, ll r, ll value){
    d[l] += value;
    d[r + 1 ] -= value;

}
    // Always remembers shot are fired
    // from the l and we need to stop 
    // them at r, so we reverse fire 
    // from r + 1
vl get_array_from_differnce_array(vl d){
    vl ans(d.size() - 1);
    ans[0] = d[0];
    rep(i,1,d.size() - 1){
        ans[i] = d[i] + ans[i - 1];
    }
    return ans;
}
