#include <iostream>
using namespace std;
int main()
{
    int n=5;
    for(int i=0;i<n;i++){
     char a='A';
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<i;j++){
          cout<<a++;
        }
        for(int j=0;j<=i;j++){
            cout<<a--;
        }

        cout<<endl;
    }
    return 0;
}