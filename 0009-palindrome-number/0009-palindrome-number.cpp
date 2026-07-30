class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false; // negative numbers can't be palindromes
        
        long original = x;
        long rev_num = 0;
        while (x) {
            rev_num = (rev_num * 10) + (x % 10);
            x /= 10;
        }
        return rev_num == original;
    }
};