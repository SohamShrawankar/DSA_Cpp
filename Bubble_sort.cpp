#include<bits/stdc++.h>
using namespace std ;

void bubble_sort(vector<int>& vec){
    for(int i=0 ; i<vec.size() ; i++){
        for(int j=0 ; j<vec.size()-1 ; j++){
            if(vec[j]>vec[j+1])
            swap(vec[j],vec[j+1]) ;
        }
    }
}


int main(){

    int n ;
    cin >> n ;
    vector<int> vec(n) ;

    for(int i=0 ; i<n ; i++){
        cin>> vec[i] ;
    }

    bubble_sort(vec) ;
    for(int i=0 ; i<n ;i++){
        cout << vec[i]<<" " ;
    }
    
    return 0;
}
