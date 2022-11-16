class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string start = strs[0];
        for (int i = 1; i < strs.size(); i++)
        {
            /* code */
            while (strs[i].find(start) != 0)
            {
                start = start.substr(0, start.size() - 1);
                if(start.empty()) return "";
            }
        }
        return start;
    }
};