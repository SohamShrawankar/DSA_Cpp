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

#include<bits/stdc++.h>
using namespace std ;

class vehicle{
     public:
    vehicle(){
            cout<<"Hi my name is " ;
    }
};

class car :virtual public vehicle{
    public:
    car(){
           cout<<"soham shrawankar " ;
    }
};

class cycle :virtual public vehicle, public car{
    public:
    cycle(){
           cout<<"a student from SIT nagpur. " ;
    }
};

int main(){
    cycle obj ;

    return 0;
}

_________________________________

