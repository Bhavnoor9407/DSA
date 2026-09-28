class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> number;
        for (int num : nums) {
            if (number.count(num)) {
                return true;
            }
            number.insert(num);
        }
        return false;
    }
};