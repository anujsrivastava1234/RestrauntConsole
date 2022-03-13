#include <iostream>
using namespace std;

int main()
{
  int order, no_deals;
  cout << "\t\t\t\t|*------------------------MENU----------------------------*|" << endl;
  cout << endl;

  cout << "\t\t\t\t1)\tChicken Briyani -----------------------------------$2.5 only." << endl;
  cout << "\t\t\t\t2)\tChciken Polao   -----------------------------------$1.5 only." << endl;
  cout << "\t\t\t\t3)\tChinese Rice    -----------------------------------$2.5 only." << endl;
  cout << "\t\t\t\t4)\tChicken Burger  -----------------------------------$1 only." << endl;
  cout << "\t\t\t\t5)\tNawabi Pizza    -----------------------------------$4.5 only." << endl;
  cout << "\t\t\t\t6)\t2.5 Litre Coke  -----------------------------------$1.75 only." << endl;

  cout << endl;
  cout << "Please select the order number -> ";
  cin >> order;

  cout << "Please enter the number of deals -> ";
  cin >> no_deals;

  cout << endl;
  do
  {

  } while (order != 0) switch (order)
  {
  case 1:
    cout << "Order : Chicken Biryani." << endl;
    cout << "Number of deals : " << no_deals << endl;
    cout << "Price of each deal : $2 only" << endl;
    cout << "Totla Price : "
         << "$" << 2 * no_deals << " "
         << "only." << endl;
    cout << endl;
    cout << "---------------THANK YOU FOR COMING-----------------" << endl;
    break;

  case 2:
    cout << "Order : Chicken Palao." << endl;
    cout << "Number of deals : " << no_deals << endl;
    cout << "Price of each deal : $1.5 only" << endl;
    cout << "Totla Price : "
         << "$" << 1.5 * no_deals << " "
         << "only." << endl;
    cout << endl;
    cout << "---------------THANK YOU FOR COMING-----------------" << endl;
    break;

  case 3:
    cout << "Order : Chinese Rice." << endl;
    cout << "Number of deals : " << no_deals << endl;
    cout << "Price of each deal : $2.5 only" << endl;
    cout << "Totla Price : "
         << "$" << 2.5 * no_deals << " "
         << "only." << endl;
    cout << endl;
    cout << "---------------THANK YOU FOR COMING-----------------" << endl;
    break;

  case 4:
    cout << "Order : Chicken Burger." << endl;
    cout << "Number of deals : " << no_deals << endl;
    cout << "Price of each deal : $1 only" << endl;
    cout << "Totla Price : "
         << "$" << 1 * no_deals << " "
         << "only." << endl;
    cout << endl;
    cout << "---------------THANK YOU FOR COMING-----------------" << endl;
    break;

  case 5:
    cout << "Order : Nawabi Pizza." << endl;
    cout << "Number of deals : " << no_deals << endl;
    cout << "Price of each deal : $4.5 only" << endl;
    cout << "Totla Price : "
         << "$" << 4.5 * no_deals << " "
         << "only." << endl;
    cout << endl;
    cout << "---------------THANK YOU FOR COMING-----------------" << endl;
    break;

  case 6:
    cout << "Order : 2.5 Litre Coke." << endl;
    cout << "Number of deals : " << no_deals << endl;
    cout << "Price of each deal : $1.75 only" << endl;
    cout << "Totla Price : "
         << "$" << 2 * no_deals << " "
         << "only." << endl;
    cout << endl;
    cout << "---------------THANK YOU FOR COMING-----------------" << endl;
    break;
  }

  return 0;
}