class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()){
            return false;
        }

        int arr[26] = {0};

        for (int i = 0; i < s.size(); i++){
            arr[s[i] - 'a'] += 1;
            arr[t[i] - 'a'] -= 1;
        }

        // loop through the array
        for (int x : arr){
            if (x != 0){
                return false;
            }
        }

        return true;
    }
};
