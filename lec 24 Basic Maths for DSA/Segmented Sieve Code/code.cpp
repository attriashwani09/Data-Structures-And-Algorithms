
#include<iostream> 
#include<vector> 
#include<math.h>
using namespace std; 

vector<int> simpleSieve( int n ){

    vector<int> Primes ;

    vector <bool> isPrime(n+1 , true); 

    for(int i=2; i*i<= n ; i++) {

        if(isPrime[i] == true){

            for(int j= i*i ; j<=n ; j= j+i){
                isPrime[j] = false;
            }
        }
    } 

    for(int i=2; i<=n ; i++){
        if( isPrime[i] == true) {
            Primes.push_back( i );
        }
    } 

    return Primes;
} 


vector<long long> SegmentedSieve( long long L , long long R) {

    long long limit = sqrt(R) ;  

    vector<int> Primes = simpleSieve(limit) ;

    vector<bool> isPrime( R - L + 1 , true) ;

    for(int p : Primes){

        long long firstMultiple  = max((long long) p*p , ((L+p-1)/p )*p ) ;

        for( int j=firstMultiple  ; j<= R ; j = j+p) {

            isPrime[j - L] = false; 
        }
    } 


    if( L == 1){
        isPrime[0] = false;
    } 

    vector< long long> ans; 

    for( long long i=L ; i<=R; i++) {

        if( isPrime[i-L]){
            ans.push_back( i );
        }
    }

    return ans;

}

int main() {

    long long L =1000, R =2000;

    vector<long long> ans = SegmentedSieve( L , R ) ; 

    cout << "Primes b/w " << L << " & " << R << " :\n" ;
    for(auto p : ans){
        cout << p << " ";
    } 

}