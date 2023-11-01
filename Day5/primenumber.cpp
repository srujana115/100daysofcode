#include<iostream>
using namespace std;
int main(){
     int n=7;
      int c=0;
        for(int i=2;i<=n;i++){
            if(n%i==0){
                c=c+1;
            }
        }
        if(c==1){
               cout<<true;
            }
            else{
                cout<<false;
            }
     return 0;
}