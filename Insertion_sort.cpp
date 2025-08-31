#include <bits/stdc++.h>
using namespace std;

void Insertionsort(vector<int>& vec) {
    for(int i = 1; i < vec.size(); i++) {
        int j = i;
        while(j > 0 && vec[j-1] > vec[j]) {
            swap(vec[j], vec[j-1]);
            j--;
        }
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> vec(n);
    for(int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    Insertionsort(vec);

    for(int i = 0; i < n; i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}
