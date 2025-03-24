#include<iostream>
using namespace std;

void reverse_xau(char *a){
    if(*a==NULL) return;
    char temt=*a;
    a++;
   reverse_xau(a);
   cout<<temt;
}
int main(){
char a[]="abcdehgjh";
reverse_xau(a);

return 0;
}
