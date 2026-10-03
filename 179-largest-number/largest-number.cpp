class Solution {
public:
    static bool cmp(string a, string b) {
        if (a + b > b + a)
            return true;
        else
            return false;
    }

    string largestNumber(vector<int>& nums) {
        vector<string> arr;

        for (int i = 0; i < nums.size(); i++) {
            arr.push_back(to_string(nums[i]));
        }

        sort(arr.begin(), arr.end(), cmp);

        if (arr[0] == "0") {
            return "0";
        }

        string ans = "";

        for (int i = 0; i < arr.size(); i++) {
            ans = ans + arr[i];
        }

        return ans;
    }
};