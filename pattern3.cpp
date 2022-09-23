#include<iostream>
using namespace std;

int main()
{
    int i,j,k=1,n;

    cout<<"Enter number of lines you want to print in pattern";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
    return 0;
}