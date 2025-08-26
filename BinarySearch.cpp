#include<bits/stdc++.h>
using namespace std;

int binary_search(vector<int>& vec , int target ){
int  start = 0 , end = vec.size()-1;
         while( start <= end){
                int mid = ( start + end ) / 2 ;
                if( target > vec[mid] ){
                    start = mid + 1;
                }
                else if( target < vec[mid] ){
                    end = mid - 1 ;
                }
                else {
                    return mid ;
                }
         }
         return -1 ;
}


int main(){
    
int n;
cin>>n; 
vector<int> vec(n);
for(int i=0;i<n;i++){
    cin>>vec[i];
}

sort(vec.begin() , vec.end()) ;

int target ;
cin>> target ;

int index = binary_search(vec , target); 
cout << "Element found at index: " << index ;

return 0 ;
}
