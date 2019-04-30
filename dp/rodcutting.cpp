#include <bits/stdc++.h>
using namespace std;

int cut_rod(vector<int> &arr , int n){
    if(n<=0) return 0;
    int q = INT_MIN;
    for (int i = 0; i <n; i++) q = max(q,cut_rod(arr, n-i-1)+arr[i]) ;
    return q;
}


int main() 
{ 
    vector <int> arr{1, 5, 8, 9, 10, 17, 17, 20,24,30}; 
    cout<<endl<<cut_rod(arr,6);
    return 0; 
        
} 