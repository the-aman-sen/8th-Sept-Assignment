#include<iostream>
using namespace std;

int main()
{
    int i,j,n;

    cout<<"Enter no. of lines you want to print : " ;
    cin>>n;

    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            cout<<"  "<<i;
        }
        cout<<endl;
    }
    return 0;

}