i64 turnback(i64 x, i64 base) {
    i64 ans = 0;
    __int128 pw = 1;
    bool flag = false;
    for (int i = 0; i <= 60; i++) {
        if (1ll << i & x) {
            if (flag) {
                return (1ll << 60);
            }
            ans += pw;
        }
        pw *= base;
        if (pw > 1e18) {
            flag = true;
        }
    }
    return ans;
}


// The turnback function takes two arguments: x and base.
// The purpose of this function is to calculate a value based on the binary representation of x and a given base.

// In essence, turnback is calculating a value based on the binary representation of x and a given base,
// but it stops and returns the maximum 64-bit integer if the result would exceed 1e18.
