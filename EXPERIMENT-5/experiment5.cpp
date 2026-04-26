class Solution {
public:
    int nthMagicalNumber(int n, int a, int b) {
        long long mod = 1e9 +7;
        long long low = min(a,b);
        long long high = n*low;
        long lcm = (a*b)/__gcd(a,b);
        while(low<high){
            long mid = low + (high-low)/2;
            long count = mid/a + mid/b - mid/lcm;
            if(count<n) low = mid+1;
            else high = mid;

        }
        return low % mod;
    }
};
