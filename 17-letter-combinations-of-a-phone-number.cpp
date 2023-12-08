class Solution {
public:

    void f(int ind, string &digits, vector<string> &v, string &s, map<char, string> &m) {
        if(ind == digits.size()) {
            v.push_back(s);
            return;
        }
        string t = m[digits[ind]];
        for(int i = 0 ; i < t.size() ; i++) {
            s+=t[i];
            f(ind+1, digits, v, s, m);
            s.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        vector<string> v;
        if(digits.size() == 0) return v;
        string s;
        map<char, string> m;
        m['2'] = "abc";
        m['3'] = "def";
        m['4'] = "ghi";
        m['5'] = "jkl";
        m['6'] = "mno";
        m['7'] = "pqrs";
        m['8'] = "tuv";
        m['9'] = "wxyz";
        f(0, digits, v, s, m);
        return v;
    }
};
