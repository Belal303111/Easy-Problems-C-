#include <iostream>

using namespace std;

int main()
{
    int N,A,B;
    cin>>N>>A>>B;
    int c=0;
    for(int i=1;i<=N;i++)
    {
        if(i>=A && i<=B) {
              // cout<<"I:"<<i<<" ";
                c+=i;
              //  cout<<"C:"<<c<<" ";
        }
        else{
          //  if(i>9)
          //  {
                int x=i,k=0;
                while(x>0)
                {
                    k+=x%10;
                    x/=10;
                }
                if(k>=A && k<=B) {
                     //   cout<<"K:"<<k<<" ";
                        c+=i;
                     //   cout<<"C:"<<c<<" ";
            }
       // }
      //  cout<<endl;
    }
    }
    cout<<c;
    return 0;
}
