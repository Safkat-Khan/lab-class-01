#include<iostream>
using namespace std;
int main(){
  int year;
  cout<<"Enter Your Year = ";
    cin>>year;
    if(year%4 == 0 && year%400 == 0 ){
            cout<<"It is a leap Year"<<endl;
    }
    else if(year%100 == 0){
        cout<<"It is not leap year"<<endl;
    }
    else{
        cout<<"It is not leap year"<<endl;
    }

return 0;
}
