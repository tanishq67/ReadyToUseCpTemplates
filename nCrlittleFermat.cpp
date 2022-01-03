const int N=3e5 +10;
vl fact(N,0),inv(N,0);


ll ncr(int x,int r){
    if(r>x)
        return 0;
    ll ans=fact[x];
    ans=(ans*inv[r])%MOD;
    ans=(ans*inv[x-r])%MOD;
    return ans;
}

void precompute(){
    fact[0]=fact[1]=inv[0]=inv[1]=1;
    for(int i=2;i<N;i++){
        fact[i]=(fact[i-1]*i)%MOD;
        inv[i]=expo(fact[i],MOD-2,MOD);
}
 
 // paste this and call precompute 
