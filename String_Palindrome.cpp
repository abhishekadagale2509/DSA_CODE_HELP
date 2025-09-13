#include<iostream>
using namespace std;
bool checkPalindrome(char a[],int n)
{
    int s=0;
    int e=n-1;
    while(s<=e){
        if(a[s]!=a[e])
        {

            return 0;
        }
        else{
            s++;
            e--;
        }

    }

}

void reverse(char n[], int l)   // changed return type to void
{
    int s = 0;
    int e = l - 1;
    while(s < e)
    {
        swap(n[s++], n[e--]);
    }
}

int getLength(char n[])
{
    int count = 0;
    for(int i = 0; n[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char name[20];
    cout << "Enter name: ";
    cin >> name;

    cout << "Your name is: " << name << endl;

    int len = getLength(name);
    cout << "Length = " << len << endl;

    reverse(name, len);   // added missing semicolon
    cout << "Reversed name: " << name << endl;
    cout<<"strin is palindrome or not"<<checkPalindrome(name,len);

    
}
/*#include<iostream>
using namespace std;

bool checkPalindrome(char a[], int n)
{
    int s = 0;
    int e = n - 1;
    while(s <= e){
        if(a[s] != a[e]) {
            return false;   // mismatch → not palindrome
        }
        s++;
        e--;
    }
    return true;  // if loop completes → palindrome
}

void reverse(char n[], int l)
{
    int s = 0;
    int e = l - 1;
    while(s < e)
    {
        swap(n[s++], n[e--]);
    }
}

int getLength(char n[])
{
    int count = 0;
    for(int i = 0; n[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char name[20];
    cout << "Enter name: ";
    cin >> name;

    cout << "Your name is: " << name << endl;

    int len = getLength(name);
    cout << "Length = " << len << endl;

    // check palindrome before reversing
    if(checkPalindrome(name, len)) {
        cout << "String is a palindrome" << endl;
    } else {
        cout << "String is NOT a palindrome" << endl;
    }

    // now reverse
    reverse(name, len);
    cout << "Reversed name: " << name << endl;

    return 0;
}
*/