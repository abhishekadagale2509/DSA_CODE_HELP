#include<iostream>
using namespace std;
int reverse(char n[],int l)
{
    int s=0;
    int e=l-1;
    while(s<e)
    {
        swap(n[s++],n[e--]);

    }
}
int getLength(char n[])
{
    int count=0;
    for(int i=0;n[i]!='\0';i++)
    {
        count++;


    }
    return count;


}
int main()
{
    char name[20];
    cout<<"enter name";
    cin>>name;
    cout<<"your name is"<<name;
    int len=getLength(name);
    cout<<len;
    reverse(name,len);
    cout<<name;
}
/*#include<iostream>
using namespace std;

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

    return 0;
}
*/