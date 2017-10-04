#include <stdio.h>
#include <math.h>

void printApplicationTitle(){

    printf(" ___________________________________________________________________________ \n");
	printf("|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___| \n");
    printf("|_|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|_| \n");
    printf("||                                                                         || \n");
    printf("||  PPPPPPP    IIIIIIIII    ZZZZZZZZ    ZZZZZZZZ     AAAAA      _....._    ||\n");
	printf("||  PPPPPPPP   IIIIIIIII    ZZZZZZZZ    ZZZZZZZZ    AAA AAA   :`.-----.`:  ||\n");
	printf("||  PPP  PPPP     III           ZZZ         ZZZ    AAA   AAA   \\o  o  o /  ||\n");
	printf("||  PPP  PPP      III          ZZZ         ZZZ     AAA   AAA    \\ o  o /   ||\n");
	printf("||  PPPPPP        III         ZZZ         ZZZ      AAAAAAAAA     \\ o  /    ||\n");
	printf("||  PPP           III        ZZZ         ZZZ       AAAAAAAAA      \\  /     ||\n");
	printf("||  PPP        IIIIIIIII    ZZZZZZZZ    ZZZZZZZZ   AAA   AAA       \\/      ||\n");
	printf("||  PPP        IIIIIIIII    ZZZZZZZZ    ZZZZZZZZ   AAA   AAA               ||\n");
    printf("||                                                                         ||\n");
    printf("|___________________________________________________________________________| \n");
	printf("II   II   II   II   II   II   II   II    II   II   II   II   II   II   II  II \n");
    printf("II___II___II___II___II___II___II___II____II___II___II___II___II___II___II__II \n");
    printf("\n");
    printf("Press ENTER key to place an order:\n");
	getchar();

}

void printMenu(){

    printf("*-----------------------------------------------------*             \n");
    printf("|                                          Choice #   |    .--,--.  \n");
    printf("|      Pizza.......Small(12\")....$9.99        1       |    `.  ,.'  \n");
    printf("|                  Medium(14\")..$11.99        2       |     |___|   \n");
    printf("|                  Large(16\")...$14.99        3       |     :o o:   \n");
    printf("|      Breadsticks...............$2.99        4       |     | ^ |    \n");
    printf("|      Soda......................$1.99        5       |    _` ~ '_   \n");
    printf("|                                                     |  /'   ^   `\\ \n");
    printf("|      Complete order                         0       |             \n");
    printf("|                                                     |             \n");
    printf("*-----------------------------------------------------*             \n");
}

float takeOrder(int selection){
    float orderTotal = 0;
    float quantity = 0;

    float const SMALL_PIZZA_PRICE   = 9.99;
    float const MEDIUM_PIZZA_PRICE  = 11.99;
    float const LARGE_PIZZA_PRICE   = 14.99;
    float const BREADSTICKS_PRICE   = 2.99;
    float const SODA_PRICE          = 1.99;

    switch(selection){
        case 1: //Small pizza
            printf("\nHow many small pizzas would you like to order\n\n");
            scanf("%d", &quantity);
            printf("%d %f\n", quantity, SMALL_PIZZA_PRICE);
            printf("%d %f\n", quantity, MEDIUM_PIZZA_PRICE);
            printf("%d %f\n", quantity, LARGE_PIZZA_PRICE);
            printf("%d %f\n", quantity, SODA_PRICE);
            orderTotal += quantity*SMALL_PIZZA_PRICE;
            break;
        case 2: //Medium pizza
            printf("\nHow many medium pizzas would you like to order\n\n");
            scanf("%d", &quantity);
            orderTotal += quantity*MEDIUM_PIZZA_PRICE;
            break;
        case 3: //Large pizza
            printf("\nHow many large pizzas would you like to order\n\n");
            scanf("%d", &quantity);
            orderTotal += quantity*LARGE_PIZZA_PRICE;
            break;
        case 4: //Breadsticks
            printf("\nHow many orders of breadsticks would you like to order\n\n");
            scanf("%d", &quantity);
            orderTotal += quantity*BREADSTICKS_PRICE;
            break;
        case 5: //Soda
            printf("\nHow many sodas would you like to order\n\n");
            scanf("%d", &quantity);
            orderTotal += quantity*SODA_PRICE;
            break;
        default:
            printf("\nPlease select a valid menu item\n\n");
            break;
    }

    return orderTotal;
}

float calculateTax(float total){
    float totalWithTax = 0;
    totalWithTax = total*1.07;

    return totalWithTax;
}


void printReceipt(float total, float totalWithTax){
    printf("Thank you for your order!\n\n");
    printf("Subtotal: $%.2f\n", total);
    printf("Total:    $%.2f\n", totalWithTax);
}

int main(){

	int menuSelection = -1;
	float total = 0;

	printApplicationTitle();

	while(menuSelection != 0){ //Close on zero entered
        printMenu();                                    //Display menu with options
        printf("\nWhat would you like to order?\n\n");  //Prompt for order
        scanf("%d", &menuSelection);                    //Read order
        total += takeOrder(menuSelection);              //Use order selection to get more order details and price

        //menuSelection = 0;///TEST

	}
	printReceipt(total, calculateTax(total));

	return 0;
}



//		   _....._
//       _.:`.--|--.`:._
//     .: .'\o  | o /'. '.
//    // '.  \ o|  /  o '.\
//   //'._o'. \ |o/ o_.-'o\\
//   || o '-.'.\|/.-' o   ||
//   ||--o--o-->|<o-----o-||
//   \\  o _.-'/|\'-._o  o//
//    \\.-'  o/ |o\ o '-.//
//     '.'.o / o|  \ o.'.'
//       `-:/.__|__o\:-'
//          `"--=--"`
//
//           _....._
//         :`.-----.`:
//          \o  o o /
//           \ o  o/
//            \ o /
//             \o/
//
//  .--,--.
//  `.  ,.'
//   |___|
//   :o o:
//  _`~^~'_
///'   ^   `\
//CHEF A LA GOATEE
//by beitsu
//AVEC MOUSTACHE
//by dcau
