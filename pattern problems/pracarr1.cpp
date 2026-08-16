// sum and product of all number in an array 

#include <iostream>
using namespace std;

int Sum(int arr[] , int size){
    int sum = 0 ; 
    for ( int i = 0 ; i< size ; i++){
        sum = sum + arr[i] ; 
    }
    return sum ; 
}

int Product(int arr[] , int size){
    int product = 1 ; 
    for ( int i = 0 ; i< size ; i++){
        product = product * arr[i] ; 
    }
    return product ; 
}


int main() {
    
    int arr[] = { 1,2,3,4,5} ; 
    int size = sizeof(arr) / sizeof(arr[0]) ; 

    cout << "Sum of all elements in an array is "<<Sum(arr,size)<<endl;
    cout << "Product of all elements in an array is "<<Product(arr,size)<<endl;

    
    return 0;
}