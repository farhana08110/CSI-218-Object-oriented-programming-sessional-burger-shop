#include<iostream>
#include<fstream>
#include<string>

using namespace std;

class shop_add
{
public:
    string a;
    void set_a(string u){a=u;}
    void shop_address()
{
    ifstream fin;
    fin.open("shop.txt");

    while(!fin.eof())
    {
      getline(fin,a);
        cout<<a<<endl;

    }
    fin.close();
}
};

class menu
{
    public:
    void food_menu()
    {

         cout<<"1.Beef/Chicken Burger-"<<"\n(Beef/chicken patty,special sauce)----------------------180/200Tk"<<endl;
         cout<<"2.Beef/Chicken Burger with Cheese-"<<"\n(Beef/chicken patty,cheese,special sauce)---------------200/220Tk"<<endl;
         cout<<"3.BBQ Chicken Burger-"<<"(BBQ Beef/chicken patty,Cheese,special sauce)------------220Tk"<<endl;
         cout<<"4.Beef/Chicken Burger with Sausage-"<<"(Beef/chicken patty,2x chicken sausage,special sauce)---250/270Tk"<<endl;
         cout<<"5.Double Decker Chicken Burger-"<<"(2x chicken patty,2x cheese,special sauce)--------------320Tk"<<endl;
         cout<<"6.Chicken Signature Burger-"<<"(2x chicken patty,2x cheese,egg,pastrami,special sauce)--400Tk"<<endl;
         cout<<"7.Coke(big)---------------------------------------50Tk"<<endl;

    }
};

class order
{
    int type,i,option1;
   int portion, burger;
   char feedback[100];
public:
    void food_order()
    {

         for(i=0;i<type;i++){
         cout<<"1.Beef/Chicken Burger-"<<"(Beef/chicken patty,special sauce)----------------------180/200Tk"<<endl;
         cout<<"2.Beef/Chicken Burger with Cheese-"<<"(Beef/chicken patty,cheese,special sauce)---------------200Tk/220"<<endl;
         cout<<"3.BBQ Chicken Burger-"<<"(BBQ Beef/chicken patty,Cheese,special sauce)------------220Tk"<<endl;
         cout<<"4.Beef/Chicken Burger with Sausage-"<<"(Beef/chicken patty,2x chicken sausage,special sauce)---250Tk/270"<<endl;
         cout<<"5.Double Decker Chicken Burger-"<<"(2x chicken patty,2x cheese,special sauce)--------------320Tk"<<endl;
         cout<<"6.Chicken Signature Burger-"<<"(2x chicken patty,2x cheese,egg,pastrami,special sauce)--400Tk"<<endl;
         cout<<"7.Coke(big)---------------------------------------50Tk"<<endl;
         cout<<"------------"<<endl;
         cout<<"how many types of burger" <<endl;
         cin>>type;
         cout<<"choose your option"<<endl;
         cin>>option1;

         switch (option1)
         {
             case 1:
            cout<<"You choose:"<<endl;
            cout<<"\n 1.Beef/Chicken Burger(Beef/chicken patty,special sauce)-------180/200Tk"<<endl;
             cout<<"how many burger you want to  buy:"<<endl;
             cin>>portion;
             cout<<"\n1.Chicken or \n2.Beef\n"<<endl;
             cin>>burger;
             if(burger==1)
             {
                 cout<<"You oder for "<<portion<< "Chicken Burger and you have to pay--"<< 180*portion<<"Tk"<<endl;
                 cout<<"--------------"<<endl;
             }
             else
             {
             cout<<"You order for "<<portion<<"Beef Burger and you have to pay--"<< 200*portion<<"Tk"<<endl;
             }
             break;



         case 2:

             cout<<"You choose:"<<endl;
            cout<<"\n 2.Beef/Chicken Burger with Cheese-(Beef/chicken patty,cheese,special sauce)---200/220Tk"<<endl;
             cout<<"how many burger you want to  buy:"<<endl;
             cin>>portion;
             cout<<"\n1.Chicken or \n2.Beef\n"<<endl;
             cin>>burger;
             if(burger==1)
             {
                 cout<<"You oder for "<<portion<< "Chicken cheese Burger and you have to pay--"<< 200*portion<<"Tk"<<endl;
             }
             else
             {
             cout<<"You order for "<<portion<<"Beef cheese Burger and you have to pay--"<< 220*portion<<"Tk"<<endl;
             }
             break;
         case 3:
             cout<<"You choose:"<<endl;
            cout<<"\n 3.BBQ Chicken Burger-(BBQ chicken patty,Cheese,special sauce)---------220Tk"<<endl;
             cout<<"how many burger you want to  buy:"<<endl;
             cin>>portion;
             cout<<"You oder for "<<portion<< "Chicken Burger and you have to pay--"<< 220*portion<<"Tk"<<endl;
             break;

         case 4:
            cout<<"You choose:"<<endl;
            cout<<"\n 4.Beef/Chicken Burger with Sausage-(Beef/chicken patty,2x chicken sausage,special sauce)-250Tk/270"<<endl;
             cout<<"how many burger you want to  buy:"<<endl;
             cin>>portion;
             cout<<"\n1.Chicken or \n2.Beef\n"<<endl;
             cin>>burger;
             if(burger==1)
             {
                 cout<<"You oder for "<<portion<< "Chicken sausage Burger and you have to pay--"<< 250*portion<<"Tk"<<endl;
             }
             else
             {
             cout<<"You order for "<<portion<<"Beef sausage Burger and you have to pay--"<< 270*portion<<"Tk"<<endl;
             }
             break;

         case 5:

             cout<<"You choose:"<<endl;
            cout<<"\n 5.Double Decker Chicken Burger-(2x chicken patty,2x cheese,special sauce)--------320Tk"<<endl;
             cout<<"how many burger you want to  buy:"<<endl;
             cin>>portion;
             cout<<"You oder for "<<portion<< "Chicken double decker Burger and you have to pay--"<< 320*portion<<"Tk"<<endl;
             break;
         case 6:
            cout<<"You choose:"<<endl;
            cout<<"\n 6.Chicken Signature Burger-(2x chicken patty,2x cheese,egg,pastrami,special sauce)--400Tk"<<endl;
             cout<<"how many burger you want to  buy:"<<endl;
             cin>>portion;
             cout<<"You oder for "<<portion<< "Chicken signature Burger and you have to pay--"<< 400*portion<<"Tk"<<endl;
             break;

            case 7:
            cout<<"You choose:"<<endl;
            cout<<"\n 7.Coke(big)-------------50Tk"<<endl;
             cout<<"how many coke you want to order:"<<endl;
             cin>>portion;
             cout<<"You oder for "<<portion<< "coke and you have to pay--"<< 50*portion<<"Tk"<<endl;
             break;

         }

        }
cout<<"Thank you for order from us"<<endl;
cout<<"you can share your experience with us"<<endl;

ofstream outfile;
outfile.open("feed_back.txt");

cout << "Enter your feedback: ";
cin.getline(feedback, 100);

outfile << feedback << endl;
outfile.close();

ifstream infile;
infile.open("feed_back.txt");

infile >> feedback;
cout << feedback << endl;

infile.close();


    }

};
class child:public shop_add,public menu,public order

{

    int n;
public:
    string b;
    void set_b(string v){b=v;}
   void set_n(int x){n = x ;}

void shop()
{
    ifstream fin;
    fin.open("welcome.txt");

    while(!fin.eof())
    {
      getline(fin,b);
        cout<<b<<endl;

    }
    fin.close();

    cout<<"Choose the option from (1-4)"<<endl;
    cout<<"1.Shop address"<<endl;
    cout<<"2.Menu"<<endl;
    cout<<"3.Order"<<endl;
    cout<<"4.Exit"<<endl;
}
void option()
{
    int i;

    for(i=0;i<100;i++)
    {
        cin>>n;
        switch (n)
    {
    case 1:
        shop_address();
        break;
    case 2:
        food_menu();
        break;
    case 3:
        food_order();
        break;


    }

    }

}

};

int main()
{
child ob1;
ob1.shop();
ob1.option();
return 0;



}


