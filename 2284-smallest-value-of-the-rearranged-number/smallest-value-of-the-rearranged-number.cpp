class Solution {
public:
    long long smallestNumber(long long num) {
        if (num == 0) return 0;

        vector<int> digits;
        bool isPositive = (num > 0);
        long long temp = abs(num);

        // Extract digits
        while (temp > 0) {
            digits.push_back(temp % 10);
            temp /= 10;
        }

        // Sort digits
        if (isPositive) {
            sort(digits.begin(), digits.end()); // ascending
            // Avoid leading zero
            if (digits[0] == 0) {
                for (int i = 1; i < digits.size(); i++) {
                    if (digits[i] != 0) {
                        swap(digits[0], digits[i]);
                        break;
                    }
                }
            }
        } else {
            sort(digits.begin(), digits.end(), greater<int>()); // descending
        }

        // Rebuild number
        long long result = 0;
        for (int d : digits) {
            result = result * 10 + d;
        }

        return isPositive ? result : -result;
    }
};
