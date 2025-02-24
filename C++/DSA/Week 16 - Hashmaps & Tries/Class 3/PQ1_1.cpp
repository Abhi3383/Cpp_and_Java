#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";

        // loop on first string
        for(int i=0; i<strs[0].length();i++){
            char ch=strs[0][i];
            bool match =true;

            // compare this character will all the remaining strings at
            // the same index
            for(int j=1;j<strs.size();j++){
                // compare
                if(strs[j].size() < i || ch != strs[j][i]){
                    match=false;
                    break;
                }
            }
            if(match==false)
            break;
            else
            ans.push_back(ch);
        }
        return ans;
    }
};

int main() {
    Solution solution;
    vector<string> words = {"flower", "flour", "flourish"};

    string commonPrefix = solution.longestCommonPrefix(words);

    cout << "Longest Common Prefix: " << commonPrefix << endl;

    return 0;
}
