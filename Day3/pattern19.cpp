#include <iostream>
using namespace std;
void upper(int n){
     for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        for(int j=0;j<(i*2);j++){
            cout<<" ";
        }
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void lower(int n){
     for(int i=0;i<n;i++){
       for(int j=0;j<=i;j++){
           cout<<"*";
       }
       for(int j=0;j<(n-i-1)*2;j++){
           cout<<" ";
       }
       for(int j=0;j<=i;j++){
           cout<<"*";
       }
       cout<<endl;
   }
}
int main() {
    int n = 5; 
    upper(n);
    lower(n);
    return 0;
}