#include<iostream>
using namespace std; 

void PrintArray(int arr[][4] , int row, int col){

    for(int i=0; i<row; i++){

        for(int j=0; j<col; j++){
            cout << arr[i][j] << " ";
        } 
        cout << endl;
    } 

    return;
} 

bool isPresent( int arr[][4] , int row , int col , int target){

    for(int i=0; i<row; i++){

        for(int j=0; j<col; j++){
            if(arr[i][j] == target){ 

                cout << " row index = " << i  << " and " << "col index = " << j  << endl;
                return true;
            }
        }
    } 

    return false;
} 


void RowSum(int arr[][4] , int row , int col ){

    for(int i=0; i<row ; i++){ 

        int sum =0;
        for(int j=0; j< col ; j++){
            
            sum += arr[i][j];
        } 

        cout << sum << " " ;
    } 

} 


void colSum( int arr[][4] , int row , int col) {

    for ( int j= 0 ; j < col ; j++){
        int sum = 0 ; 

        for( int i=0 ; i< row ; i++){
            sum += arr[i][j] ;
        } 
        cout << sum << " " ;
    }
}

int main() {

    int arr[3][4];

    // 1). taking  row - wise input  :

    cout << "Enter Input : \n";

    for(int row=0; row<3; row++){

        for(int col=0; col< 4 ; col++){
            cin >> arr[row][col];
        } 

    }   
    
    
    // 2). Taking col - wise input : 

    // for(int col = 0; col < 4 ; col++){
        
    //     for(int row=0 ; row < 3; row ++){
    //         cin >> arr[row][col];
    //     }
    // }

    cout<< "Print Array : \n";


    PrintArray(arr , 3 , 4); 


    cout << "Enter Element to search in array : \n";
    int target ;
    cin >> target ;


    if( isPresent(arr , 3 , 4 , target)){
        cout << target << " is present in the Array . \n";
    } 
    else{
        cout << target << " is not present in the Array. \n"; 
    } 

    cout << endl;
    // 3). Row wise Sum : 
    
    cout << "Row - wise Sum : \n" ;
    RowSum( arr , 3 , 4); 


    cout << endl ;

    // 4). Col wise Sum : 

    cout << "Col - wise  Sum : \n" ;
    colSum( arr , 3 , 4); 
    
}