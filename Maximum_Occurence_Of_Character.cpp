char getMaxOccurence(String s)
{
    int arr[26]={0};
    for(int i=0;i<s.length();i++)
    {
        char ch=s[i];
        int number=0;
//lowercase
        if(ch>='a'&&ch<='z')
        {
            number=ch-'a';

        }
        //uppercase
        else{
            number=ch-'A';

        }
        arr[number]++;


    }
    int maxi=-1,ans=0;
    for(int i=0;i<26;i++)
    {
        if(maxi<arr[i]){
            ans=i;
            maxi=arr[i];
        }
    

    }
    char finalAns='a'+ans;
    return finalAns;


}
int main()
{
    string s;
    cin>>s;
    cout<<getMaxOccurence(s);

}
/*#include <iostream>
#include <string>
using namespace std;

char getMaxOccurence(string s) {
    int arr[26] = {0};

    // Count frequency of each letter (case-insensitive)
    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];
        int number = -1;

        if (ch >= 'a' && ch <= 'z') {
            number = ch - 'a';
        } 
        else if (ch >= 'A' && ch <= 'Z') {
            number = ch - 'A';
        }

        if (number != -1) {
            arr[number]++;
        }
    }

    // Find maximum occurrence
    int maxi = -1, ans = 0;
    for (int i = 0; i < 26; i++) {
        if (maxi < arr[i]) {
            ans = i;
            maxi = arr[i];
        }
    }

    char finalAns = 'a' + ans; // always returns lowercase
    return finalAns;
}

int main() {
    string s;
    cin >> s;
    cout << getMaxOccurence(s);
    return 0;
}
*/