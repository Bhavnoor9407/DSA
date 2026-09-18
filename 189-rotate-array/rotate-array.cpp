class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if (n == 0) return;
        k %= n;
        auto start = nums.begin();
        auto middle = nums.begin() + (n - k);
        auto end = nums.end();
        reverse(start, middle);
        reverse(middle, end);
        reverse(start, end);
    }
};