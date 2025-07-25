#include <iostream>
using namespace std;
int main() {
    int i,j;
    int n=5;
    char ch='a';
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}



//OUTPUT:
//a 
//b c 
//d e f 
//g h i j 
//k l m n o 
