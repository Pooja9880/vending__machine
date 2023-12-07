#include<iostream>
#include <string.h>
#include <iomanip>
using namespace std;

struct softdrink
{
char name[20];
float price;
unsigned quantity;
}drink[5];

class vending
{
public:
virtual void access()
{
strcpy(drink[0].name,"Cola"); drink[0].price=0.75; drink[0].quantity=20;
strcpy(drink[1].name,"Root Beer"); drink[1].price=0.75; drink[1].quantity=20;
strcpy(drink[2].name,"Lemon Lime"); drink[2].price=0.75; drink[2].quantity=20;
strcpy(drink[3].name,"Grape Soda"); drink[3].price=0.80; drink[3].quantity=20;
strcpy(drink[4].name,"Cream Soda"); drink[4].price=0.80; drink[4].quantity=20;
cout << fixed;
cout << setprecision(2);
cout<<" WELCOME TO THE VENDING MACHINE! \n";
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
cout<<"Please select your drink: \n";
cout<<" 1) "<<drink[0].name<<"\t\t\t"<<drink[0].price<<"\t("<<drink[0].quantity<<") remaining";
cout<<"\n 2) "<<drink[1].name<<"\t\t"<<drink[1].price<<"\t("<<drink[1].quantity<<") remaining";
cout<<"\n 3) "<<drink[2].name<<"\t\t"<<drink[2].price<<"\t("<<drink[2].quantity<<") remaining";
cout<<"\n 4) "<<drink[3].name<<"\t\t"<<drink[3].price<<"\t("<<drink[3].quantity<<") remaining";
cout<<"\n 5) "<<drink[4].name<<"\t\t"<<drink[4].price<<"\t("<<drink[4].quantity<<") remaining";
cout<<"\n 6) Leave the vending machine \n\n";
}
};

class sell: public vending
{
public:
sell(): vending() {}
void run()
{
cout<<"\n Choose a drink: ";
int choice;
cin>>choice;
while(choice!=6)
{
if(choice >=1 && choice <=5)
{
    if(drink[choice-1].quantity == 0)
    {
        cout<<"\n No more " << drink[choice-1].name <<" is available, requires refilling of the machine!";
        getchar(); 
        getchar();
        continue;
    }
}
if(choice == 6)
cout<<"Thank you for using it!";
else if(choice <= 5)
{
float money, price;
cout<<"\n Enter amount inserted: ";
cin>>money;
if(choice>=1 && choice <=3)
{
price = 0.75;
if(money < price)
{
cout<<"\n Enter sufficient amount : ";
getchar();
getchar();
continue;
}
}
else if(choice ==4 || choice ==5)
{
price = 0.80;
if(money < price)
{
cout<<"\n Enter sufficient amount ";
getchar();
getchar();
continue;
}
}
cout<<"\n Thum, thum, thum, splat..Enjoy your beverage!";
cout<<"\n\nChange calculated: "<< money-price;
drink[choice-1].quantity = drink[choice-1].quantity - 1;
cout<<"\nThere are "<< drink[choice-1].quantity <<" drinks left of that type. \n";
cout<<"Thank you for using it! Have a nice day :D \n";
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
getchar();
getchar();
}
try
{
        if(choice>=6)
        throw 6;
}
    catch(int choice)
    {
        cout<<"Out of stock!";
break;
    }
}
}
};

int main()
{
    vending v;
    vending *vptr;
    vptr=&v;
    vptr->access();
    sell s;
    sell *sptr;
    sptr=&s;
    sptr->run();
    return 0;
}
