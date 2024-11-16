class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        int cnt = 0;
        // char list[5] = {'a','e','i','o','u'};
        for(int i=left;i<=right;i++){
            char s = words[i][0];
            char e = words[i][words[i].size()-1];
            if(cmp(s) && cmp(e)){
                cnt++;
            }
           
        }
        return cnt;
    }

    bool cmp(char a){
         return a=='a'|| a=='e'||a=='i'||a=='o'||a=='u';
    }    
};
