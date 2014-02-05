//personableDiscountedItemSalesCalculator.cpp - Displays a personable output of the total cost of a discounted purchase
//Created by Preston Bernstein on 2/3/2014

#include <iostream>
#include <string>

using namespace std;

int main()
{
	//declare variables and named constants
	string firstName = "";
	string itemName = "";
	int timeCustomerHasLivedInCommunity = 0;
	int amountPurchasing = 0;
	double originalItemPrice = 0.0;
	double discountOffOfOneItem = 0.0;
	double discountedPriceOfOneItem = 0.0;
	double totalCost = 0.0;
	const double DISCOUNT_RATE = 0.35;

	//enter the customer's name
	cout << "Hello! Thank you for coming to our store. If you would be so kind, let's begin the transaction by having you answer a couple of questions. To start, what's your first name? ";
	cin >> firstName;

	//enter the time the customer has lived in the community
	cout << "Excellent! Next, how many years have you lived in this community?";
	cin >> timeCustomerHasLivedInCommunity;

	//enter the item's name
	cout << "Ah, I see. Now, what item from the advertisement do you want to purchase today?";
	cin >> itemName;

	//enter the amount of the item the customer is purchasing
	cout << "Certainly. How many would you like to purchase?";
	cin >> amountPurchasing;

	// enter in the original item's price as found in the newspaper advertisement
	cout << "Absolutely. Would you please tell us the price of the item in the advertisement you saw?";
	cin >> originalItemPrice;

	//calculate the discount off of one item, then the discounted price of one of the items the customer is purchasing
	discountOffOfOneItem = originalItemPrice * DISCOUNT_RATE;
	discountedPriceOfOneItem = originalItemPrice - discountOffOfOneItem;

	//calculate the total cost of all the items together
	totalCost = discountedPriceOfOneItem * amountPurchasing;

	//display all of the user's information, the discounted price, as well as the total cost of all the items together
	cout << "Well " << firstName << ", you asked for the new price for a " << itemName << ". With the 35% discount today, our " << itemName << " has been marked down from the advertised price of $" << originalItemPrice << " down to a new price of $" << discountedPriceOfOneItem << ". So, since you want to buy " << amountPurchasing << " of these, your total cost for them comes to $" << totalCost << ". Since you have lived around here for " << timeCustomerHasLivedInCommunity << " years, I'm surprised I haven't met you before, but I'm awfully glad to count you as a valued customer. Thanks for stopping by and hope to see you again soon." << endl;

	system("pause");
	return 0;
}	//end of main function