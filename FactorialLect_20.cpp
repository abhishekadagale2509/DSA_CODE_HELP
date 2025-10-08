#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0)
    return 1;

    int smallVal=factorial(n-1);
    int bigVal=n*smallVal;

    return bigVal;
    
}
int main()
{
    int n;
    cin>>n;
    int ans=factorial(n);
    cout<<ans;
}