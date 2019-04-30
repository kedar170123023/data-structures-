#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n=10;
    int A[n]={4,8 , 7, 9 ,4,7,45,14,42,2};
    for (int i = 1;i<n;i++)
    {
        int j = i-1 ;
        int temp = A[i];
        while(j>=0 && A[j]>=temp)
        {
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=temp;
   }
        for(int i=0;i<n;i++)
        cout<<A[i]<<endl;
            return 0;
}