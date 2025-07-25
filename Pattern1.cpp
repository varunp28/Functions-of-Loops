#include <iostream>
using namespace std;

int main(){
    int i,j;
    int n=1;
    for(i=5;i>=n;i--){
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

//Output:
//*****
//****
//***
//**
//*
