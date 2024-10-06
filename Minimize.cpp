#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int c=0;
    int a,b;
    cin>>a>>b;
    if (a==b) cout<<0<<endl;
    else{
        int x=0,c=a;
        //minm=MAX_INT;
        x=(c-a)+(b-c);
        cout<<x<<endl;
    }
    }
    return 0;
}