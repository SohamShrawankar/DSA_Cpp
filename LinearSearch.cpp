#include<bits/stdc++.h>
using namespace std;

int linear_search(vector<int>& vec , int target ){
    for(int i = 0 ; i < vec.size() ; i++){
        if(vec[i] == target) 
        return i;
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

int target ;
cin>> target ;

int index = linear_search(vec  , target); 
cout << "Element found at index: " << index ;

return 0 ;
}
