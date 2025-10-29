
#include <iostream>
using namespace std;

void sayDig(int n, string arr[])  // return type should be void
{
    if (n == 0) {
        return;
    }

    int digit = n % 10;   // extract last digit
    n = n / 10;           // remove last digit

    sayDig(n, arr);       // recursive call for remaining digits
    cout << arr[digit] << " ";  // print word for current digit
}

int main()
{
    string arr[10] = {"zero", "one", "two", "three", "four", "five",
                      "six", "seven", "eight", "nine"};

    int n;
    cin >> n;

    if (n == 0)
        cout << "zero";
    else
        sayDig(n, arr);

    cout << endl;
    return 0;
}



/*#include<iostream>
using namespace std;
int sayDig(int n,string arr[])
{
    if(n==0){
        return;
    }
    int digit=n%10;
    n=n/10;
    sayDig(n,arr);
    cout<<arr[digit];

}
int main()
{
    string arr[10]={"zero","one","two","three","four","fie","six","seven","eight","nine"};
    int n;
    cin>>n;
    sayDig(n,arr);
    cout<<endl;
}
*/