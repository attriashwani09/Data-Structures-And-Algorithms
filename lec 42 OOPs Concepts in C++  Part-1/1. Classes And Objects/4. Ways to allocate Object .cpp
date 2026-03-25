#include<iostream>
using namespace std ;  

// There are mainly 2 ways to allocate objects : 
// 1). Static Allocation 
// 2). Dynamic Allocation 

class Hero{

    private : 
    int health ;
    char level ;  


    public :

    int getHealth(){
        return health ;
    } 

    char getLevel(){
        return level ;
    }  

    void setHealth( int h){
        health = h ;
    } 

    void setLevel( char l){
        level = l ;
    }
};

int main() {

    cout << "Static Allocation :\n" ;
    // Static Allocation : 
    Hero h1 ;
    h1.setHealth(10) ; 
    h1.setLevel ('A') ;

    cout << "Health -> " << h1.getHealth() << endl ;
    cout << "Level -> " << h1.getLevel() << endl ; 


    cout << "Dynamic Allocation :\n" ;
    // Dynamic Allocation :  
    Hero *h2 = new Hero ;

    (*h2).setHealth(100) ;
    (*h2).setLevel('Z') ; 
    cout << "Health -> " << (*h2).getHealth() << endl ;
    cout << "Level -> " << (*h2).getLevel() << endl ; 


    // 2nd Way for Dynamic Allocation :" 
    
    Hero *h3 = new Hero; 

    h3 ->setHealth(1000) ;
    h3 -> setLevel('P') ;

    cout << "Health -> " << h3->getHealth() << endl ;
    cout << "Level -> " << h3->getLevel() << endl ; 


    

} 


// Output : 
// Static Allocation :
// Health -> 10
// Level -> A
// Dynamic Allocation :
// Health -> 100
// Level -> Z
// Health -> 1000
// Level -> P