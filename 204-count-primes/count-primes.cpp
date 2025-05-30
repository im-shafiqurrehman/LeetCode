class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0;
        vector<bool> isPrime(n, true); // true = prime
        isPrime[0] = isPrime[1] = false;  // 0 and 1 are not prime numbers
        for (int i = 2; i * i < n; i++) {
            if (isPrime[i]) {
                  // mark their multiples false as they are composite numbers
                for (int j = i * i; j < n; j += i) {
                    isPrime[j] = false;
                }
            }
        }
        int count = 0;
        for (int i = 2; i < n; i++) {
            if (isPrime[i])
                count++;
        }
        return count;
    }
};
