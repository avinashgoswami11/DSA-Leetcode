class Solution {
public:
    int divide(int dividend, int divisor) {

        if(dividend == 2147483647 && divisor == -1){
            return -2147483647;
        }

        if((dividend == INT_MIN && divisor == -1) || (dividend == INT_MAX && divisor == 1))
            return INT_MAX;

        if((dividend == INT_MIN && divisor == 1) || (dividend == INT_MAX && divisor == -1))
            return INT_MIN;

        

        long long d = dividend;
        long long v = divisor;

        long long quotient = 0;
        long long total = 0;

        if(d > 0 && v > 0){
            while(total + v <= d){
                total += v;
                quotient++;
            }
        }

        else if(d < 0 && v < 0){
            while(total + abs(v) <= abs(d)){
                total += abs(v);
                quotient++;
            }
        }

        else if(d > 0 && v < 0){
            v = abs(v);

            while(total + v <= d){
                total += v;
                quotient++;
            }

            quotient = -quotient;
        }

        else if(d < 0 && v > 0){
            d = abs(d);

            while(total + v <= d){
                total += v;
                quotient++;
            }

            quotient = -quotient;
        }

        else if(d == 0){
            return 0;
        }

        if(quotient < INT_MIN){
            quotient = INT_MIN+1;
        }

        return (int)quotient;
    }
};