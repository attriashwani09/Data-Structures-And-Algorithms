class kStacks {

    // main array to store elements
    int *arr;
    int *top;
    int *next;
    
    int freespot ;

  public:
    kStacks(int n, int k) {
        // initialize data structures for k stacks 
        
        arr = new int[ n ] ;
        
        // top represent the top position of the curr stack 
        top = new int[ k ] ;
        
        for( int i=0 ; i<k ; i++ ){
            top[i] = -1 ;
        } 
        
        
        // next have basically 2 main functions : 
        // 1). to see the next freespot ;
        // 2). to get the next element after top of curr stack 
        
        next = new int[ n ] ;
        
        for( int i=0 ; i<n ; i++ ){
            next[i] = i + 1 ;
        } 
        next[ n - 1 ] = -1 ;
        
        
        freespot = 0 ; // first free spot 
    }

    void push(int x, int i) {
        
        if( freespot == -1 ){
            return ;
        } 
        
        
        int index = freespot ;
        
        freespot = next[ index ] ;
        
        arr[index] = x ; 
        
        next[index] = top[ i ] ;
        
        top[ i  ] = index ; 
        
        return ;
    }

    int pop(int i) { 
        
        if( top[ i  ] == -1 ){
            return - 1 ;
        }
         
        int index = top[ i ] ;
        
        top[ i  ] = next[index] ;
        
        next[index] = freespot ;
        
        freespot = index ;
        
        return arr[index] ;
    }
};