/*#include<iostream>
using namespace std;
int main()
{
    int a,b,n;
    cout<<n;
    a=0;
    b=1;

    for(int i=1;i<n;i++)
    {
        int fib=a+b;
        a=b;
        b=fib;
        cout<<fib;
    }
}*/

#include<iostream>
using namespace std;

int main()
{
    int a, b, n;
    cout << "Enter number of terms: ";
    cin >> n;

    a = 0;
    b = 1;

    cout << a << " "; // print 0
    if (n > 1)
        cout << b << " "; // print 1 if n > 1

    for (int i = 3; i <= n; i++) // start from 3rd term
    {
        int fib = a + b;
        cout << fib << " ";
        a = b;
        b = fib;
    }

    return 0;
}
