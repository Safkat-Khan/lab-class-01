#include <iostream>
using namespace std;

int main()
{
     int n,num,dig,rev = 0;

     cout << "Enter number: ";
     cin >> num;

     n = num;

     do
     {
         dig = num % 10;
         rev = (rev * 10) + dig;
         num = num / 10;
     } while (num != 0);

     if (n == rev)
         cout << "The number is a palindrome.";
     else
         cout << "The number is not a palindrome.";

    return 0;
}
