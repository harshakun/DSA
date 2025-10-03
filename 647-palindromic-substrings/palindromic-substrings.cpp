class Solution {
public:
    int countSubstrings(string s) {
        int n = s.size();
        int count = 0;

        for (int center = 0; center < n; center++) {
            // Odd length palindromes
            count += expandAroundCenter(s, center, center);

            // Even length palindromes
            count += expandAroundCenter(s, center, center + 1);
        }

        return count;
    }

private:
    int expandAroundCenter(const string &s, int left, int right) {
        int cnt = 0;
        while (left >= 0 && right < s.size() && s[left] == s[right]) {
            cnt++;
            left--;
            right++;
        }
        return cnt;
    }
};

