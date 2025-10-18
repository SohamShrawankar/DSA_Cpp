#include<bits/stdc++.h>
using namespace std ;

class Teacher{
    public:
    
    string name ;
    string dept ;
    string sub ;
    float salary ;

    //non-parameterized constructors
   Teacher() {
    dept = "computer science " ;
   }

   //parameterized constructors
    Teacher (string n , string d , string s , float sal){
        name = n ;
        dept = d ;
        sub  = s ;
        salary = sal ;
    }

    void getinfo(){
       cout << "name: " << name <<endl ;
 cout << "sub: "  << sub ;
    } 

};

int main(){

    Teacher t1("soham" , "CSE" , "CLOUD" , 25000) ;
    t1.getinfo() ;
    Teacher t1 ;
    cout << t1.dept ;
    return 0 ;
}
