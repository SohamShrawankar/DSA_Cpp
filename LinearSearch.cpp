#include<iostream>
using namespace std ;

int searchelement(int array[] , int size , int element){
     for(int i= 0 ; i<size ; i++){
        if(array[i] == element){
            return i ;  
        }
    }
    return -1;
}


int main(){

int array[] = {1,2,3,4,5,6,7,8,9,10} ;
int size = sizeof(array)/sizeof(array[0]);
int mynum;
int index;

cout<<"Enter the number to search: " ;
cin >> mynum ;

index = searchelement(array , size , mynum) ;

if(index != -1){
    cout<< mynum <<" is at index "<< index;
    }
    else{
        cout<< mynum <<" is not in the array" ;
    }

    return 0;
}
