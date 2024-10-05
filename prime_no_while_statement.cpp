/*#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 2;
    while (i < n)
    {
        if (n % i == 0)
        {
            cout << "no is not prime";
        }
        else
        {
            cout << "no is positive";
        }
        i = i + 1;
    }
}*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    bool isPrime = true;

    if (n <= 1) {
        isPrime = false; // 0 and 1 are not prime numbers
    } else {
        int i = 2;
        while (i <= n / 2) {
            if (n % i == 0) {
                isPrime = false;
                break; // No need to check further, n is not prime
            }
            i++;
        }
    }

    if (isPrime) {
        cout << "n is prime";
    } else {
        cout << "n is not prime";
    }

    return 0;
}
