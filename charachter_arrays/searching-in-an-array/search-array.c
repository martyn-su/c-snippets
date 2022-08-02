/*customers provide ID number intending to withdraw money. If their balance is below 100, they are informed that withdraw is not possible. The bank has 12 customers and 12 accounts to accompany their IDs */

#include <stdio.h>
int main()
{
	int ctr; // Loop counter
	int idSearch; // Customer to look for (the key)
	int found = 0; // Will be 1 (true) if customer is found

	// Defines the 10 elements in the two parallel arrays
	int custID[12] = {313, 453, 502, 101, 892,475, 792, 912, 343, 633, 122, 333};
	float custBal[12] = {0.00, 45.43, 71.23, 301.56, 9.08,192.41, 389.00, 229.67, 18.31, 59.54, 22.44, 555.7};
	
	/* Interact with the user looking for a balance. */
	printf("\n\n*** Bank Balance Lookup ***\n");
	printf("What customer number do you need to check? ");
	scanf(" %d", &idSearch);
	
	/* Search to see that the customer ID exists in the array */
	for (ctr=0; ctr<12; ctr++)
		{
			if (idSearch == custID[ctr])
			{
				found = 1;
				break;
			}
		}
	if (found)
		{
			if (custBal[ctr] < 100.00)
				{
					printf("\n** That customer's balance is $%.2f.\n", custBal[ctr]);
					printf(" No withdrawal possible. Balance too low \n");
				}
			else
				{
					printf("\n** The customer's balance is enough for a withdraw!\n");
				}
		}
	else
		{
			printf("** You must have typed an incorrect customer ID.");
			printf("\n ID %d was not found in list.\n", idSearch);
		}
	return(0);
}