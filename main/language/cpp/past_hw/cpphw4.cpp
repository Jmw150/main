// name:     Jordan Winkler
// date:     3/31/2017
// homework: 4
// process:  Intro displays. Then the user inputs how many pizzas
//           they want. Then the user tells the program what type
//           of pizza they want for each: type, size, and toppings.
//           the program reiterates what the user has input and
//           how much this will cost.

#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

enum type { deepDish, handTossed, pan };
enum size { small, medium, large };

class Pizza
{
public:
    void GetOrder();

    void OutputDescription();

    double ComputePrice();

private:
    type Type;
    size Size;
    int ToppingNum;

    int Price;
};

void IntroText();

int main ()
{
    IntroText();

    unsigned int NumPizzas;
    cin >> NumPizzas;
    if (cin.fail())
    {
        cout << "\nerror: invalid input\n";
        return 1;
    }

    Pizza* CustomerPizza = new Pizza[NumPizzas];

    char Correct;
    for (int i = 0 ; i < NumPizzas ; i++)
    {
        CustomerPizza[i].GetOrder();
        CustomerPizza[i].OutputDescription();
        
        cout << "Is this correct? (y/n) ";
        cin >> Correct;
        if (Correct != 'y')
            i--;
    }
    
    int Total = 0;
    for (int i = 0 ; i < NumPizzas ; i++)
        Total += CustomerPizza[i].ComputePrice();

    cout << "\nYour total should be $" << Total
         << ". Thank you for ordering at Jordan's Pizza.\n";
    
    return 0;
}

/****************************************************************
| Name: OutputDescription
|    
| Precodition: there is at least one object of class pizza
| Postcondition: information on what has been ordered has been
|                printed to the screen
|
| Parameters:
|       
|   IN: nothing
|   Out: nothing
|   
| Returns: nothing
\****************************************************************/
void Pizza::OutputDescription()
{
    cout << "\nYou ordered a ";

    if (Size == small)
        cout << "small ";
    else if (Size == medium)
        cout << "medium ";
    else if (Size == large)
        cout << "large ";

    if (Type == deepDish)
        cout << "deep dish ";
    else if (Type == handTossed)
        cout << "hand tossed ";
    else if (Type == pan)
        cout << "pan ";

    cout << "pizza with ";

    if (ToppingNum == 0)
        cout << "no extra ";
    else cout << ToppingNum << ' ';

    cout << "toppings or ounces of cheese.\n";
}

/****************************************************************
| Name: ComputePrice
|    
| Precodition: There is at least one object from the class pizza.
|              It is known what is on the pizza.
| Postcondition: The price of the pizza has been computed
|
| Parameters:
|       
|   IN: nothing 
|   Out: nothing
|   
| Returns: type double of the price of the pizza
\****************************************************************/
double Pizza::ComputePrice()
{
    Price = 0;

    if (Size == small)
        Price += 10;
    else if (Size == medium)
        Price += 14;
    else if (Size == large)
        Price += 17;

    Price += ToppingNum * 2;

    return Price;
}

/****************************************************************
| Name: IntroText
|    
| Precodition: nothing
| Postcondition: intro text for Jordan's pizza has been printed
|                to the screen
|
| Parameters:
|       
|   IN: nothing
|   Out: nothing
|   
| Returns: nothing
\****************************************************************/
void IntroText()
{ 
    cout <<"   ___               _             _        ______ _                \n"
         <<"  |_  |             | |           ( )       | ___ (_)               \n"
         <<"    | | ___  _ __ __| | __ _ _ __ |/ ___    | |_/ /_ __________ _   \n"
         <<"    | |/ _ \\| '__/ _` |/ _` | '_ \\  / __|   |  __/| |_  /_  / _` |  \n"
         <<"/\\__/ / (_) | | | (_| | (_| | | | | \\__ \\   | |   | |/ / / / (_| |  \n"
         <<"\\____/ \\___/|_|  \\__,_|\\__,_|_| |_| |___/   \\_|   |_/___/___\\__,_|  \n"
         <<"  \n"
         <<" ____                     \n"
         <<"/    \\            \n"
         <<"  u  u|      _______      \n"
         <<"    \\ |  .-''#%&#&%#``-.     \n"
         <<"   = /  ((%&#&#&%&VK&%&))    \n"
         <<"    |    `-._#%&##&%_.-'     \n"
         <<" /\\/\\`--.   `-."".-'  \n"
         <<" |  |    \\   /`./            \n"
         <<" |\\/|  \\  `-'  /  \n"
         <<" || |   \\     /             \n";
            
    cout << "\nHow many pizzas would you like? ";
};
            


/****************************************************************
| Name: GetOrder
|    
| Precodition: an object of class pizza has been declared
| Postcondition: the attributes of the pizza object is now known
|                or the program has ended in error
|
| Parameters:
|       
|   IN: nothing
|   Out: nothing
|   
| Returns: nothing
\****************************************************************/
void Pizza::GetOrder()
{
    string theType, theSize;
    int theToppingNum;
    
    cin.ignore(); //clear \n from earlier

    cout << "\nType: \n"
         << "   Deep Dish\n"
         << "   Hand Tossed\n"
         << "   Pan \n";
    getline(cin, theType);
    if (theType == "Deep Dish" || theType == "deep dish")
        Type = deepDish;
    else if (theType == "Hand Tossed" || theType == "hand tossed")
        Type = handTossed;
    else if (theType == "Pan" || theType == "pan")
        Type = pan;
    else 
    {
        cout << "\nNo special order!\n";
        exit(1);
    }

    cout << "\nSize: \n"
         << "   Small\n"
         << "   Medium\n"
         << "   Large\n";
    getline(cin, theSize);
    if (theSize == "Small" || theSize == "small")
        Size = small;
    else if (theSize == "Medium" || theSize == "medium")
        Size = medium;
    else if (theSize == "Large" || theSize == "large")
        Size = large;
    else
    {
        cout << "\nNo special order!\n";
        exit(1);
    }

    unsigned int cheese;
    cout << "\nHow many extra ounces of cheese do you want on your "
         << "pizza? ";
    cin  >> cheese;
    if (cin.fail())
    {
        cout << "\nNo soup for you! Come back one year!\n";
        exit(1);
    }
    
    unsigned int meat;
    cout << "\nHow many toppings do you want? ";
    cin  >> meat;
    if (cin.fail())
    {
        cout << "\nerror: I only understand natural numbers\n";
        exit(1);
    }

    ToppingNum = meat + cheese;
}

/*
   ___               _             _        ______ _                
  |_  |             | |           ( )       | ___ (_)               
    | | ___  _ __ __| | __ _ _ __ |/ ___    | |_/ /_ __________ _   
    | |/ _ \| '__/ _` |/ _` | '_ \  / __|   |  __/| |_  /_  / _` |  
/\__/ / (_) | | | (_| | (_| | | | | \__ \   | |   | |/ / / / (_| |  
\____/ \___/|_|  \__,_|\__,_|_| |_| |___/   \_|   |_/___/___\__,_|  
  
 ____                     
/    \            
  u  u|      _______      
    \ |  .-''#%&#&%#``-.     
   = /  ((%&#&#&%&VK&%&))    
    |    `-._#%&##&%_.-'     
 /\/\`--.   `-..-'  
 |  |    \   /`./            
 |\/|  \  `-'  /  
 || |   \     /             

How many pizzas would you like? 2

Type: 
   Deep Dish
   Hand Tossed
   Pan 
Deep Dish

Size: 
   Small
   Medium
   Large
small

How many extra ounces of cheese do you want on your pizza? 0

How many toppings do you want? 0

You ordered a small deep dish pizza with no extra toppings or ounces of cheese.
Is this correct? (y/n) y

Type: 
   Deep Dish
   Hand Tossed
   Pan 
hand tossed

Size: 
   Small
   Medium
   Large
medium

How many extra ounces of cheese do you want on your pizza? 50

How many toppings do you want? 40

You ordered a medium hand tossed pizza with 90 toppings or ounces of cheese.
Is this correct? (y/n) n

Type: 
   Deep Dish
   Hand Tossed
   Pan 
pan

Size: 
   Small
   Medium
   Large
large

How many extra ounces of cheese do you want on your pizza? 5

How many toppings do you want? 3 

You ordered a large pan pizza with 8 toppings or ounces of cheese.
Is this correct? (y/n) y

Your total should be $43. Thank you for ordering at Jordan's Pizza.

*/
