#include<iostream>
using namespace std;


void pad_left(char *a, int n){
int lenght=0;
while(a[lenght] != '\0'){
    lenght++;
}
if(lenght<n){
int ktr= n-lenght;
 for(int i=lenght;i>=0;i-- ){
    a[i+ktr]=a[i];}
    for(int i=0;i<ktr;i++){
    a[i]=' ';
 }
}
}
int main(){
int n;
cin>>n;
char a[]="23iyr";
pad_left(a,n);
cout<<a;

}
