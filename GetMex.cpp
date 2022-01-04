ll mex(vl& v){
    ll mex = 0;
    for (auto& e:v) {
        if (e == mex) {
            mex++;
        }
    }
    return mex;
}
