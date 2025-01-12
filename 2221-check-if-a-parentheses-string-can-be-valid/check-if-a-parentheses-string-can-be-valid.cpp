class Solution {
public:
    bool canBeValid(string s, string locked) {
        int n = s.size();
        if(n&1) return false;
        
        // overbalanced ')' check
        int blank = 0;
        int open = 0;
        int close = 0;
        for(int i=0;i<n;i++){
            if(locked[i]=='0') blank++;
            else {
                if(s[i]=='(') open++;
                else close++;

                if(blank < close-open) return false;
            } 
        }

        blank = 0;
        open = 0;
        close = 0;
        // overbalanced '(' check

        for(int i=n-1;i>=0;i--){
            if(locked[i]=='0') blank++;
            else {
                if(s[i]=='(') open++;
                else close++;

                if(blank < open-close) return false;
            } 
        }
     return true;
    }
};