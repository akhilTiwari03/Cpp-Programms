#include<iostream>
using namespace std;
int reverse(int n)
{
    int temp, ans = 0;
    while(n>0)
    {
        temp =  n % 10 ;
        ans = ans * 10 + temp;
        n /= 10;  
    }
    return ans;
}

int addbinary(int a , int b)
{
    int ans = 0;
    int prevCarry = 0;
    while(a>0 && b>0)
    {
    if(a%2 == 0 && b%2 == 0)
    {
        ans = ans*10 + prevCarry;
        prevCarry = 0;
    }
    else if((a%2 == 0 && b%2 == 1) || (a%2== 1 && b%2 == 0))
    {
        if(prevCarry == 1)
        {
            ans = ans*10 + 0;
            prevCarry = 1;
        }
        else
        {
            ans = ans * 10 + 1;
            prevCarry = 0;
        }
    }
    else
    {
        ans =  ans * 10 + prevCarry;
        prevCarry = 1;
    }
    a /=10;
    b /=10;
    }
    while(a>0)
    {
        if(a%2==1)
        {
            if(prevCarry == 1)
            {
                ans = ans*10 + 0;
                prevCarry = 1;
            }
            else
            {
                ans = ans * 10 + 1;
                prevCarry = 0;
            }
        }
        else
        {
            ans = ans * 10 + prevCarry;
        }
        a /= 10;
    }
    while(b>0)
    {
        if(b%2==1)
        {
            if(prevCarry == 1)
            {
                ans = ans*10 + 0;
                prevCarry = 1;
            }
            else
            {
                ans = ans * 10 + 1;
                prevCarry = 0;
            }
        }
        else
        {
            ans = ans * 10 + prevCarry;
        }
        b /= 10;
    }
    if(prevCarry == 1)
    {
        ans = ans*10 + 1;
    }
    ans = reverse(ans);

    return ans;
}
int main()
{
    int a,b;
    cin >> a >> b;
    cout<<"Addition is : " <<addbinary(a,b);
    return 0;
}