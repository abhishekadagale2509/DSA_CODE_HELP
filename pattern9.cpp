#include<iostream>
using namespace std;
 int main()
 {
    int n;
    cin>>n;
    int i=1;
  
    while(i<=n){
         int val=i;
        int j=1;
        while(j<=i){
            cout<<val;
              val=val+1;
            j=j+1;
           

        }cout<<endl;
       
        i=i+1;
        

    }
 }
 /*5
1
23
345
4567
56789*/