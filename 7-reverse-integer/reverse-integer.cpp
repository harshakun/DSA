class Solution {
public:
    int reverse(int x) {
        int result = 0;

        while (x != 0) {
            int digit = x % 10;
            x /= 10;

            // Check overflow before actually multiplying or adding
            if (result > 214748364 || (result == 214748364 && digit > 7)) return 0;
            if (result < -214748364 || (result == -214748364 && digit < -8)) return 0;

            result = result * 10 + digit;
        }

        return result;
    }
};
