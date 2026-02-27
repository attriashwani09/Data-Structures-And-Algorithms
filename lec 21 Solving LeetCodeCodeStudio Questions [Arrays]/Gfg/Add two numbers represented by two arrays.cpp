
// We can also store the ans directly into string.

class Solution { 
    
    void reverse(vector<int> &ans) {
        int st = 0;
        int end = ans.size() - 1;

        while (st < end) {
            swap(ans[st], ans[end]);
            st++;
            end--;
        }
    } 
    
public:
    string calc_Sum(vector<int>& arr1, vector<int>& arr2) {
        
        int i = arr1.size() - 1;
        int j = arr2.size() - 1;  
        vector<int> ans;
        int carry = 0;

        // both arrays
        while (i >= 0 && j >= 0) {
            int sum = arr1[i] + arr2[j] + carry;
            carry = sum / 10;
            ans.push_back(sum % 10);
            i--;
            j--;
        }

        // arr1 remaining
        while (i >= 0) {
            int sum = arr1[i] + carry;
            carry = sum / 10;
            ans.push_back(sum % 10);
            i--;
        }

        // arr2 remaining
        while (j >= 0) {
            int sum = arr2[j] + carry;
            carry = sum / 10;
            ans.push_back(sum % 10);
            j--;
        }

        // final carry
        if (carry != 0) {
            ans.push_back(carry);
        }

        reverse(ans);

        // vector → string
        string str = "";
        for (int digit : ans) {
            str += to_string(digit);
        }

        return str;
    } 
};