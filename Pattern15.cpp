#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Number : ";
    cin>>n;

    int i=1;
    while(i<=n){
        int j = 1;
        int val = i;
        while(j<=i){
            char ch = 'A'+val-1;
            cout<<ch;
            val ++;
            j++;
        }
        i++;
        cout<<endl;
    }
}