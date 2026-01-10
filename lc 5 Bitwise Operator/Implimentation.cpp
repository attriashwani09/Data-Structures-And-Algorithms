#include<iostream>
using namespace std;

int main(){
    // Bitwise Operator are of 6 types :
    // 1). Bitwise And = '&' 
    // 2). Bitwise OR = '|'
    // 3). Bitwise Not = '~'  
    // 4). Bitwise XoR = '^'  


    // Implimentation :  
    int a = 4;
    int b = 6;

    cout<<" a&b :"<< (a&b) << endl ;
    cout<<" a|b :"<< (a|b) << endl ;
    cout<<" ~a :"<< (~a) << endl ;
    cout<<" a^b :"<< (a^b) << endl ; 

    //  output : 
    //  a&b :4
    //  a|b :6
    //  ~a :-5
    //  a^b :2 





    // Left shift and right shift 

    // 1). Left Shift : Shifts bits left
    // In majority cases if we left shift any num by 1 , then it gets multiplies by 2
    // eg 17<<1 = 34

    // only when the num is very large , in that case if we left shift it , then it gets conveted into -ve also (or becomes less in value ) 


    // 2) Right Shift : Shifts bits right
    // Right shift : Num gets divided by 2 ;

    // Padding is given with  0 in most of the cases. 


    // Implimentation :

    cout<<"Left shift examples :\n ";
    cout<< (17<<1) <<endl;
    cout<< (17<<2) <<endl;

    cout<<"Right Shift examples :\n";
    cout<< (19>>1) <<endl;
    cout<< (21>>2) <<endl;


    // Output =
    //  Left shift examples :
    //  34
    // 68
    // Right Shift examples :
    // 9
    // 5
    
}