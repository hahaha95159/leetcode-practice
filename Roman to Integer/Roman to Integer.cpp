class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> roman;
        int res = 0;
        roman['I'] = 1;
        roman['V'] = 5;
        roman['X'] = 10;
        roman['L'] = 50;
        roman['C'] = 100;
        roman['D'] = 500;
        roman['M'] = 1000;

        for (int i = 0; i < s.size(); i++)
        {
            /* code */
            if(i < s.size()-1 && roman[s[i]] < roman[s[i+1]])
                res -= roman[s[i]];
            else
                res += roman[s[i]];
        }
        
        return res;
    }
};