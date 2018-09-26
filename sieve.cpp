const int MAX=1e7+5;
vector<bool> prime(MAX,true);

void sieve(){

    prime[0]=prime[1]=false;
    for (int i = 2; i*i<MAX ; ++i){
        if(prime[i]){
            for (int j=2*i;j<MAX;j+=i){
                prime[j]=false;
            }
        }
    }
}
