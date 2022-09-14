#include<iostream>
using namespace std;
void PrintSubsetSumToK( int *a , int n ,int  k ,  int *output , int m)
{
    if(n == 0)
    {
        if(k==0)
        {
            for(int i = 0 ; i < m ; i++)
            {
                cout << output[i] << " ";
            }
            cout << endl;
            return;
        }
        return;
    }
    int *newoutput = new int [23433];
    for(int i = 0 ; i < m ; i++)
    {
        newoutput[i] = output[i];
    }
    newoutput[m] = a[0];
    PrintSubsetSumToK(a+1 , n-1 , (k-a[0]), newoutput , m+1);
    PrintSubsetSumToK(a+1 , n-1 , k, output , m);
    delete[]newoutput;

}
int main()
{
    int n;
    cin >> n;
    int *a = new int [n];
    for(int i = 0; i < n ; i++)
    {
        cin >> a[i];
    }
    int *output = new int [3500];
    int k;
    cin >> k;
    PrintSubsetSumToK(a , n , k ,output , 0);
    delete []output;
    delete []a;
    return 0;
}