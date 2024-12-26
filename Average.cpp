#include <iostream>
#include<iomanip>
using namespace std;

void Average(double A[],int n)
{
    double c=0;
    for(int i=0;i<n;i++)
    {
        c+=A[i];
    }
    cout<<fixed <<setprecision(7)<<showpoint<< c/n;
    //cout<<c/n;
}
int main()
{
    int n;
    cin>>n;
    double a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    Average(a,n);
}
