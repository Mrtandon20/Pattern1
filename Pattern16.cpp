#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Number : ";
    cin>>n;

    int i=n;
    while(i>=1){
        int j = i;
        while(j<=n){
            char ch = 'A'+j-1;
            cout<<ch;
            j++;
        }
        i--;
        cout<<endl;
    }
}