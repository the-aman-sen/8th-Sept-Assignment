#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int i,j,sp,n;

    cout<<"Enter the number of lines to print : ";
    cin>>n;

    sp=(n-1)*3;

    for(i=1;i<=n;i++)
    {
        
        for(j=1;j<=sp;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
        cout<<setw(3)<<j;
        }

        sp=sp-3;
        cout<<endl;
    }
    return 0;
}