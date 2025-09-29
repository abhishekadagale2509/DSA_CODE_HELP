#include<iostream>
using namespace std;
/*
int main()
{
    int num=5;
    int *ptr=&num;
    cout<<num<<endl;
    cout<<ptr<<endl;
    cout<<*ptr;

}*/
/*#include<iostream>
using namespace std;
int main()
{
    int num = 5;       // an integer variable
    int *ptr = &num;   // a pointer 'ptr' stores the address of 'num'

    cout << num << endl;   // prints value of num (5)
    cout << ptr << endl;   // prints the memory address of num
    cout << *ptr;          // dereferences ptr, prints the value stored at that address (5)
}
   */

   int main()
   {
    int i=5;
    int *ptr=&i;
    cout<<i<<endl;
    cout<<ptr<<endl;
    cout<<&ptr<<endl;
    cout<<*ptr<<endl;

    cout<<"before i is "<<i;
    (*ptr)++;
    cout<<"after i is "<<i;
   }