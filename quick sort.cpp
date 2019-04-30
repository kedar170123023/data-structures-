#include<bits/stdc++.h>
#include<vector>
using namespace std;
int partition(int *A,int p, int r)
{
    int key = A[r];
    int j= p-1;

    for( int i=p;i<r;i++)
    {
        if(A[i]<=key)
        {
            j++;
            swap(A[j],A[i]);

        }
    }
     swap(A[j+1],A[r]);
    return j+1;
}
void qsort(int *A,int p,int r)
{
    if(p<r)
    {
        int q= partition(A,p,r);
        qsort(A,p,q-1);
        qsort(A,q+1,r);
    }
}
int main(){
    int A[10] = { 4,88,45,14,5,414,544,57,485,1};
    qsort(A,0,9);
for(int i=0;i<10;i++)
cout<<A[i]<<" ";
}
