
vector<bool> is_prime(N, true);
vector<int> primes;

void sieve(){

	is_prime[0] = is_prime[1] = false;
	for (int i = 2; i * i <= n; i++) {
	    if (is_prime[i]) {
			primes.pb(i);

	        for (int j = i * i; j <= n; j += i)
	            is_prime[j] = false;
	    }
	}
}
