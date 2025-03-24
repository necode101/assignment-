#include<iostream>
using namespace std;


void pad_right(char *a, int n){
int lenght=0;
while(a[lenght] != '\0'){
    lenght++;
}
while(lenght<n){
    a[lenght]=' ';
    lenght++;
} a[lenght]='\0';
}
int main(){
int n;
cin >>n;
char a[]="sjf";
pad_right(a, n);
cout<<"/"<<a<<"/";
}
