#include<iostream>
using namespace std;

void truncate(char *a, int n){
int length=0;
while(a[length]!='\0'){
    length++;
    }
    if(length>n){
        a[n]='\0';
    }

}
int main(){
int n;
cin>>n;
char a[]="djvhdvk";
truncate(a,n);
cout<<a;
}
