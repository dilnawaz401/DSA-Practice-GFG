class Solution {
  public:
    bool canRepresentBST(vector<int> &arr) {
        stack<int> st;
        int root = INT_MIN;

        for (int x : arr) {
            // Current value must be greater than lower bound
            if (x < root)
                return false;

            // Update lower bound while moving to right subtree
            while (!st.empty() && st.top() < x) {
                root = st.top();
                st.pop();
            }

            st.push(x);
        }

        return true;
    }
};