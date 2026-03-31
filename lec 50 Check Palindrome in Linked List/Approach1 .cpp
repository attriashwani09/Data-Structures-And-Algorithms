// Create a Copy LL 
// Reverse the Copied LL 
// Then chek for Palindrome 

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

    void copy( ListNode* head , ListNode* copyHead ){

        ListNode* temp = head ; 
        ListNode* copyTemp = copyHead ;

        while( temp != NULL ){

            ListNode* newNode =  new ListNode ( temp -> val ) ; 
            copyTemp -> next = newNode ;
            copyTemp = copyTemp -> next ; 
            temp = temp -> next ;

        } 

    }

    

    ListNode* reverse( ListNode* head ){
        
        ListNode* prev = NULL ;
        ListNode* curr = head ;
        ListNode* forward = NULL ;

        while( curr != NULL ){ 

            forward = curr -> next ;

            curr -> next = prev ;
            prev = curr ;
            curr = forward ;
        } 


        return prev ;

    }

public:
    bool isPalindrome(ListNode* head) {  

        if( head -> next == NULL )
        return true ; 

        // Step 1 : copy the entire LL 

        ListNode* copyHead = new ListNode( -1 ) ; 
        
        copy( head , copyHead ) ; 
        copyHead = copyHead -> next ;
       

        ListNode* rev = reverse( copyHead ) ;

        ListNode* temp1 = head ;
        ListNode* temp2 = rev ; 


        while( temp1 != NULL  && temp2 != NULL ){

            if( temp1 -> val  !=  temp2 -> val ){
                return false ;
            } 

            temp1 = temp1 -> next ;
            temp2 = temp2 -> next ;
        } 


        return true ;
        
    }
};