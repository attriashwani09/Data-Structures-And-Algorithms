#include<iostream>
using namespace std; 

int getLength( char ch[]){

    int count = 0 ;

    for( int i=0; ch[i] != '\0' ; i++){
        count ++;
    } 

    return count ;

}  


void reverse( char *ch , int len){

    int st = 0;
    int end = len - 1;

    while( st < end ){

        swap(ch[st] , ch[end]);
        st++;
        end -- ;
    } 


} 







int main() {

    char name[20]; 

    cout<< "Enter Your name : \n";
    cin>> name;  

   // name[2] = '\0'; // null char 

    cout << "Your name is : " << name << endl;   // If input is Ashwani , then only As is going to print , because name[2] is null char . 


    int len = getLength(name) ;

    cout<< "Length of name is : " << len << endl;


    // Afterv reverse your name is : 

    reverse(name , len);

    cout << "After Reverse : " << name << endl ;




} 


// Output 
// Enter Your name : 
// Ashwani
// Your name is : As     