#include<iostream>
using namespace std;

int factorial(int n){
    int ans=1;

    int num=n;

    for(int i=0;i<n;i++){
        ans=ans*num;
        num--;
    }

    return ans;
} 

int nCr(int n, int r){
    
    int num= factorial(n);

    int denom= factorial(r) * factorial(n-r); 

    int ans=num/denom;

    return ans;

}
int main(){
    int n,r ;

    cout<<"Enter the value of n and r \n";
    cin>> n >> r;

    cout<<" nCr = " << nCr(n,r) << endl; 

} 


// output :
// Enter the value of n and r 
// 10 4
//  nCr = 210
