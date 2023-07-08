#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void breakfast();
void lunch();
void dinner();
void mainmenu();
void exit();
void display();
void delet();


    int choice, qty;
    float price, amt, netAmount, cash, change;
    char addMore, username[20], eatopt;

main()
    {

        char choice = ' ';

  printf("              ==============================          \n");
  printf("                   AHANA FAST FOOD          \n ");
  printf("             ==============================          \n\n\n");

  printf("---------------------------------------------------------------\n");
  printf("\t\tEnter [A] -> Breakfast Menu\n");
  printf("---------------------------------------------------------------\n");
  printf("\t\tEnter [B] -> Lunch Menu\n");
  printf("---------------------------------------------------------------\n");
  printf("\t\tEnter [C] -> Dinner Menu\n");
  printf("---------------------------------------------------------------\n");
  printf("\t\tEnter [D] -> Display Bills\n");
  printf("---------------------------------------------------------------\n");
  printf("\t\tEnter [E] -> Delete Bills\n\n");
  printf("---------------------------------------------------------------\n\n\n");
  
  printf("              ==============================          \n");
  time_t t;   
  time(&t);
  printf("\t\t %s", ctime(&t));
  printf("              ==============================          \n\n");
  
   printf("\n\t      We would love to have your order : ");
  scanf("%c", &choice);

   system("cls");

   
				if (toupper(choice) == 'A')
              breakfast();
              
        else if (toupper(choice) == 'B')
              lunch();
              
        else if (toupper(choice) == 'C')
              dinner();
              
        else if (toupper(choice) == 'D'){
              display();
              printf("\n\t\tenter any key to go to the main menu: ");
              getch();
              main();}
              
        else if (toupper(choice) == 'E'){
              delet();
               printf("\n\t\tenter any key to go to the main menu: ");
              getch();
              main();}
              
        else if (toupper(choice) != 'A', 'B' , 'C' , 'D', 'E')       
		     {
               main();
            }    
    }      

void breakfast()
{

int id= 101;
int ne;
  int i, num;  
        system ("cls");
        char add[10];
  char choice = ' ';
  int qty = 0;
  int addMore = 0;

  printf("\t            ==============================          \n");
  printf("\t                    Breakfast Menu   \n");
  printf("\t            ==============================          \n\n");

  printf("\t   [1] Pancakes                           - Rs.100 \n");
  printf("\t-----------------------------------------------------\n");
  printf("\t   [2] Grilled Toasts                     - Rs.100 \n");
  printf("\t-----------------------------------------------------\n");
  printf("\t   [3] Paneer Samosa and Tea              - Rs.115 \n");
  printf("\t-----------------------------------------------------\n");
  printf("\t   [4] Paneer Chhole Bhature with Raita   - Rs.120 \n");
  printf("\t-----------------------------------------------------\n");
  printf("\t   [5] Suji Chhole Kulche with Butter     - Rs.110 \n");
  printf("\t-----------------------------------------------------\n");
  printf("\t   [6] Raj Kachori                        - Rs.90 \n");
  printf("\t-----------------------------------------------------\n");
  printf("\t   [7] Paneer Breadpakoda with Sabzi      - Rs.60 \n");
  printf("\t-----------------------------------------------------\n");
  printf("\t   [8] Sambar Vada And Idli               - Rs.100 \n");
  printf("\t-----------------------------------------------------\n");
  printf("\t   [9] Paneer Chhole Kulche               - Rs.100 \n");

  h:
  printf("\n\t What are your craving for ? : ");
    scanf("%d", &choice);

  switch(choice)
  {
               case 1: price = 100;
               break;
               case 2: price = 100;
               break;
               case 3: price = 115;
               break;
               case 4: price = 120;
               break;
               case 5: price = 110;
               break;
               case 6: price = 90;
               break;
               case 7: price = 60;
               break;
               case 8: price = 100;
               break;
               case 9: price = 100;
               break;
               default:
               printf("\n\tWe request you to enter a valid choice !");
               goto h;
  }
  
   printf("\n\tJust One ?  : ");
   scanf("%d", &qty);
   amt = price * qty;
   printf("\n\tTotal amount\t : %2.f\n", amt);

   netAmount = netAmount + amt;
   printf("\n\tYour total bill is : %2.f\n", netAmount);
   
   printf("\n\tWants to taste something else ? : (y/n)");
   
   addMore = getche();
    if(addMore == 'y' | addMore == 'Y')
    {
     breakfast();
    }
    else if(addMore == 'n' | addMore == 'N')

   if(cash < netAmount){
  
  s:
    printf("\n\t\t\t\t\t\t\t\t\t\tCASH TENDERED\t: ");
    scanf("%f", &cash);
    
   change = cash - netAmount;
   if(change>=0){

    printf("\tPlease enter your username & press enter for receipt : ");
  scanf("%s", &username);   
srand(time(0)); //seed the random number generator with the current time
                id = rand() % (10000 - 101 + 1) + 101; //generate a random number between 101 and 10000
  FILE *fp;
    fp = fopen("players.txt", "a");
    fprintf(fp, "%d,%d,%2.f,%2.f,%f,%f,%d,%s\n", choice, qty, amt,netAmount,cash,change,id,username);
    for (i = 1; i <= 10; i++)  
    
    fclose(fp);
    
  printf("\n\t Please select an option : \n");
  printf("\n\t [A] Take Away\n");
  printf("\n\t [B] Dine-In\n");
  printf("\n\t [C] Home Delivery\n");
  scanf("\n\t %c", &eatopt);
  
  if ( eatopt == 'A' | eatopt == 'a')
  {
  	printf("\tPlease enter your address: ");
  	scanf("%s",add);
  	
  	printf("\n||||||||||||||||||||||||||||||||||||||||||||||\n");
   printf("||                                          ||\n");
   printf("||                                          ||\n");
   printf("||=========THANK YOU FOR YOUR VISIT=========||\n");
   printf("||                                          ||\n");
   printf("||   ->  Reciept No : %d                  \n",id);
   printf("||   ->  Customer Name : %s                  \n",username);
   printf("||------------------------------------------||\n");
   printf("||   -> Total Bill : %f             \n",netAmount);
   printf("||------------------------------------------||\n");
   printf("||   -> Cash Tendered : %f          \n",cash);
   printf("||------------------------------------------||\n");
   printf("||   -> Change : %f                  \n",change);
   printf("||------------------------------------------||\n");
   printf("||          HOPE TO SEE YOU SOON            ||\n");	
   printf("||                                          ||\n");
   printf("||             ENJOY YOUR MEAL              ||\n");
   printf("||------------------------------------------||\n");
   printf("||                                          ||\n");
   time_t t;   
   time(&t);
   printf("\t   %s\n", ctime(&t));
   printf("||||||||||||||||||||||||||||||||||||||||||||||\n"); 
  }
  
  if ( eatopt == 'b' | eatopt == 'B')
  {
  	printf("\t Please enter your address: ");
  	scanf("%s",add);
  	
  	printf("\n||||||||||||||||||||||||||||||||||||||||||||||\n");
   printf("||                                          ||\n");
   printf("||                                          ||\n");
   printf("||=========THANK YOU FOR YOUR VISIT=========||\n");
   printf("||                                          ||\n");
   printf("||   ->  Reciept No : %d                  \n",id);
   printf("||   ->  Customer Name : %s                  \n",username);
   printf("||------------------------------------------||\n");
   printf("||   -> Total Bill : %f             \n",netAmount);
   printf("||------------------------------------------||\n");
   printf("||   -> Cash Tendered : %f          \n",cash);
   printf("||------------------------------------------||\n");
   printf("||   -> Change : %f                  \n",change);
   printf("||------------------------------------------||\n");
   printf("||          HOPE TO SEE YOU SOON            ||\n");	
   printf("||                                          ||\n");
   printf("||             ENJOY YOUR MEAL              ||\n");
   printf("||------------------------------------------||\n");
   printf("||                                          ||\n");
   time_t t;   
   time(&t);
   printf("\t   %s\n", ctime(&t));
   printf("||||||||||||||||||||||||||||||||||||||||||||||\n"); 
  }
  
  if ( eatopt == 'c' | eatopt == 'C')
  {
  	printf("\t Please enter your address: ");
  	scanf("%s",add);
  	
  	printf("\n||||||||||||||||||||||||||||||||||||||||||||||\n");
   printf("||                                          ||\n");
   printf("||                                          ||\n");
   printf("||=========THANK YOU FOR YOUR VISIT=========||\n");
   printf("||                                          ||\n");
   printf("||   ->  Reciept No : %d                  \n",id);
   printf("||   ->  Customer Name : %s                  \n",username);
   printf("||------------------------------------------||\n");
   printf("||   -> Total Bill : %f             \n",netAmount);
   printf("||------------------------------------------||\n");
   printf("||   -> Cash Tendered : %f          \n",cash);
   printf("||------------------------------------------||\n");
   printf("||   -> Change : %f                  \n",change);
   printf("||   -> Address : %s                  \n",add);
   printf("||------------------------------------------||\n");
   printf("||          HOPE TO SEE YOU SOON            ||\n");	
   printf("||                                          ||\n");
   printf("||             ENJOY YOUR MEAL              ||\n");
   printf("||------------------------------------------||\n");
   printf("||                                          ||\n");
   time_t t;   
   time(&t);
   printf("\t   %s\n", ctime(&t));
   printf("||||||||||||||||||||||||||||||||||||||||||||||\n"); 
  } 
   }
   else if(change<0)
   goto s;  
}
    }
    
    
      void lunch()
{
     
int id= 101;
int ne;
  int i, num;  
        system ("cls");
        char add[10];
  char choice = ' ';
  int qty = 0;
  int addMore = 0;
  
  printf("\t            ==============================          \n");
  printf("\t                    Lunch Menu   \n");
  printf("\t            ==============================          \n\n");

  printf("\t   [1] Lemon Fried Rice                           - Rs.150 \n");
  printf("\t-------------------------------------------------------------\n");
  printf("\t   [2] DELUXE Veg Thali                           - Rs.199 \n");
  printf("\t-------------------------------------------------------------\n");
  printf("\t   [3] Dal Makhni with Papad and Butter Naan      - Rs.110 \n");
  printf("\t-------------------------------------------------------------\n");
  printf("\t   [4] Veggie Sandwich                            - Rs.150 \n");
  printf("\t-------------------------------------------------------------\n");
  printf("\t   [5] Butter Chicken with 2 Lachha Paratha       - Rs.240 \n");
  printf("\t-------------------------------------------------------------\n");
  printf("\t   [6] Kadhai Paneer With Raita                   - Rs.180 \n");
  printf("\t-------------------------------------------------------------\n");
  printf("\t   [7] Aaloo Pyaaz Naan Thali                     - Rs.150 \n");
  printf("\t-------------------------------------------------------------\n");
  printf("\t   [8] Paneer Chur Chur Naan                      - Rs.200 \n");
  printf("\t-------------------------------------------------------------\n");
  printf("\t   [9] Missi Roti And Full Sarso Saag             - Rs.240 \n");

  h:
  printf("\n\t What are your craving for ? : ");
    scanf("%d", &choice);

   switch(choice)
  {
               case 1: price = 150;
               break;
               case 2: price = 199;
               break;
               case 3: price = 110;
               break;
               case 4: price = 150;
               break;
               case 5: price = 240;
               break;
               case 6: price = 180;
               break;
               case 7: price = 150;
               break;
               case 8: price = 200;
               break;
               case 9: price = 240;
               break;

               default:
               printf("\tWe request you to enter a valid choice !");
               goto h;
               
  }
  printf("\n\tJust One ? : ");
   scanf("%d", &qty);
   amt = price * qty;
   printf("\n\tTotal amount\t : %2.f\n", amt);

   netAmount = netAmount + amt;
   printf("\n\tYour total bill is : %2.f\n", netAmount);

   printf("\n\tWants to taste something else ? : (y/n)");
   
   addMore = getche();
    if(addMore == 'y')
    {
     lunch();
    }
    else if(addMore == 'n')

   if(cash < netAmount){
  
 s:
    printf("\n\t\t\t\t\t\t\t\t\t\tCASH TENDERED\t: ");
    scanf("%f", &cash);
    
   change = cash - netAmount;
   if(change>=0){

    printf("\tPlease enter your username & press enter for receipt : ");
  scanf("%s", &username);   
srand(time(0)); //seed the random number generator with the current time
                id = rand() % (10000 - 101 + 1) + 101; //generate a random number between 101 and 10000
  FILE *fp;
    fp = fopen("players.txt", "a");
    fprintf(fp, "%d,%d,%2.f,%2.f,%f,%f,%d,%s\n", choice, qty, amt,netAmount,cash,change,id,username);
    for (i = 1; i <= 10; i++)  
    
    fclose(fp);
    
  printf("\n\t Please select an option : \n");
  printf("\n\t [A] Take Away\n");
  printf("\n\t [B] Dine-In\n");
  printf("\n\t [C] Home Delivery\n");
  scanf("\n\t %c", &eatopt);
  
  if ( eatopt == 'A' | eatopt == 'a')
  {
  	printf("\t Please enter your address: ");
  	scanf("%s",add);
  	
  	printf("\n||||||||||||||||||||||||||||||||||||||||||||||\n");
   printf("||                                          ||\n");
   printf("||                                          ||\n");
   printf("||=========THANK YOU FOR YOUR VISIT=========||\n");
   printf("||                                          ||\n");
   printf("||   ->  Reciept No : %d                  \n",id);
   printf("||   ->  Customer Name : %s                  \n",username);
   printf("||------------------------------------------||\n");
   printf("||   -> Total Bill : %f             \n",netAmount);
   printf("||------------------------------------------||\n");
   printf("||   -> Cash Tendered : %f          \n",cash);
   printf("||------------------------------------------||\n");
   printf("||   -> Change : %f                  \n",change);
   printf("||------------------------------------------||\n");
   printf("||          HOPE TO SEE YOU SOON            ||\n");	
   printf("||                                          ||\n");
   printf("||             ENJOY YOUR MEAL              ||\n");
   printf("||------------------------------------------||\n");
   printf("||                                          ||\n");
   time_t t;   
   time(&t);
   printf("\t   %s\n", ctime(&t));
   printf("||||||||||||||||||||||||||||||||||||||||||||||\n"); 
  }
  
  if ( eatopt == 'b' | eatopt == 'B')
  {
  	printf("\t Please enter your address: ");
  	scanf("%s",add);
  	
  	printf("\n||||||||||||||||||||||||||||||||||||||||||||||\n");
   printf("||                                          ||\n");
   printf("||                                          ||\n");
   printf("||=========THANK YOU FOR YOUR VISIT=========||\n");
   printf("||                                          ||\n");
   printf("||   ->  Reciept No : %d                  \n",id);
   printf("||   ->  Customer Name : %s                  \n",username);
   printf("||------------------------------------------||\n");
   printf("||   -> Total Bill : %f             \n",netAmount);
   printf("||------------------------------------------||\n");
   printf("||   -> Cash Tendered : %f          \n",cash);
   printf("||------------------------------------------||\n");
   printf("||   -> Change : %f                  \n",change);
   printf("||------------------------------------------||\n");
   printf("||          HOPE TO SEE YOU SOON            ||\n");	
   printf("||                                          ||\n");
   printf("||             ENJOY YOUR MEAL              ||\n");
   printf("||------------------------------------------||\n");
   printf("||                                          ||\n");
   time_t t;   
   time(&t);
   printf("\t   %s\n", ctime(&t));
   printf("||||||||||||||||||||||||||||||||||||||||||||||\n"); 
  }
  
  if ( eatopt == 'c' | eatopt == 'C')
  {
  	printf("\t Please enter your address: ");
  	scanf("%s",add);
  	
  	printf("\n||||||||||||||||||||||||||||||||||||||||||||||\n");
   printf("||                                          ||\n");
   printf("||                                          ||\n");
   printf("||=========THANK YOU FOR YOUR VISIT=========||\n");
   printf("||                                          ||\n");
   printf("||   ->  Reciept No : %d                  \n",id);
   printf("||   ->  Customer Name : %s                  \n",username);
   printf("||------------------------------------------||\n");
   printf("||   -> Total Bill : %f             \n",netAmount);
   printf("||------------------------------------------||\n");
   printf("||   -> Cash Tendered : %f          \n",cash);
   printf("||------------------------------------------||\n");
   printf("||   -> Change : %f                  \n",change);
   printf("||   -> Address : %s                  \n",add);
   printf("||------------------------------------------||\n");
   printf("||          HOPE TO SEE YOU SOON            ||\n");	
   printf("||                                          ||\n");
   printf("||             ENJOY YOUR MEAL              ||\n");
   printf("||------------------------------------------||\n");
   printf("||                                          ||\n");
   time_t t;   
   time(&t);
   printf("\t   %s\n", ctime(&t));
   printf("||||||||||||||||||||||||||||||||||||||||||||||\n"); 
  }
   }
    else if(change<0)
   goto s;  
   
}
  }
    
    
      
        
    void dinner()
{

//   do {
      int id= 101;
int ne;
  int i, num;  
        system ("cls");
        char add[10];
  char choice = ' ';
  int qty = 0;
  int addMore = 0;

  printf("\t            ==============================          \n");
  printf("\t                    Dinner Menu   \n");
  printf("\t            ==============================          \n\n");

  printf("\t   [1] Gravy Manchurian with Singapuri Noodles         - Rs.210 \n");
  printf("\t-----------------------------------------------------------------\n");
  printf("\t   [2] Chili Chicken with Fried Rice and Raita         - Rs.260 \n");
  printf("\t-----------------------------------------------------------------\n");
  printf("\t   [3] Kadhai Chicken with Ginger Rice                 - Rs.375 \n");
  printf("\t-----------------------------------------------------------------\n");
  printf("\t   [4] Masala Dosa with 2 Medu Vada and Sambar         - Rs.220 \n");
  printf("\t-----------------------------------------------------------------\n");
  printf("\t   [5] Shahi Paneer with Paratha and Salad             - Rs.360 \n");
  printf("\t-----------------------------------------------------------------\n");
  printf("\t   [6] Matar Paneer with Paratha                       - Rs.160 \n");
  printf("\t-----------------------------------------------------------------\n");
  printf("\t   [7] Paneer with Lachha Paratha and Raita            - Rs.260 \n");
  printf("\t-----------------------------------------------------------------\n");
  printf("\t   [8] Full Chicken Biryani                            - Rs.160 \n");
  printf("\t-----------------------------------------------------------------\n");
  printf("\t   [9] Veg Pulao With Soya Sauce                       - Rs.260 \n");
   
  h:
  printf("\n\t What are your craving for ? : ");
    scanf("%d", &choice);

  switch(choice)
  {
               case 1: price = 210;
               break;
               case 2: price = 260;
               break;
               case 3: price = 375;
               break;
               case 4: price = 220;
               break;
               case 5: price = 360;
               break;
               case 6: price = 160;
               break;
               case 7: price = 260;
               break;
               case 8: price = 160;
               break;
               case 9: price = 260;
               break;
               default:
               printf("\tWe request you to enter a valid choice !");
               goto h;
  }
  
  printf("\n\tJust One ? : ");
   scanf("%d", &qty);
   
   amt = price * qty;
   printf("\n\tTotal amount\t : %2.f\n", amt);

   netAmount = netAmount + amt;
   printf("\n\tYour total bill is : %2.f\n", netAmount);

   printf("\n\tWants to taste something else ? : (y/n)");
   
   addMore = getche();
    if(addMore == 'y')
    {
     dinner();
    }
    else if(addMore == 'n')

   if(cash < netAmount){
  
   s:
    printf("\n\t\t\t\t\t\t\t\t\t\tCASH TENDERED\t: ");
    scanf("%f", &cash);
    
   change = cash - netAmount;
   if(change>=0){

    printf("\tPlease enter your username & press enter for receipt : ");
  scanf("%s", &username);   
srand(time(0)); //seed the random number generator with the current time
                id = rand() % (10000 - 101 + 1) + 101; //generate a random number between 101 and 10000
  FILE *fp;
    fp = fopen("players.txt", "a");
    fprintf(fp, "%d,%d,%2.f,%2.f,%f,%f,%d,%s\n", choice, qty, amt,netAmount,cash,change,id,username);
    for (i = 1; i <= 10; i++)  
    
    fclose(fp);
    
  printf("\n\t Please select an option : \n");
  printf("\n\t [A] Take Away\n");
  printf("\n\t [B] Dine-In\n");
  printf("\n\t [C] Home Delivery\n");
  scanf("\n\t %c", &eatopt);
  
  if ( eatopt == 'A' | eatopt == 'a')
  {
  	printf("\t Please enter your address: ");
  	scanf("%s",add);
  	
  	printf("\n||||||||||||||||||||||||||||||||||||||||||||||\n");
   printf("||                                          ||\n");
   printf("||                                          ||\n");
   printf("||=========THANK YOU FOR YOUR VISIT=========||\n");
   printf("||                                          ||\n");
   printf("||   ->  Reciept No : %d                  \n",id);
   printf("||   ->  Customer Name : %s                  \n",username);
   printf("||------------------------------------------||\n");
   printf("||   -> Total Bill : %f             \n",netAmount);
   printf("||------------------------------------------||\n");
   printf("||   -> Cash Tendered : %f          \n",cash);
   printf("||------------------------------------------||\n");
   printf("||   -> Change : %f                  \n",change);
   printf("||------------------------------------------||\n");
   printf("||          HOPE TO SEE YOU SOON            ||\n");	
   printf("||                                          ||\n");
   printf("||             ENJOY YOUR MEAL              ||\n");
   printf("||------------------------------------------||\n");
   printf("||                                          ||\n");
   time_t t;   
   time(&t);
   printf("\t   %s\n", ctime(&t));
   printf("||||||||||||||||||||||||||||||||||||||||||||||\n"); 
  }
  
  if ( eatopt == 'b' | eatopt == 'B')
  {
  	printf("\t Please enter your address: ");
  	scanf("%s",add);
  	
  	printf("\n||||||||||||||||||||||||||||||||||||||||||||||\n");
   printf("||                                          ||\n");
   printf("||                                          ||\n");
   printf("||=========THANK YOU FOR YOUR VISIT=========||\n");
   printf("||                                          ||\n");
   printf("||   ->  Reciept No : %d                  \n",id);
   printf("||   ->  Customer Name : %s                  \n",username);
   printf("||------------------------------------------||\n");
   printf("||   -> Total Bill : %f             \n",netAmount);
   printf("||------------------------------------------||\n");
   printf("||   -> Cash Tendered : %f          \n",cash);
   printf("||------------------------------------------||\n");
   printf("||   -> Change : %f                  \n",change);
   printf("||------------------------------------------||\n");
   printf("||          HOPE TO SEE YOU SOON            ||\n");	
   printf("||                                          ||\n");
   printf("||             ENJOY YOUR MEAL              ||\n");
   printf("||------------------------------------------||\n");
   printf("||                                          ||\n");
   time_t t;   
   time(&t);
   printf("\t   %s\n", ctime(&t));
   printf("||||||||||||||||||||||||||||||||||||||||||||||\n"); 
  }
  
  if ( eatopt == 'c' | eatopt == 'C')
  {
  	printf("\t Please enter your address: ");
  	scanf("%s",add);
  	
  	printf("\n||||||||||||||||||||||||||||||||||||||||||||||\n");
   printf("||                                          ||\n");
   printf("||                                          ||\n");
   printf("||=========THANK YOU FOR YOUR VISIT=========||\n");
   printf("||                                          ||\n");
   printf("||   ->  Reciept No : %d                  \n",id);
   printf("||   ->  Customer Name : %s                  \n",username);
   printf("||------------------------------------------||\n");
   printf("||   -> Total Bill : %f             \n",netAmount);
   printf("||------------------------------------------||\n");
   printf("||   -> Cash Tendered : %f          \n",cash);
   printf("||------------------------------------------||\n");
   printf("||   -> Change : %f                  \n",change);
   printf("||   -> Address : %s                  \n",add);
   printf("||------------------------------------------||\n");
   printf("||          HOPE TO SEE YOU SOON            ||\n");	
   printf("||                                          ||\n");
   printf("||             ENJOY YOUR MEAL              ||\n");
   printf("||------------------------------------------||\n");
   printf("||                                          ||\n");
   time_t t;   
   time(&t);
   printf("\t   %s\n", ctime(&t));
   printf("||||||||||||||||||||||||||||||||||||||||||||||\n"); 
  }
   }
   else if(change<0)
   goto s; 
   
}
}
void display()
{
int choice, qty, id, searchID;
    float amt, netAmount, cash, change;
    FILE *fp;
    char username[20];
    // Prompts the user for the ID to search for
    printf("\t\n Please enter the ID to search for: ");
    scanf("%d", &searchID);
    
    fp = fopen("players.txt", "r"); //Open the file in reading mode
    if(fp == NULL) {
        printf("\n\tError opening file!\n");
        return 1; //Returns an error code
    }
    
    while (fscanf(fp, "%d,%d,%f,%f,%f,%f,%d,%s", &choice, &qty, &amt, &netAmount, &cash, &change, &id,&username) != EOF) {
    // Read the data from the file, one line at a time, until the end of the file is reached.
    // fscanf will return EOF (end of file) when it reaches the end of the file
    // the while loop will keep running until EOF is reached
        if (id == searchID) {
            // If the id read from the file matches the search id, print the record
            printf("\n\tChoice: %d\n", choice);
            printf("\tQuantity: %d\n", qty);
            printf("\tAmount: %.2f\n", amt);
            printf("\tNet Amount: %.2f\n", netAmount);
            printf("\tCash: %.2f\n", cash);
            printf("\tChange: %.2f\n", change);
            printf("\tID: %d\n", id);
             printf("\tUSERNAME: %s\n", username);
              time_t t;   
  time(&t);
  printf("\t\t %s", ctime(&t));
            break; // Exit the loop
        }
    }
    
    if(feof(fp))  // check if end of file reached
        printf("\n\n\tRecord not found!\n");
    // if the loop exits without finding a match, it means that the record wasn't found
    fclose(fp); // Close the file
    
}
void delet()
{
	int choice, qty, id, searchID, found = 0;
    float amt, netAmount, cash, change;
    FILE *fp, *temp;
    char username[20];
    
    // Prompt the user for the ID to delete
    printf("\n\tEnter the ID to delete: ");
    scanf("%d", &searchID);
    
    fp = fopen("players.txt", "r"); //Open the file in read mode
    if(fp == NULL) {
        printf("\n\tError opening file!\n");
     //   return 1; //Return an error code
    }
    
    temp = fopen("temp.txt", "w"); //Open a temporary file in write mode
    if(temp == NULL) {
        printf("\n\tError creating temporary file!\n");
       // return 1; //Return an error code
    }
    
    while (fscanf(fp, "%d,%d,%f,%f,%f,%f,%d,%s", &choice, &qty, &amt, &netAmount, &cash, &change, &id,&username) != EOF) {
        if (id != searchID) {
            // If the id read from the file does not match the search id, write the record to the temporary file
            fprintf(temp, "%d,%d,%f,%f,%f,%f,%d,%s\n", choice, qty, amt, netAmount, cash, change, id,username);
        } else {
            found = 1;
        }
    }
    fclose(fp);
    fclose(temp);
    if (found == 1) {
        // If the record was found, delete the original file and rename the temporary file
        remove("players.txt");
        rename("temp.txt", "players.txt");
        printf("\n\tRecord deleted successfully!\n");
    } else {
        // If the record was not found, delete the temporary file
        remove("temp.txt");
        printf("\n\tRecord not found!\n");
    }
}
