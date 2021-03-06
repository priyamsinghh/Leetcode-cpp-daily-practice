class Solution {
public:
    int minDeletions(string s) {
        int freq[26];
        memset(freq,0,sizeof(freq));
        int n = s.length();
        for(int i=0;i<n;i++){
            freq[s[i]-'a']++;
        }
        vector<int> frequencies;
        for(auto i:freq){
            if(i>0){
                frequencies.push_back(i);
            }
        }
        int deletions = 0;
        map<int,int> visited;
        for(int i=0;i<frequencies.size();i++){
            while(visited[frequencies[i]]){
                frequencies[i]--;
                deletions++;
            }
            if(frequencies[i]!=0){
            visited[frequencies[i]]++;
            }
        }
        return deletions;
    }
};