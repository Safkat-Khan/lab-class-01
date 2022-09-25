#include<iostream>
using namespace std;

int main(){
int n;
    cout<<"Enter the Array Size = ";
    cin >> n;
int arr[n];

for(int i = 0; i < n; i++){
    cout<<"Enter the Elements = ";
    cin >> arr[i];
}
int count_odd =0,count_even = 0;

for(int i = 0; i < n; i++){

    if(arr[i] % 2 == 1)
  count_odd++;

    else
  count_even++;
}
cout <<"Odd = " << count_odd<<endl;
cout <<"Even = " << count_even<<endl;
return 0;
}
