#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ans = 0;
    int i = 0;
    while (n != 0)
    {
        int dig = n % 10;
        if (dig == 1)
        {
            ans = ans + pow(2, i);
           
        }
         i++;
        n=n/10;
       
    
    }
     cout<<ans;
}
/*
while(n!=0)
{
int did=x%10;
if(ans>INT_MAX || ans<INT_MIN){
return 0;
}
ans=(ans*10)+dig;
x=x/10;
}return ans;
}*/