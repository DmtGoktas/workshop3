//const double GRAMS_IN_LBS = 453.5924;
 
#include <stdio.h>

int main(int argc, char **argv)
{
	const double GRAMS_IN_LBS = 453.5924;
	char type1,type2, type3;
	char grindSize1, grindSize2, grindSize3;
	int bagWeight1, bagWeight2, bagWeight3;
	char cream1, cream2,cream3;
	float temp1, temp2,temp3;
	char cream4,cream5;
	char streng1, streng2;
	int serv1,serv2;
	char maker1, maker2;
	
	
	printf("Take a Break - Coffee Shop\n");
	printf("==========================\n\n");
	
	printf("Enter the coffee product information being sold today...\n\n");
	
	printf("COFFEE-1...\n");
	printf("Type ([L]ight,[B]lend): ");
	scanf("%s",&type1);
	printf("Grind size ([C]ourse,[F]ine): ");
	scanf("%s",&grindSize1);
	printf("Bag weight (g): ");
	scanf("%d",&bagWeight1);
	printf("Best served with cream ([Yes],[N]o):");
	scanf("%s",&cream1);
	printf("Ideal serving tempeture (Celsius): ");
	scanf("%f",&temp1);
	
	printf("\nCOFFEE-2...\n");
	printf("Type ([L]ight,[B]lend): ");
	scanf("%s",&type2);
	printf("Grind size ([C]ourse,[F]ine): ");
	scanf("%s",&grindSize2);	
	printf("Bag weight (g): ");
	scanf("%d",&bagWeight2);
	printf("Best served with cream ([Yes],[N]o): ");
	scanf("%s",&cream2);
	printf("Ideal serving tempeture (Celsius): ");
	scanf("%f",&temp2);
	
	printf("\nCOFFEE-3...\n");
	printf("Type ([L]ight,[B]lend): ");
	scanf("%s",&type3);
	printf("Grind size ([C]ourse,[F]ine):");
	scanf("%s",&grindSize3);
	printf("Bag weight (g): ");
	scanf("%d",&bagWeight3);
	printf("Best served with cream ([Yes],[N]o):");
	scanf("%s",&cream3);
	printf("Ideal serving tempeture (Celsius):");
	scanf("%f",&temp3);
	printf("\n");
	
	printf("---+---------------+---------------+---------------+-------+---------------\n");
	printf("   |     Coffee    |     Coffee    |    Packaged   |  Best |  Serving \n");
	printf("   |      Type     |  Grinde Size  |   Bag Weight  | Served|  Temperature \n");
	printf("   +---------------+---------------+---------------+  With +---------------\n");
	printf("ID |Light | Blend| Course| Fine| (G)   | Lbs    | Cream | (C) |(F) \n");
	printf("---+---------------+---------------+---------------+-------+---------------\n");

    printf(" 1 |   %d  |  %d   |   %d   |  %d  | %4d  | %6.3lf |   %d  |%5.1lf| %5.1lf\n",((type1 == 'L')||(type1=='l')),((type1=='B')||(type1=='b')),((grindSize1=='C')||(grindSize1=='c')),((grindSize1=='F')||(grindSize1=='f')),bagWeight1,(bagWeight1/GRAMS_IN_LBS),(cream1=='Y'||cream1 == 'y'),temp1,((temp1 * 1.8) + 32.0));
	printf(" 2 |   %d  |  %d   |   %d   |  %d  | %4d  | %6.3lf |   %d  |%5.1lf| %5.1lf\n",((type2 == 'L')||(type2=='l')),((type2=='B')||(type2=='b')),((grindSize2=='C')||(grindSize2=='c')),((grindSize2=='F')||(grindSize1=='f')),bagWeight2,(bagWeight2/GRAMS_IN_LBS),(cream2=='Y'||cream1 == 'y'),temp2,((temp2 * 1.8) + 32.0));	
	printf(" 3 |   %d  |  %d   |   %d   |  %d  | %4d  | %6.3lf |   %d  |%5.1lf| %5.1lf\n",((type3 == 'L')||(type3=='l')),((type3=='B')||(type3=='b')),((grindSize3=='C')||(grindSize3=='c')),((grindSize3=='F')||(grindSize3=='f')),bagWeight3,(bagWeight3/GRAMS_IN_LBS),(cream3=='Y'||cream1 == 'y'),temp3,((temp3 * 1.8) + 32.0));

	printf("Enter how you like your coffee and the coffee maker equipment you use...\n\n");

	printf("Coffee strength ([M]ild,[Rich]): ");
	scanf("%s",&streng1);
	printf("Do you like your coffee with cream ([Y]es,[N]o):");
	scanf("%s",&cream4);
	printf("Typical number of daily servings: ");
	scanf("%d",&serv1);
	printf("Maker([R]esidential,[C]ommercial):");
	scanf("%s",&maker1);
	
	
	printf("\nThe below table shows how your preferences align to tha available products:\n\n");
	
	printf("---+---------------+---------------+---------------+-------+---------------\n");
	printf("   |     Coffee    |     Coffee    |    Packaged   | With  |  Serving \n");
	printf("   |      Type     |  Grinde Size  |   Bag Weight  | Cream |  Temperature \n");
	printf("   +---------------+---------------+---------------+-------+---------------\n");
	//~ printf(" 1 |   %d          |       %d      |     %d        |    %d | %d \n",);
	//~ printf(" 2 |   %d          |       %d      |     %d        |    %d | %d \n",);
	//~ printf(" 3 |   %d          |       %d      |     %d        |    %d | %d \n",);
	
	
	
	printf("Coffee strength ([M]ild,[Rich]): ");
	scanf("%s",&streng2);
	printf("Do you like your coffee with cream ([Y]es,[N]o):");
	scanf("%s",&cream5);
	printf("Typical number of daily servings: ");
	scanf("%d",&serv2);
	printf("Maker([R]esidential,[C]ommercial):");
	scanf("%s",&maker2);
	
	
	printf("\nThe below table shows how your preferences align to tha available products:\n\n");
	
	printf("---+---------------+---------------+---------------+-------+---------------\n");
	printf("   |     Coffee    |     Coffee    |    Packaged   | With  |  Serving \n");
	printf("   |      Type     |  Grinde Size  |   Bag Weight  | Cream |  Temperature \n");
	printf("   +---------------+---------------+---------------+-------+---------------\n");
	//~ printf(" 1 |   %d          |       %d      |     %d        |    %d | %d \n",);
	//~ printf(" 2 |   %d          |       %d      |     %d        |    %d | %d \n",);
	//~ printf(" 3 |   %d          |       %d      |     %d        |    %d | %d \n",);

	printf("\nHope you found a product that suits your likes!\n\n");
	
	return 0;
}
