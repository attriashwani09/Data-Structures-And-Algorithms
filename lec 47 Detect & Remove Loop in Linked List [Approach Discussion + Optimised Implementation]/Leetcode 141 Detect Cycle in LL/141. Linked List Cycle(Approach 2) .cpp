/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        
        if( head == NULL ){
            return false ;
        } 

        unordered_map< ListNode* , int > count ;

        ListNode* temp = head ;

        while( temp != NULL ){

            count[temp] ++ ;

            if( count[ temp ] > 1 ){
                return true ;
            }  

            temp = temp -> next ;
        } 


        return false;
    }
};