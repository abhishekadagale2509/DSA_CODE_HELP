#include<iostream>
using namespace std;
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
}