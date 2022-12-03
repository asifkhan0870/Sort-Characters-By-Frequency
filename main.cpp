class Solution {
public:
    string frequencySort(string s) {
        
        
        unordered_map<char,int>mp;
        
        for(char ch: s){
            mp[ch]++;
        }
        
        vector<pair<int,char>>arr;
        
        for(auto it: mp){
             
            arr.push_back({it.second,it.first});
        }
        
        sort(arr.begin(),arr.end());
        
        string ans="";
        
        for(auto it: arr){
            
            char ch=it.second;
            while(it.first--){
                ans+=ch;
            }
        }
        
        reverse(ans.begin(),ans.end());
        
        return ans;
    }
};