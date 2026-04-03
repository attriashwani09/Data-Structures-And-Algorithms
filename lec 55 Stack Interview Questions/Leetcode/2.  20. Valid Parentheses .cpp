class Solution {
public:
    bool isValid(string s) {
        
        stack<char> st;

        for(int i=0;i<s.length();i++){
            char ch=s[i];
            
            // push elemnt in stack
            if(ch=='(' || ch=='[' || ch=='{' ){ 

                st.push(ch);

            }
            else{ 

                // pop element from stack 
                
                // stack non empty and got closing parenthesis
                if(!st.empty()){ 
                   
                   char top=st.top();
                    // check if closing parenthis have coreect order
                    if( (top=='(' && ch==')')  || (top=='['  &&  ch==']') || (top=='{'  && ch=='}') ){

                        // corect behaviour
                        st.pop();

                    }
                    else{
                        // wrong closing parnthesis 
                        return false;
                    }
                } 
                else{ 

                    // stack is empty and we get closing parenthesis means illegal beahvour 
                    return false;

                }

            }
                    
        }  

        if(st.empty()){
            return true;
        }  
        else{
            return false;
        }         
    }
};