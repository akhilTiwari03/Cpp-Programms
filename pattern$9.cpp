#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;//column wise 
    for(int i=1;i<=n/3;i++) // zig zag pattern with respect to column
    {
        for (int j=1;j<=n;j++)
        {
            if((i+j)%4==0 || (i==2 & j%4==0))
            {
                cout<<"* ";
            }
            else
            cout<<"  ";
        }
        cout<<endl;
    }
}