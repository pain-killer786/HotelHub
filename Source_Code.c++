#include<iostream>
using namespace std;

int main()
{
    int quant;
    int choice;
    
    //Quantity
    int Qrooms=0, Qpasta=0, Qburger=0, Qnoodles=0, Qshake=0, Qchicken=0;
    
    //Food Items Sold
    int Srooms=0, Spasta=0, Sburger=0, Snoodles=0, Sshake=0, Schicken=0;

    //Total price of items
    int Total_rooms=0, Total_pasta=0, Total_burger=0, Total_noodles=0, Total_shake=0, Total_chicken=0;


    cout<<"\n\t -:Quantity of items we have:-"<<endl;

    cout<<"\n Rooms available: ";
    cin>>Qrooms;
    
    cout<<"\n Quantity of Pasta: ";
    cin>>Qpasta;
    
    cout<<"\n Quantity of Burger: ";
    cin>>Qburger;
    
    cout<<"\n Quantity of Noodles: ";
    cin>>Qnoodles;
    
    cout<<"\n Quantity of Shake: ";
    cin>>Qshake;
    
    cout<<"\n Quantity of Chicken-Roll: ";
    cin>>Qchicken;

    m:
    cout<<"\n\t\t\t Please select from the menu options ";
    cout<<"\n\n1 Rooms";
    cout<<"\n2 Pasta";
    cout<<"\n3 Burger";
    cout<<"\n4 Noodles";
    cout<<"\n5 Shake";
    cout<<"\n6 Chicken-Roll";
    cout<<"\n7 Information regarding sales and collection";
    cout<<"\n8 Exit";

    cout<<"\n\n Please Enter your choice! :";
    cin>>choice;

    switch (choice)
    {
        case 1:
        cout<<"\n\n Enter the number of rooms you want: ";

        cin>>quant;
        if (Qrooms-Srooms >=quant)
        {
            Srooms=Srooms+quant;
            Total_rooms= Total_rooms+(quant *1200);
            cout<<"\n\n\t\t"<<quant<<" room/rooms have been alloted to you! "<<endl;

        }
        else
        {
            cout<<"\n\tOnly "<<Qrooms-Srooms<<" Rooms remaining in hotel "<<endl;
        }
        break;

        case 2:
        cout<<"\n\n Enter Pasta Quantity: ";

        cin>>quant;
        if (Qpasta-Spasta >=quant)
        {
            Spasta=Spasta+quant;
            Total_pasta= Total_pasta+(quant *250);
            cout<<"\n\n\t\t"<<quant<<" Pasta is the order! "<<endl;

        }
        else
        {
            cout<<"\n\tOnly "<<Qpasta-Spasta<<" Pasta remaining in hotel "<<endl;
        }    
        break;

        case 3:
        cout<<"\n\n Enter Burger Quantity: ";

        cin>>quant;
        if (Qburger-Sburger>=quant)
        {
            Sburger=Sburger+quant;
            Total_burger= Total_burger+(quant*1200);
            cout<<"\n\n\t\t"<<quant<<" Burger is the order! ";

        }
        else
        {
            cout<<"\n\tOnly "<<Qburger-Sburger<<" Burger remaining in hotel "<<endl;
        }    
        break;

        case 4:
        cout<<"\n\n Enter Noodles Quantity: ";

        cin>>quant;
        if (Qnoodles-Snoodles>=quant)
        {
            Snoodles=Snoodles+quant;
            Total_noodles= Total_noodles+(quant*140);
            cout<<"\n\n\t\t"<<quant<<" Noodles is the order! "<<endl;

        }
        else
        {
            cout<<"\n\tOnly "<<Qnoodles-Snoodles<<" Noodles remaining in hotel "<<endl;
        }
        break;

        case 5:
        cout<<"\n\n Enter Shake Quantity: ";

        cin>>quant;
        if (Qshake-Sshake>=quant)
        {
            Sshake=Sshake+quant;
            Total_shake= Total_shake+(quant*120);
            cout<<"\n\n\t\t"<<quant<<" Shake is the order! "<<endl;

        }
        else
        {
            cout<<"\n\t Only "<<Qshake-Sshake<<" Shake remaining in hotel "<<endl;
        }    
        break;

        case 6:
        cout<<"\n\n Enter Chicken-Roll Quantity: ";

        cin>>quant;
        if (Qchicken-Schicken>=quant)
        {
            Schicken=Schicken+quant;
            Total_chicken= Total_chicken+(quant*150);
            cout<<"\n\n\t\t"<<quant<<" Chicken-Roll is the order! "<<endl;

        }
        else
        {
            cout<<"\n\t Only "<<Qchicken-Sburger<<" Chicken remaining in hotel "<<endl;
        }    
        break;

        case 7:

        cout<<"\n\t\tDetails of sales and collection ";

        cout<<"\n\n Number of rooms we had : "<<Qrooms;
        cout<<"\n\n Number of rooms we gave for rent "<<Srooms;
        cout<<"\n\n Remaining rooms : "<<Qrooms-Srooms;
        cout<<"\n\n Total rooms collection for the day : "<<Total_rooms;

        cout<<"\n\n Number of Pasta we had : "<<Qpasta;
        cout<<"\n\n Number of Pasta we sold "<<Spasta;
        cout<<"\n\n Remaining Pasta : "<<Qpasta-Spasta;
        cout<<"\n\n Total Pasta collection for the day : "<<Total_pasta;

        cout<<"\n\n Number of Burger we had : "<<Qburger;
        cout<<"\n\n Number of Burger we sold "<<Sburger;
        cout<<"\n\n Remaining Burger : "<<Qburger-Sburger;
        cout<<"\n\n Total Burger collection for the day : "<<Total_burger;

        cout<<"\n\n Number of Noodles we had : "<<Qnoodles;
        cout<<"\n\n Number of Noodles we sold "<<Snoodles;
        cout<<"\n\n Remaining Noodles : "<<Qnoodles-Snoodles;
        cout<<"\n\n Total Noodles collection for the day : "<<Total_noodles;

        cout<<"\n\n Number of Shake we had : "<<Qshake;
        cout<<"\n\n Number of Shake we sold "<<Sshake;
        cout<<"\n\n Remaining Shake : "<<Qshake-Sshake;
        cout<<"\n\n Total Shake collection for the day : "<<Total_shake;

        cout<<"\n\n Number of Chicken-Rolls we had : "<<Qchicken;
        cout<<"\n\n Number of Chicken-Rolls we sold "<<Schicken;
        cout<<"\n\n Remaining Chicken-Rolls : "<<Qchicken-Schicken;
        cout<<"\n\n Total Chicken-Rolls collection for the day : "<<Total_chicken;

        break;

        case 8:
        
        cout<<"Thank You for visiting us"<<endl;
        exit(0);
        
        default:
        cout<<"\n Please select the numbers mentioned above! ";
    }
    goto m;

    return 0;


}