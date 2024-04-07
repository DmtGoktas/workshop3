

#include <stdio.h>

int main(int argc, char **argv)
{
	const double test_value = 330.99;
	const int productID_1 = 111, productID_2 = 222, productID_3 = 111;
	const char tax1 = 'Y', tax2 = 'N', tax3 = 'N';
	const float price1 =111.49 , price2 = 222.99, price3 = 334.49;
	double average;
	
	printf("Product-1 (ID:%d)\n", productID_1);
	printf("Taxed: %c\n", tax1);
	printf("Price: $%.4f\n\n", price1);
	
	printf("Product-1 (ID:%d)\n", productID_2);
	printf("Taxed: %c\n", tax2);
	printf("Price: $%.4f\n\n", price2);
	
	printf("Product-1 (ID:%d)\n", productID_3);
	printf("Taxed: %c\n", tax3);
	printf("Price: $%.4f\n\n", price3);
	
	average = ((price1+price2+price3)/3);
	
	printf("The average of all prices is: $%5.4lf\n\n",average);
	
	printf("About Relational an logical Expressions!\n");
	printf("========================================\n");
	printf("1. These expressions evaluate to TRUE or FALSE\n");
	printf("2. FALSE: is always represented by integer value 0\n");
	printf("3. TRUE : is represented by any integer value other than 0\n\n");
	
	
	printf("Some Data Analysis...\n");
	printf("=====================\n");
	printf("1. Is product 1 taxable= ->%d \n\n", (tax1=='Y'));
	
	printf("2. Are products 2 and 3 both NOT taxable (N)? ->%d \n\n", (tax2 == 'N' && tax3 == 'N'));
	
	printf("3. Is product 3 less than test_value (%f) ->%d \n\n",test_value, (price3 < test_value));
	
	printf("4. Is the price of product 3 more than both product 1 and 2 combıned ?-> %d \n\n ",(price3 > (price1+price2)));
	
	printf("5. Is the price of product 1 equal to or more than the price difference of product 3 LESS product 2? ->%d (price difference: $%5.2f)\n\n",(price1 >= (price3 - price2)),(price3 - price2));
	
	printf("6. Is the price of product 2 equal to or more than the average price? ->%d \n\n",(price2 >= average));
	
	printf("7. Based on product ID, 1 is unique ->%d \n\n",(productID_1 != productID_2) && (productID_1 != productID_3));
	
	printf("8. Based on product ID 2 is unique ->%d \n\n",(productID_2 != productID_1) && (productID_2 != productID_3));
	
	printf("9. Based on product ID 3 is unique ->%d \n\n",(productID_3 != productID_1) && (productID_3 != productID_2));

	
	return 0;
}

