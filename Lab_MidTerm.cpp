#include<iostream>
using namespace std;
int main()
{
	//Initialitaion
	int total_stock, stock_min, remaining_stock, restock_amount, sale;
	
	//Get Data From User
	cout << "Enter Total Quanitity of Stock: ";
	cin >> total_stock;
	cout << "Enter Minimum Amount of Stock: ";
	cin >> stock_min;
	
	//Calculation
	remaining_stock = total_stock;
	
	//Loop to Keep Program Running
	while (remaining_stock > 0)
	{
		//Get Sales Data
		cout << "Enter Number of Items Sold: ";
		cin >> sale;
		remaining_stock = remaining_stock - sale;
		cout << "\nRemaining Stock is " << remaining_stock << endl;
		
		//Restock Process
		if (remaining_stock < stock_min)
		{
			while (remaining_stock < stock_min)
			{
				cout << "\nStock Below Minimum Quantitiy!" << endl;
				cout << "Enter Restock Amount : ";
				cin >> restock_amount;
				remaining_stock += restock_amount;
				cout << "\nRemaining Stock is " << remaining_stock << endl;
			}
		}
		
		//Show Remaining Stock
		cout << "\nRemaining Stock is " << remaining_stock << endl;
	}

	return 0;
}