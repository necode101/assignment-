
#include<iostream>
using namespace std;

void trim_right(char *a){

int de=0;
while(a[de]!= '\0'){
    de++;
}
int j=de-1;
while(a[j]==' ' and j>=0){
    j--;
} a[j+1]='\0';
}
int main(){
char a[]="akfndwkf    ";
trim_right(a);
cout<<a;


}
