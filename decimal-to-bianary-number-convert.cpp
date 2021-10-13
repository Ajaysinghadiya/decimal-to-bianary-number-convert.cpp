#include <iostream>//header
using namespace std;//standard

int main()//eecution begins from here
{
    int n, num[30], i;//declaring some variables
    cout << "enter an integer" << endl;//printing a line
    cin >> n;//taking input in n vaiable
    for (i = 0; n > 0; i++)//here the 1st loop begins,this loop is to store the values in num[i]
    {
        num[i] = n % 2;//1st storing the remaindar in the array
        n = n / 2;//then using the concept of bianary system
    }
    cout << "the number from decimal to bianary is: ";
    for (i = i - 1; i >= 0; i--)//this loop is to revese the values of array that we have stored in the num[i]
    {
        cout << num[i];//printing that array in reverse order
    }
    cout << endl;//moving to the next line

    return 0;
}
