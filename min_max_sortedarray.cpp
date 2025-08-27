#include<bits/stdc++.h>
using namespace std ;

int problem(vector<int>& vec){
    sort(vec.begin() , vec.end()); 

    int start = 0 , end = vec.size()-1;
     while (start <= end) {
        if (start == end) { 
            cout << vec[start] << " ";
        } else {
            cout << vec[start] << " " << vec[end] << " ";
        }
        start++;
        end--;
    }
    cout << endl;
     
}

int main(){

 int n ;
 cin >> n ;

 vector<int> vec(n);

for(int i = 0 ; i< n ; i++){
    cin >> vec[i] ;
}

int return_vector  = problem(vec) ;


    return 0 ;
}


