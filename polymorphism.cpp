// FUNCTION OVERLOADING 

#include<bits/stdc++.h>
using namespace std ;

int sum(int num1 , int num2){
    return num1+num2 ;
}
double sum(double num1 , double num2 , double num3){
    return num1+num2+num3 ;
}


int main(){

    cout << "Sum of integer numbers is: " << sum(3,4)<<endl;
    cout << "Sum of decimal numbers is: " << sum(3.4,4.3,5.3) ;

    return 0 ;
}

_______________________________________________________________

// OPERATOR OVERLOADING

