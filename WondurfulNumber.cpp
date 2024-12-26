#include <iostream>
#include<iomanip>
#include<vector>

using namespace std;

vector<int> toBainay(int n)
{
    int i=0;
    vector<int>M;
    while(n>0)
    {
        M[i]=n%2;
        n/=2;
        i++;
    }
    return M;
}
bool Ispalindrom(vector<int>A)
{
    int i=0,j=A.size()-1;
    while(i<A.size()/2)
    {
        if(A[i]!=A[j]) break;
        i++;
        j--;
    }
    if(i==A.size()/2) return true;
    else
    return false;
}
int main()
{
    int A;
    cin>>A;
    vector<int>B;
    B=toBainay(A);
    bool test=Ispalindrom(B);
    if(A%2!=0 && test==true)
        cout<<"YES";
    else cout<<"NO";

    return 0;
}
