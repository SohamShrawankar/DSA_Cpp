#include<bits/stdc++.h>
using namespace std ;

class shape{ 
     virtual void draw() = 0;
};

class circle : public shape{
    public:
      void draw(){
        cout<<"Hi i am a circle. My area is pie*r*r." ;
      }
};

int main(){

circle c1 ;
c1.draw() ;

    return 0;
}
