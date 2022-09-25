#include <iostream>
using namespace std;


int OddOrEven(int num){

 if(num%2!=0){
    cout<<"This is a Odd Number"<<endl;
    }
 else{
    cout<<"This is a Even Number"<<endl;
    }
}

int Isprime(int num){

   int num2,flag=0,i;

       num2 = num/2;

for(i=2;i<=num2;i++){

        if (num%i==0){

    cout<<"It is not a prime number"<<endl;

    flag=1;
        break;
}
}
if(flag==0){

    cout<<"This is a prime number"<<endl;
}
 }

int factorial(int num){

    long factorial = 1.0;

        for(int i = 1; i <= num; ++i) {
            factorial *= i;
        }
        cout << "Factorial of " << num << " = " << factorial;
    }





int main(){
    int in,num;
    cout<<"Enter Your Dream Positive integer Number = " ;
cin>>in;
num=in;

OddOrEven(in);
Isprime(in);
factorial(in);





    return 0;
}


