#include<iostream>
using namespace std; 

// Abstracion : means  hiding internal implementation  and showing only the essential features to the user . 

class Car {

    private : 
    int speed ;

    public : 

    void setSpeed( int s){
        speed = s;
    } 

    void showSpeed(){
        cout << "Speed = " << speed << endl ;
    }
} ;

int main(){

    Car c; 

    c.setSpeed( 100 ); 

    c.showSpeed() ; 
    
}  

// ✔ Explanation:
// speed is hidden (private)
// User interacts using setSpeed() and showSpeed()
// 👉 Internal details are hidden → Abstraction


// Output : 
// Speed = 100 