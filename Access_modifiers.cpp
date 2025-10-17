#include<bits/stdc++.h>
using namespace std ;

class teachers{
    public:                //private , protected 
        string name ;
        string department ;
        float sallary ;
};

int main(){
   
 teachers t1 ;
    
    t1.name = " Soham"; 
    t1.department = "CSE" ;
    t1.sallary = 30000 ;

    cout << t1.name << endl ;

    return 0 ;
}
