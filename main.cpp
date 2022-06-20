#include<iostream>
using namespace std;
int main()
{

    int quant;
    int choice;

    int qrooms=0,qvegthali=0,qnonvegthali=0,qBiryani=0,qnoodles=0,qburger=0,qpasta=0;
    int srooms=0,svegthali=0,snonvegthali=0,sBiryani=0,snoodles=0,sburger=0,spasta=0;
    int totalrooms=0,totalvegthali=0,totalnonvegthali=0,totalBiryani=0,totalnoodles=0,totalburger=0,totalpasta=0;

    cout<<"                 \n\t list of items we have";
    cout<<" ______________________________________________________";
    cout<<"_______________________________________________________";

    cout<<"\n\n Rooms avaliable            :";
    cout<<".................................";
    cin>>qrooms;
    cout<<"\n Quantity of veg-thali      :";
    cout<<".................................";
    cin>>qvegthali;
    cout<<"\n Quantity of non-veg thali  :";
    cout<<".................................";
    cin>>qnonvegthali;
    cout<<"\n Quantity of Biryani        :";
    cout<<".................................";
    cin>>qBiryani;
    cout<<"\n Quantity of Noodles        :";
    cout<<".................................";
    cin>>qnoodles;
    cout<<"\n Quantity of Burgers        :";
    cout<<".................................";
    cin>>qburger;
    cout<<"\n Quantity of Pasta          :";
    cout<<".................................";
    cin>>qpasta;

    m:
    cout<<"\t\t\t Select from the avaliable menu options  :";
    cout<<"______________________________________________________";
    cout<<"______________________________________________________";
    cout<<"\n\n1 Rooms";
    cout<<"\n2 veg-thali";
    cout<<"\n3 non-veg-thali";
    cout<<"\n4 Biryani";
    cout<<"\n5 Noodles";
    cout<<"\n6 Burger";
    cout<<"\n7 Pasta";
    cout<<"\n\8 information regarding sales and collections$$  ";
    cout<<"\n9 exit";
    cout<<"\n\n select your choice";
    cin>>choice;


    switch(choice)
    {

        case 1:
            cout<<"\n\n Enter the number of rooms you want:  ";
            cin>>quant;


            if(qrooms-srooms>=quant)
            {

                srooms=srooms+quant;
                totalrooms=(totalrooms+quant)*2000;
                cout<<"\n\n \t\t"<<quant<<"  room/ rooms has been alloted to you";
            }
            else
                cout<<"\n only"<<qrooms-srooms<<"Rooms are avaliable";
                 break;



        case 2:
            cout<<"\n\n Enter the number of veg-thali you want:  ";
            cin>>quant;

            if(qvegthali-svegthali>=quant)
            {

                svegthali=svegthali+quant;
                totalvegthali=(totalvegthali+quant)*300;
                cout<<"\n\n \t\t"<<quant<<"/ veg-thali is your order";
            }
            else
                cout<<"\n only"<<qvegthali-svegthali<<"/ veg-thali is/or avaliable";
               break;


        case 3:
            cout<<"\n\n Enter the number of non-veg thali you want:  ";
            cin>>quant;

            if(qnonvegthali-snonvegthali>=quant)
            {

                snonvegthali=snonvegthali+quant;
                totalnonvegthali=(totalnonvegthali+quant)*400;
                cout<<"\n\n \t\t"<<quant<<"/ non-veg thali is your order";
            }
            else
                cout<<"\n only"<<qnonvegthali-snonvegthali<<"/ non-veg thali are avaliable";
                 break;




        case 4:
            cout<<"\n\n Enter the number of Biryani you want:  ";
            cin>>quant;

            if(qBiryani-sBiryani>=quant)
            {

                sBiryani=sBiryani+quant;
                totalBiryani=(totalBiryani+quant)*350;
                cout<<"\n\n \t\t"<<quant<<"/ Biryani is your order";
            }
            else
                cout<<"\n only"<<qBiryani-sBiryani<<"/ Biryani  are avaliable";
                 break;


        case 5:
            cout<<"\n\n Enter the number of Noodles you want:  ";
            cin>>quant;

            if(qnoodles-snoodles>=quant)
            {

                snoodles=snoodles+quant;
                totalnoodles=(totalnoodles+quant)*100;
                cout<<"\n\n \t\t"<<quant<<"/ Noodles is your order";
            }
            else
                cout<<"\n only"<<qnoodles-snoodles<<"Noodles are avaliable";
                 break;



        case 6:
            cout<<"\n\n Enter the number of burgers you want:  ";
            cin>>quant;

            if(qburger-sburger>=quant)
            {

                sburger=sburger+quant;
                totalburger=(totalburger+quant)*100;
                cout<<"\n\n \t\t"<<quant<<"/ burgers is your order";
            }
            else
                cout<<"\n only"<<qburger-sburger<<" burgers are avaliable";
                 break;

        case 7:
            cout<<"\n\n Enter the number of pasta you want:  ";
            cin>>quant;

            if(qpasta-spasta>=quant)
            {

                spasta=spasta+quant;
                totalpasta=(totalpasta+quant)*100;
                cout<<"\n\n \t\t"<<quant<<"/ pasta is your order";
            }
            else
                cout<<"\n only"<<qpasta-spasta<<"pasta are avaliable";
                 break;


       case 8:
        cout<<"Details of sale sand collection \n";
        cout<<"\n Number of rooms we had : "<<qrooms;
        cout<<"\n Number of rooms we sold : "<<srooms;
        cout<<"\n Number of rooms we left : "<<qrooms-srooms;
        cout<<"\n Romms collection today: "<<totalrooms;



        cout<<"\n Number of veg-thali we had : "<<qvegthali;
        cout<<"\n Number of veg-thali we sold : "<<svegthali;
        cout<<"\n Number of veg-thali we left : "<<qvegthali-svegthali;
        cout<<"\nveg-thali collection today: "<<totalvegthali;


        cout<<"\n Number of non-veg-thali we had : "<<qnonvegthali;
        cout<<"\n Number of non-veg-thali we sold : "<<snonvegthali;
        cout<<"\n Number of non-veg-thali we left : "<<qnonvegthali-snonvegthali;
        cout<<"\n non-veg-thalis collection today: "<<totalnonvegthali;

        cout<<"\n Number of noodles we had : "<<qnoodles;
        cout<<"\n Number of noodles we sold : "<<snoodles;
        cout<<"\n Number of noodles we left : "<<qnoodles-snoodles;
        cout<<"\n Noodles collection today: "<<totalnoodles;


        cout<<"\n Number of biryani s we had : "<<qBiryani;
        cout<<"\n Number of biryani we sold : "<<sBiryani;
        cout<<"\n Number of biryani  we left : "<<qBiryani-sBiryani;
        cout<<"\n biryani collection today: "<<totalBiryani;


        cout<<"\n Number of burger  we had : "<<qburger;
        cout<<"\n Number of pasta we sold : "<<spasta;
        cout<<"\n Number of pasta we left : "<<qpasta-spasta;
        cout<<"\n pasta collection today: "<<totalpasta;

        cout<<"\n Number of pasta  we had : "<<qpasta;
        cout<<"\n Number of pasta we sold : "<<spasta;
        cout<<"\n Number of pasta we left : "<<qpasta-spasta;
        cout<<"\n pasta collection today: "<<totalpasta;


        cout<<"\n net total "<<totalrooms+totalvegthali+totalnonvegthali+totalnoodles+totalBiryani+totalburger+totalpasta<<"\n";

       case 9:
        exit(0);
       default:
        cout<<"select from menu only:";

    }
    goto m;


}
