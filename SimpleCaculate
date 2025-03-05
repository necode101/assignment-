#include<iostream>
#include<cmath>
using namespace std;
string SimpleCalculate(int num1, char o, int num2){
    switch (o)
    {
    case '+':
        return (num1+num2);
        break;
    case '-':
    return (num1-num2);
    break;
    case '*':
    return (num1*num2);
    break;
    case '/':
    if(num2==0){
        return "invalid";
    } 
        return (num1/num2);
    break;
    default:
    return (num1+num2);
        break;
    }
}
int main(){
int a,b;
char o;
cin>>a>>o>>b;
cout<<SimpleCalculate(a,o,b);
return 0;
}


