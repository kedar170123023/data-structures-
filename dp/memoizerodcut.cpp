



#include <bits/stdc++.h>
using namespace std;
//memoize rod cut aux
int MRCA(int *P,int n,vector <int> &r)
{
    int q;
    if(r[n]>=0)
        return r[n];
    if(n==0)
        q = 0;
    else
    {
        q = INT_MIN;
        for(int i=0;i< n;i++)
            q = max(q, P[i]+ MRCA(P,n-i-1,r));
    }
    r[n] = q;
    return q;

}





//memoize rod cut
int MRC(int *P, int n)
{
    vector <int> r(n+1,INT_MIN);
    return MRCA(P,n,r);
}

int main() 
{ 
    int arr[] = {1, 5, 8, 9, 10, 17, 17, 20,24,30}; 
    cout<<endl<<MRC(arr,10);
   
 
    return 0; 
} 