class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0,riight=0,len=0;
        int hash[128]={0};
        for(int right=0;right<s.size();right++)
        {
            hash[s[right]]++;
            while(hash[s[right]]>1)
            {
                hash[s[left]]--;
                left++;
            }
            len=max(len,right-left+1);
        }
        return len;
    }
};
