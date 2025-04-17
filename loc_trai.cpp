
#include<iostream>
using namespace std;

void trim_left(char *a){

int de=0;
while(a[de]==' '){
    de++;
}
int j=0;
while(a[de]!='\0'){
    a[j]=a[de];
    j++;
    de++;
} a[j]='\0';
}
int main(){
char a[]="   dfhwfkvndbk";
trim_left(a);
cout<<a;


}

