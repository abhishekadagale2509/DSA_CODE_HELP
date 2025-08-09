#include<iostream>
using namespace std;
bool searchele(int a[],int size,int ele)
{
    for(int i=0;i<size;i++){
        if(a[i]==ele){
            return 1;

        }
    }return 0;

}
int main()
{
    int key;
     cout<<"enter key ele to find";
    cin>>key;
    int a[10]={1,5,-2,-1,6,7,9,3,4,0};
    bool found=searchele(a,10,key);
    if(found){

        cout<<"ele is"<<key;
    }
    else {
        cout<<"ele not found"<<key;
    }
   
    
}
/*#include<iostream>
using namespace std;

bool searchele(int a[], int size, int ele)
{
    for(int i = 0; i < size; i++) {
        if(a[i] == ele) {  // fixed variable name
            return true;
        }
    }
    return false;
}

int main()
{
    int key;
    cout << "Enter key element to find: ";
    cin >> key;

    int a[10] = {1, 5, -2, -1, 6, 7, 9, 3, 4, 0};

    bool found = searchele(a, 10, key); // fixed function call & variable usage

    if(found) {
        cout << "Element " << key << " is present in array.\n";
    }
    else {
        cout << "Element " << key << " not found in array.\n";
    }

    return 0;
}
*/