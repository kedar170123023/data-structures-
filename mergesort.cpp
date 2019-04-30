#include<iostream>
#include<climits>
using namespace std;
void merge(int *,int,int,int);
void merge_sort(int *A,int p ,int r){
    if(p<r)
    {
        int q = (p+r)/2;
        merge_sort(A,p,q);
        merge_sort(A,q+1,r);
        merge(A,p,q,r);
        
    }
    

}
void merge(int *A,int p,int q,int r)
    {
        int n1=q-p+1;
        int n2 = r-q;
        int *L = new int[n1];
        int *R = new int [n2];
        L[n1]=INT_MAX;
        R[n2]=INT_MAX;
        for(int i=0;i<n1;i++)
        {
            L[i]=A[p+i];
        }
        for(int i=0;i<n2;i++)
        {
            R[i]=A[q+i+1];
        }
        int i=0;
        int j=0;
        for(int k=p;k<=r;k++)
        {
            if(L[i]>=R[j])
            {
                A[k]=R[j];
                j++;
            }
            else {
                A[k]=L[i];
                i++;}

        }

    }
int main(){
    int A[10]={
        4,85,47,5,745,547,5,54,75,96
    };
    merge_sort(A,0,9);
    for(int i=0;i<10;i++)
    {
        cout<<A[i]<<" ";
    }
}