#include<iostream>
using namespace std;
int main(){
int num,num2,flag=0,i;
cout<<"Enter your integer number = ";
cin>>num;
num2 = num/2;
for(i=2;i<=num2;i++){
        if (num%i==0){
    cout<<"It is not a prime number";
    flag=1;
        break;
}
}
if(flag==0){
    cout<<"This is a prime number";
}
return 0;
}
