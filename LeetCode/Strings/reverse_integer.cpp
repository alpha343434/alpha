class Solution {
public:
    int reverse(int x) {
       int rev = 0;
       while (x){
           int digit = x % 10;
           x /= 10;
           if ((rev > 0 && rev > (INT_MAX - digit)/10) | (rev < 0 && rev < (INT_MIN - digit)/10)) return 0;
           rev = rev * 10 + digit;
       }
       return rev;
   }
};

// runtime error:
class Solution {
public:
    int reverse(int x) {
        int reversed_num = 0, digit;
        while (x != 0) {
            digit = x % 10;
            reversed_num = reversed_num * 10 + digit;
            x /= 10; 
        }
        return reversed_num;
    }
};
