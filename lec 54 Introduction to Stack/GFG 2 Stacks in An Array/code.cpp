class twoStacks {
  public:

    twoStacks() {} 
    
    
    int  arr[200] ;
    int st = 0 ;
    int end = 199 ;

    // Function to push an integer into the stack1.
    void push1(int x) {
        
        if (st <= end) {
            arr[st++] = x;
        }
        
        
    }

    // Function to push an integer into the stack2.
    void push2(int x) { 
        
        if (st <= end) {
            arr[end--] = x;
        }
        
        
    }

    // Function to remove an element from top of the stack1.
        
    int pop1() { 
        
       if (st == 0) return -1;
        return arr[--st];
    }

        
    // Function to remove an element from top of the stack2.
    int pop2() { 
         if (end == 199) return -1;
        return arr[++end];
    }
};