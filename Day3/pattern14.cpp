#include <iostream>
#include<string>
using namespace std;
int main()
{
   int n=5;
   for(int i=1;i<=n;i++){
       char a='A';
       for(int j=1;j<=i;j++){
           cout<<a;
           a++;
       } 
       cout<<endl;
   }
    return 0;
}