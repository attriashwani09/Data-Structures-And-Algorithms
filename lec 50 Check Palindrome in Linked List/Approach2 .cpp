// Step 1 : Find middle Node using slow fast pointer 
// Step 2 : Reverse Second Half of the Linked List 
// Step 3 : Start 2 pointers 1 from head and other from reversed half ( compare values one by one )
//         if mismatch found return false immediately , else return true . 





/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        
        ListNode* slow = head ;
        ListNode* fast = head ;

        while( fast != NULL && fast -> next != NULL ){
            slow = slow -> next ;
            fast = fast ->next->next ;
        } 

        // Now slow is at Midddle of the LL 
        // Now reverse the LL from the Middle Part 
        
        ListNode* curr = slow ;
        ListNode* prev = NULL ;
        ListNode* forward = NULL ;

        while( curr != NULL ){
            forward = curr -> next ;
            curr -> next = prev ;
            prev = curr ;
            curr = forward ;

        } 


        // Now Check for both Parts if  it is Palindrome orn note 
        ListNode* left = head ;
        ListNode* right = prev ;


        while( left != NULL  && right != NULL ){

            if( left -> val != right -> val ){
               
                return false ;
            } 

            left = left -> next ;
            right = right -> next ;
        } 


        return true ;
    }
};