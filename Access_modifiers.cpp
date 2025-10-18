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
__________________________________________________________________
// Setter getter methods to access the private members of a class

#include<bits/stdc++.h>
using namespace std ;

class person{
  private :
    int age ;

   public:
   
   void setAge(int a){
    age = a;
   }

   int getAge(){
    return age ;
   }

} ;

int main(){

    person p1 ;

    p1.setAge(25) ;

    cout<< p1.getAge() << endl ;

    return 0 ;
}
