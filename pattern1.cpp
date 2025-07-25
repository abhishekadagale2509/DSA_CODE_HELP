#include <iostream>
using namespace std;
int main()
{
    int no;
    cin >> no;
    int i = 1;

    while (i <= no)
    {
        int j = 1;
        while (j <= no)
        {
            cout << i;
            j++;
        }
        cout << endl;

        i++;
    }
}
/*/tmp/PysKEAN4tC.o
5
11111
22222
33333
44444
55555
*/