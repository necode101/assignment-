
#include<iostream>
using namespace std;

void is_palindrome(char *a){
int n=0;
char tem;
while(a[n]!= '\0'){
    n++;
}
for(int i=0;i<n/2;i++){
    if(a[i]!=a[n-1-i]){
        cout<<"false";
        return;
    }

} cout<<"true";

}
int main(){
char a[]="abcdcba";
is_palindrome(a);
}
