#include <iostream>
using namespace std;

class Rectangle
{
public:
    double length;
    double width;

    double getArea()
    {
        return length * width;
    }
};

int main()
{
    Rectangle resultArea;

    cout << "Enter length: ";
    cin >> resultArea.length;

    cout << "Enter width: ";
    cin >> resultArea.width;

    cout << "Area = " << resultArea.getArea() << endl;

    return 0;
}

// -------------------------------------------------------------------

#include <iostream>
using namespace std;
class bankAccont{
    public:
    int accountnmber;
    double balance;
      
    BankAccount(int acc,double bal)
      {
        accountnmber = acc;
        balance = bal;
      }
      void deposit ( int amount)
      {
        balance = balance + amount;
      }

      void withdraw (double amount)
      {
        if (amount <= balance)
        {
            balance = balance - amount;
        }
        else 
        {
            cout<<"not enough monay"<<endl;
        }
      }
}
int main()
{
   Bankaccount acc1 ();

   acc1.deposit();
   acc1.withdraw();
   return 0 ;

}