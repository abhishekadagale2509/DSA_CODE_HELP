#include<iostream>
using namespace std;
bool isPrime(int n){
if(n<=1)
return false;
for(int i=2;i<n;i++)
{
    if(n%i==0)
    {
        return false;

    }
    
}
return true;

}
int main()
{
    int n;
    cin>>n;
    if(isPrime(n))
    {
        cout<<"no is prime";


    }
    else{
        cout<<"not prime";
    }
}
/*#include <iostream>
#include <cmath>  // for sqrt
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;          // 0 and 1 are not prime
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;  // divisible -> not prime
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    if (isPrime(n)) {
        cout << "Number is prime";
    } else {
        cout << "Number is not prime";
    }

    return 0;
}
*/