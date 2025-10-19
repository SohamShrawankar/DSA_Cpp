//SINGLE INHERITANCE 

#include<bits/stdc++.h>
using namespace std ;

class vehicle{
     public:
    vehicle(){
            cout<<"Hi my name is " ;
    }
};

class car : public vehicle{
    public:
    car(){
           cout<<"soham shrawankar " ;
    }
};

int main(){
    car obj ;

    return 0;
}

____________________________________
// MULTIPLE INHERITANCE 

#include <bits/stdc++.h>
using namespace std;

class class1 {
public:
    class1() {
        cout << "Hi my name is ";
    }
};

class class2 : virtual public class1 {
public:
    class2() {
        cout << "Soham Shrawankar ";
    }
};

class class3 : virtual public class1, public class2 {
public:
    class3() {
        cout << "a student from SIT Nagpur.";
    }
};

int main() {
    class3 obj;
    return 0;
}


_________________________________
// MULTILEVEL INHERITANCE 

#include<bits/stdc++.h>
using namespace std ;

class class1{
    public:
    class1 (){
        cout<<"Hi my name is " ;
    }
};
class class2 : public class1{
    public:
    class2 (){
        cout<<"Soham Shrawankar " ;
    }
};
class class3 : public class2{
    public:
    class3 (){
        cout<<"A student of SIT nagpur. " ;
    }
};


int main(){
  
    class3 obj;

    return 0 ;
}
OUTPUT :-
Hi my name is Soham Shrawankar A student of SIT nagpur. 
________________________________
// HEIRARCHICAL INHERITANCE 

#include<bits/stdc++.h>
using namespace std ;

class intro{
    public:
    intro (){
        cout<<"Hi my name is "<<endl ;
    }
};
class person1 : public intro{
    public:
   person1 (){
        cout<<"Soham Shrawankar "<<endl ;
    }
};
class person2 : public intro{
    public:
    person2 (){
        cout<<"Purva Baghel " ;
    }
};


int main(){
  
    person1 obj1;
    person2 obj2;

    return 0 ;
}

OUTPUT :- 
Hi my name is 
Soham Shrawankar
Hi my name is
Purva Baghel
_______________________________________
