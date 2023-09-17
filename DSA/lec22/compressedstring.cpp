class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0;
        int ansIndex = 0;
        int n = chars.size();

        while(i<n){

            int j=i+1;
            while(j<n && chars[i] == chars[j]){
                j++;
            }
            //yaha kab aooge
            //ya toh vector poora traverse kargaya 
            //ya fir new/diff character encounter kia hai

            chars[ansIndex++] = chars[i];

            int count = j - i;

            //converting count int to string
            //converting count into single digit and saving in answer

            if(count>1){
                string cnt = to_string(count);
                for(char ch: cnt){
                    chars[ansIndex++] = ch;
                }
            }
            //moving to new character
            i=j;
        }
        return ansIndex;
    }
};