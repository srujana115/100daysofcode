#include <iostream>
using namespace std;
void half(int n){
     for(int i=0;i<n;i++){
          for(int j=0;j<=i;j++){
               cout<<"*";
          }
          cout<<endl;
     }
}
void half1(int n){
     for(int i=0;i<n;i++){
          for(int j=0;j<n-i-1;j++){
               cout<<"*";
          }
          cout<<endl;
     }
}
int main()
{
    int n=5;
    half(n);
    half1(n);
    return 0;
}
