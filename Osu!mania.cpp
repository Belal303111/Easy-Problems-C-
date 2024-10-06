#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t,x=0,n;
    cin>>t;
    int h[t];
   vector<vector<int>>nums;
    while(x<t)
    {
        cin>>n;
        h[x]=n;
       // cout<<"H[x]:"<<h[x]<<" ";
        char A[n][4];
      vector<int>B(n);
        for(int i=0;i<n;i++)
        for(int j=0;j<4;j++)
        {
            cin>>A[i][j];
            if(A[i][j]=='#') {
                B[i]=j+1;
             //   cout<<"B[i]:"<<B[i]<<" ";
               // break;
            }
        }
        int k=0,f=n-1;
        while(k<n/2)
        {
            swap(B[k],B[f]);
            k++;
            f--;
        }
        cout<<endl;
        /*for(int i=0;i<n;i++)
       {
           cout<<"B[i] before put in vector:"<<B[i]<<endl;
           nums.push_back(B[i]);
       }*/
        nums.push_back(B);
        x++;
    }
    for(int y=0;y<t;y++)
    {
     // cout<<"H[y]:"<<h[y]<<endl;
      for(int i=0;i<h[y];i++)
        {
        cout<<nums[y][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
