#include<iostream>
using namespace std;

// Array printinng Function 
void printArray(int arr[], int size){

    for(int i=0 ; i<size ; i++){
        cout << arr[i] << " ";
    } 
    cout<< endl ;
}


int main(){

    //1. Arrray Initialization  : 10 size array is formed . It index starts from zero and goes to 9. (0-9)
    int first[10];

    //2. accessing it 
    cout<<" first[10] :" << first[1] << endl;  // gives a garbage value    :  first[10] :6422476 

    //3. Initializing array with values 
    int second[3] = { 1 , 2 , 3 } ;

    cout<< " second [0] : "<< second[0] << endl;
    cout<< " second [1] : "<< second[1] << endl;
    cout<< " second [2] : "<< second[2] << endl; 


    // 4. Initialzing whole array with 0 
    // Note : this way only works for 0 . If we want to initialize it with any other number like 1 , then we have to use loop.
    int third[10] = {0} ; 
    
   printArray(third,10) ; // 0 0 0 0 0 0 0 0 0 0

    // if we try this method with 1 

    int demo[10]={1};
    printArray(demo,10);  // 1 0 0 0 0 0 0 0 0 0



    // 5. Initializing whole array with 1
    int fourth[10];

    for(int i=0;i<10;i++){
        fourth[i]=1;
    }  

    printArray(fourth,10);  // 1 1 1 1 1 1 1 1 1 1



    // 6. finding the size(length) of Array : take fourth array example 
    int fourthSize = sizeof(fourth)/sizeof(int);
    
    cout<<"Size of fourth : " << fourthSize << endl;   // Size of fourth : 10 

    // Note : this method of finding arr length has it flaws . Like it does not tell us the actual length of the array (means how many total values are placed) but tells us the actual space present in the array (means it tells us the total num of indexes present in the array) .



    // 7. Char Array :
    char ch[5] = {'a' , 'b' , 'c' , 'd' , 'e' };

    for(int i=0 ; i<5 ; i++){
        cout << ch[i] << " " ;
    } 
    cout << endl ;
    // a b c d e 


    // 8. Other Datatypes Array :
    double FirstDouble[10];
    float FirstFloat[10];
    bool isValid[20];

    string hello[10] = {"Ashwani" , "Sharma" , "B.Tech" , "Skiet"} ; 
    for(int i=0 ; i<4 ; i++){
        cout << hello[i] << " " ;
    }  



    


}