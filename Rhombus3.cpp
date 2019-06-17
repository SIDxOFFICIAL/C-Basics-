#include<iostream>
using namespace std;

int main(){
    int n;cin>>n;
    int i=1;
    int stars=1, spaces=n-1;
    while (i<=2*n-1){
        ///multiple spaces
        int j=1;
        while (j<=spaces){
            cout<<" ";
            j++;
        }
        ///multiple stars
        int k=1;
        while (k<=stars){
            cout<<"*";
            k++;
        }
        ///next line
        cout<<endl;
        if (i<n) {
            stars=stars+2;
            spaces=spaces-1;
        } else {
            stars=stars-2;
            spaces=spaces+1;
        }
        i=i+1;
    }
}
