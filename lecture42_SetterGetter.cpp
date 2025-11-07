#include<iostream>
using namespace std;
class Hero
{
    private:
    char level;
    public:
    int health;

    int print()
{
    cout<<"health is "<<endl;

}
void sethealth(int h)
{
    health=h;


}
int gethealth()
{
    return health;
}


void setLevel(char c)
{
    level=c;
}
char getLevel()
{
    return level;
}
};
int  main()
{

    Hero h;
    h.sethealth(70);
    h.gethealth();

    h.setLevel('A');
    h.getLevel();
}

/*#include<iostream>
using namespace std;

class Hero
{
private:
    char level;

public:
    int health;

    void print()
    {
        cout << "Health is: " << health << endl;
        cout << "Level is: " << level << endl;
    }

    void setHealth(int h)
    {
        health = h;
    }

    int getHealth()
    {
        return health;
    }

    void setLevel(char c)
    {
        level = c;
    }

    char getLevel()
    {
        return level;
    }
};

int main()
{
    Hero h;
    h.setHealth(70);
    h.setLevel('A');

    cout << "Health: " << h.getHealth() << endl;
    cout << "Level: " << h.getLevel() << endl;

    // or simply:
    h.print();
}
*/