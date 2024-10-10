#include<iostream>
#include <vector>

using namespace std;

void NewArray(vector<int>A,vector<int> B,int n)
{
   vector<int>C(n+n);

    for(int i=0;i<n;i++)
          C[i]=B[i];
    for(int j=0;j<n;j++)
          C[n+j]=A[j];

    for(int k=0;k<n+n;k++)
        cout<<C[k]<<" ";
}
int main()
{
    int N;
    cin>>N;
    vector<int>A(N),B(N);
    for(int i=0;i<N;i++)
        cin>>A[i];

    for(int i=0;i<N;i++)
        cin>>B[i];

    NewArray(A,B,N);
    return 0;
}
