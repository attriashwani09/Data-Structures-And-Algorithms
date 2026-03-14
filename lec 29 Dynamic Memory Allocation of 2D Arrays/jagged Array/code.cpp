#include<iostream>
#include<vector>
using namespace std;

int main() {

    int row;
    vector<int> cols;

    cout << "Enter the number of rows \n" ;
    cin >> row ; 

    int **arr = new int*[row] ;

    cout << "Enter the number of cols you want in each row \n" ; 
    for(int i=0; i<row; i++){
        
        int colSize ;

        cin >> colSize;

        cols.push_back(colSize) ;

    } 


    // creaate jagged array columns 

    for(int i=0; i<row; i++){

         arr[i] = new int[cols[i]];
    } 


    cout << "Enter the Elements of array \n" ;

    for(int i=0; i<row; i++){ 

        for(int j=0; j<cols[i]; j++){
            cin >> arr[i][j] ;
        } 

    } 


    // Output :  

    cout << "Array : " << endl;

    for(int i=0; i<row; i++){

        for(int j=0; j<cols[i] ; j++) {
            cout << arr[i][j] << " " ;
        } 
        cout << endl ;
    } 



    // deletion ;

    for(int i=0; i<row; i++){
        delete[] arr[i];
    }

} 


// Output : 

// Enter the number of rows 
// 3
// Enter the number of cols you want in each row 
// 2
// 3
// 5
// Enter the Elements of array 
// 1
// 2
// 3
// 4
// 5
// 6
// 7
// 8
// 9
// 1
// Array : 
// 1 2
// 3 4 5
// 6 7 8 9 1