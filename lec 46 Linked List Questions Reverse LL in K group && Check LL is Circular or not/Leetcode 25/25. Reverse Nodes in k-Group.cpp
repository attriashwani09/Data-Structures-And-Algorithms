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
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        // Base Case : if Empty LL 
        if(head == NULL){
            return NULL ;
        } 


        // Step 1 : check if k elements are present in the LL 
        int len = 0 ; 
        ListNode* temp = head ;
        while( temp != NULL && len < k){
            len ++ ;
            temp = temp -> next ;
        } 

        if( len < k){
            return head ;
        } 


        // Step 2 : Reverse K elements from that LL 
        ListNode* prev = NULL ;
        ListNode* curr = head ;
        ListNode* next = NULL ;
        int cnt = 0;

        while( curr != NULL && cnt < k){

            next = curr -> next ;
            curr -> next = prev ;
            prev = curr ;
            curr = next ;
            cnt ++ ;
        } 

        
        head -> next = reverseKGroup( next , k ) ;

        return prev ;
    }
};