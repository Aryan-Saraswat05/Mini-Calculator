#include <iostream>
using namespace std;

int main(){
    int a,b,result;
    char op;
    
    cout<<"Enter first operand"<<endl;
    cin>>a;
    cout<<"Enter second operand"<<endl;
    cin>>b;
    cout<<"Enter operation to be performed"<<endl;
    cin>>op;
    
    switch(op){
        case '+':
                cout<<a+b<<endl;
                break;
        case '-' :
                cout<<a-b<<endl;
                break;
        case '*' :
                cout<<a*b<<endl;
                break;
        case '/' :
                cout<<a/b<<endl;
                break;
    }
    return 0;
}