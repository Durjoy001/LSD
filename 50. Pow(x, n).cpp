class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1;
        long long int nn = n;
        /*for avoid integer overflow make nn long long, 
        integer range is -2^31 <= n <= 2^31-1, so when we get -2^31 and make it positive
        it would not fit in integer range that's why we have to make it long long.*/
        nn = abs(nn);
        while(nn){
            if(nn%2 == 0){
                x = x*x;
                nn = nn/2;
            }
            else{
                ans = ans * x;
                nn--;
            }
        }
        if(n<0){
            return (1/ans);
        }
        return ans;
        //recursive approach
        /*if(n == 0){
            return 1;
        }
        if(n == INT_MIN){//handel integer overflow error
            n = n/2;
            x = x*x;
        }
        if(n<0){
            x = 1/x;
            n = abs(n);
        }
        return (n%2 == 0) ? myPow(x*x,n/2) : x*myPow(x*x,n/2);*/
    }
};
