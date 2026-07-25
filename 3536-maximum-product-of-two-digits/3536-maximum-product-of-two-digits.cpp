class Solution {
public:
    int maxProduct(int n) {
        int first = 0, second = 0; // will hold the two largest digits found

        while (n > 0) {
            int digit = n % 10;   // get last digit
            n = n / 10;           // remove last digit

            if (digit > first) {
                second = first;    // old largest becomes second largest
                first = digit;     // new largest digit
            } else if (digit > second) {
                second = digit;    // it's not the biggest, but bigger than current second
            }
        }

        return first * second;
    }
};