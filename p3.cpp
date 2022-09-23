#include<iostream>
using namespace std;

int main()
{
    int i,j,n;

    cout<<"Enter the no. of lines to  print";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"  "<<j%2;
        }
        cout<<endl;
    }
    return 0;
}
