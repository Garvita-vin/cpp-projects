#include <iostream>
using namespace std;

int main() {
    
    float a,b;
    char op;
    cout<<"Enter 1st number:";
    cin>>a;
    cout<<"Enter operator:";
    cin>>b;
    cout<<"Enter 2nd number:";
    cin>>b;
    (op=='+')?cout<<"result="<<(a+b):
    (op=='-')?cout<<"result="<<(a-b):
     (op=='*')?cout<<"result="<<(a*b):
    (op=='/')? (b!=0? cout<<"result="<<(a/b) "cout<"<error divisible by zero": );
    
        cout << "Invalid opeartor";
      return 0;
}
