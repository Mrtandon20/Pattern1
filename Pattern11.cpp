#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Number : ";
    cin>>n;

    int i=1;
    while(i<=n){
        int j = i;
        while(j>=1){
            cout<<j;
            j--;
        }
        i++;
        cout<<endl;
    }
}