class Solution {
  public:
    int missingNum(vector<int>& arr) {
        int n = arr.size() + 1;
        int x = 0;

        for (int i = 1; i <= n; i++)
            x ^= i;

        for (int num : arr)
            x ^= num;

        return x;
    }
};