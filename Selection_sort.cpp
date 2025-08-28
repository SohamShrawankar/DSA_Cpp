#include<bits/stdc++.h>
using namespace std ;

int selectionsort(vector<int>& vec){
    for(int i=0 ; i<vec.size()-1 ; i++){
        int minindex = i ;
        for(int j=i+1 ; j < vec.size() ; j++){
            if (vec[j]<vec[minindex]){
                minindex = j ;
            }
        }
        swap(vec[i],vec[minindex]) ;
    }
}

int main(){

    int n ;
    cin >> n ;

    vector<int> vec(n) ;
    for(int i=0 ; i<n ; i++){
        cin >> vec[i] ;
    }
    
    int sort = selectionsort(vec) ; 

    for(int i =0 ; i<n ; i++){
        cout << vec[i] <<" ";
    }

    return 0 ;
}
