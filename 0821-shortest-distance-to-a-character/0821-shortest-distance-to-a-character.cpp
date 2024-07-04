class Solution {
public:
    vector<int> shortestToChar(string s, char c) {

        vector<int> ind, ans;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == c) {
                ind.push_back(i);
            }
        }

        for (int i = 0, p = 0; i < s.size(); i++) {
            if (p < ind.size() && i == ind[p]) {
                p++;
            }

            if (p == 0) {
                ans.push_back(ind[0] - i);
            }

            else if (p == (ind.size())) {
                ans.push_back(i - ind[p - 1]);
            }

            else {
                ans.push_back(min(i - ind[p - 1], ind[p] - i));
            }
        }

        return ans;
    }
};