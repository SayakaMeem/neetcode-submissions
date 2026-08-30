#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string,vector<string>>ag;
       
        for(int i=0;i<strs.size();i++){
            string sw = strs[i];
            sort(sw.begin(),sw.end());
            ag[sw].push_back(strs[i]);
        }

        vector<vector<string>>result;
        for(auto [key,group]:ag){

            result.push_back(group);

        }


        return result;



    }



    
};
