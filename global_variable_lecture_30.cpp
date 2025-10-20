#include<iostream>
using namespace std;
int score=15;
void a(int &i)
{
    cout<<score;
    score++;
    char ch='a';
    cout<<i;

}
void b(int &i)
{
    cout<<score;
    cout<<i;


}


int main()
{
    cout<<score;
    int i=5;
    a(i);
    b(i);

}
/*#include<iostream>
using namespace std;

int score = 15;

void a(int &i) {
    cout << score<<endl;
    score++;
    char ch = 'a';
    cout << i<<endl;
}

void b(int &i) {
    cout << score<<endl;
    cout << i;
}

int main() {
    cout << score<<endl;
    int i = 5;
    a(i);
    b(i);
}*/