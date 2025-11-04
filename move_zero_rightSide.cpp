void movezeros(vector<int>&num){
    int i=0;
    for(int j=0;j<num.size();j++)
    {
        if(num[j]!=0)
        {
            swap(num[j],num[i]);
            i++;
        }

    }
}
/*#include <iostream>
#include <vector>
using namespace std;

void moveZeros(vector<int>& num) {
    int i = 0;
    for (int j = 0; j < num.size(); j++) {
        if (num[j] != 0) {
            swap(num[j], num[i]);
            i++;
        }
    }
} 

void print(const vector<int>& v) {
    for (int x : v) {
        cout << x << " ";
    }
    cout << endl;
}

int main() {
    vector<int> num = {0, 1, 0, 3, 12};
    moveZeros(num);
    print(num);
    return 0;
}
*/