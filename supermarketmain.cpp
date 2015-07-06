#include<iostream>
#include<vector>
#include<malloc.h>
#include<string.h>
#include<string>
using namespace std;
class product
{
public:
     char name[20],mfg[20],exp[20];
     int st,netweight;
     float cost;
     string pid;


     product *next;
     product *head[14];
     vector <string> a,b,c2,d,e;


    void set()
    {
        int i;
        for(i=0;i<14;i++)
            head[i]=NULL;
        a.push_back("Face creams and powders");
        a.push_back("Perfumes");
        a.push_back("Oils and Hair gel");

         b.push_back("Vegetables");
        b.push_back("Fruits");


         c2.push_back("Soap");
        c2.push_back("Buckets/Mugs");
        c2.push_back("Utensils");

         d.push_back("Chips");
        d.push_back("Beverages");
        d.push_back("Biscuits");

         e.push_back("Rice varieties");
        e.push_back("Dal");
        e.push_back("Spices");




    }
    void display1()
    {

    int i,ch,j;


            cout<<"\n"<<"CATEGORIES:";
            cout<<"\t"<<"\t"<<"(a).COSMETICS"<<"\n";
            for(i=0;i<a.size();i++)
            cout<<"\t"<<"\t"<<i+1<<"."<<a[i];

            cout<<"\t"<<"\t"<<"(b).VEGETABLES AND FRUITS"<<"\n";
            for(i=0;i<b.size();i++)
            cout<<"\t"<<"\t"<<i+1<<"."<<b[i];

            cout<<"\t"<<"\t"<<"(c).HOUSEHOLD AND COOKING ITEMS"<<"\n";
            for(i=0;i<c2.size();i++)
            cout<<"\t"<<"\t"<<i+1<<"."<<c2[i];

            cout<<"\t"<<"\t"<<"(d).EATABLES"<<"\n";
            for(i=0;i<d.size();i++)
            cout<<"\t"<<"\t"<<i+1<<"."<<d[i];

            cout<<"\t"<<"\t"<<"(e).PROVISIONS"<<"\n";
            for(i=0;i<e.size();i++)
            cout<<"\t"<<"\t"<<i+1<<"."<<e[i];

            cout<<"\n"<<"Press 6 to go back!!";
            do
            {


            cout<<"Select category";
            cin>>ch;
            switch(ch)
            {
             case 1:

        head[0]=new product;
strcpy(head[0]->name,"Lacto Calamine");
strcpy(head[0]->mfg,"23-Jan-2012");
strcpy(head[0]->exp,"21-Nov-2013");
head[0]->pid="FP123";
head[0]->st=5;
head[0]->netweight=500;
head[0]->cost=53;
head[0]->next=(product*)malloc(sizeof(product));
head[0]=head[0]->next;

strcpy(head[0]->name,"Eva");
strcpy(head[0]->mfg,"15-aug-2010");
strcpy(head[0]->exp,"16-sep-2015");
head[0]->pid="FP124";
head[0]->st= 10;
head[0]->netweight=1000;
head[0]->cost=56;
head[0]->next=(product*)malloc(sizeof(product));
head[0]=head[0]->next;

strcpy(head[0]->name,"Ponds");
strcpy(head[0]->mfg,"30-mar-2011");
strcpy(head[0]->exp,"01-may-2014");
head[0]->pid="FP125";
head[0]->st= 25 ;
head[0]->netweight=1000;
head[0]->cost=65;
head[0]->next=NULL;




            j=0;
            while(head[0]!=NULL)
            {
                cout<<j+1<<"."<<head[0]->name;
                head[0]=head[0]->next;
                j++;
            }
      break;
             case 2:

               head[1]=new product;
 strcpy(head[1]->name,"Nivea");
strcpy(head[1]->mfg,"11-jan-2010");
strcpy(head[1]->exp,"30-sep-2014");
head[1]->pid="PF100";
head[1]->st= 11;
head[1]->netweight=500;
head[1]->cost=87;
head[1]->next=(product*)malloc(sizeof(product));
head[1]=head[1]->next;

strcpy(head[1]->name,"AXE");
strcpy(head[1]->mfg,"31-dec-2012");
strcpy(head[1]->exp,"16-sep-2014");
head[1]->pid="PF101";
head[1]->st= 17;
head[1]->netweight=500;
head[1]->cost=113;
head[1]->next=(product*)malloc(sizeof(product));
head[1]=head[1]->next;

strcpy(head[1]->name,"Sprinz");
strcpy(head[1]->mfg,"30-mar-2011");
strcpy(head[1]->exp,"01-may-2014");
head[1]->pid="PF102";
head[1]->st= 25 ;
head[1]->netweight=500;
head[1]->cost=108;
head[1]->next=NULL;


            j=0;
            while(head[1]!=NULL)
            {
                cout<<j+1<<"."<<head[1]->name;
                head[1]=head[1]->next;
                j++;
            }

            break;

             case 3:
                 head[2]=new product;


 strcpy(head[2]->name,"Parachute");
strcpy(head[2]->mfg,"11-jan-2012");

strcpy(head[2]->exp,"30-apr-2015");
head[2]->pid="O100";
head[2]->st= 36;
head[2]->netweight=500;
head[2]->cost=87;
head[2]->next=(product*)malloc(sizeof(product));
head[2]=head[2]->next;

strcpy(head[2]->name,"Fairawsome");
strcpy(head[2]->mfg,"05-jun-2012");
strcpy(head[2]->exp,"30-dec-2014");
head[2]->pid="O101";
head[2]->st= 23;
head[2]->netweight=500;
head[2]->cost=56;
head[2]->next=(product*)malloc(sizeof(product));
head[2]=head[2]->next;

strcpy(head[2]->name,"VVD oil");
strcpy(head[2]->mfg,"15-jul-2011");
strcpy(head[2]->exp,"30-dec-2013");
head[2]->pid="O101";
head[2]->st= 46;
head[2]->netweight=500;
head[2]->cost=76;
head[2]->next=NULL;
j=0;


            j=0;
            while(head[2]!=NULL)
            {
                cout<<j+1<<"."<<head[2]->name;
                head[2]=head[2]->next;
                j++;
            }
            break;
             case 4:
                 head[3]=new product;
 strcpy(head[3]->name,"Tomato");
strcpy(head[3]->mfg,"11-jan-2013");
strcpy(head[3]->exp,"14-jan-2013");
head[3]->pid="V200";
head[3]->st= 100;
head[3]->netweight=1000;
head[3]->cost=48;
head[3]->next=(product*)malloc(sizeof(product));
head[3]=head[3]->next;

strcpy(head[3]->name,"Onion");
strcpy(head[3]->mfg,"30-jun-2013");
strcpy(head[3]->exp,"02-jul-2013");
head[3]->pid="V201";
head[3]->st= 250;
head[3]->netweight=1000;
head[3]->cost=36;
head[3]->next=(product*)malloc(sizeof(product));
head[3]=head[3]->next;

strcpy(head[3]->name,"Beans");
strcpy(head[3]->mfg,"30-jun-2013");
strcpy(head[3]->exp,"02-jul-2013");
head[3]->pid="V202";
head[3]->st= 110;
head[3]->netweight=1000;
head[3]->cost=28;
head[3]->next=NULL;
j=0;

while(head[3]!=NULL)
            {
                cout<<j+1<<"."<<head[3]->name;
                head[3]=head[3]->next;
                j++;
            }

            break;
             case 5:

    head[4]=new product;
 strcpy(head[4]->name,"Apple");
strcpy(head[4]->mfg,"25-jan-2013");
strcpy(head[4]->exp,"30-jan-2013");
head[4]->pid="F300";
head[4]->st= 100;
head[4]->netweight=1000;
head[4]->cost=150;
head[4]->next=(product*)malloc(sizeof(product));
head[4]=head[4]->next;
strcpy(head[4]->name,"Banana");
strcpy(head[4]->mfg,"20-jan-2013");
strcpy(head[4]->exp,"30-jan-2013");
head[4]->pid="F301";
head[4]->st= 400;
head[4]->netweight=1000;
head[4]->cost=58;
head[4]->next=(product*)malloc(sizeof(product));
head[4]=head[4]->next;
strcpy(head[4]->name,"Pineapple");
strcpy(head[4]->mfg,"15-jan-2013");
strcpy(head[4]->exp,"30-jan-2013");
head[4]->pid="F302";
head[4]->st= 100;
head[4]->netweight=1000;
head[4]->cost=80;
head[4]->next=NULL;
j=0;
while(head[4]!=NULL)
            {
                cout<<j+1<<"."<<head[4]->name;
                head[4]=head[4]->next;
                j++;
            }
            break;
             case 6:

                 head[5]=new product;
 strcpy(head[5]->name,"Cinthol");
strcpy(head[5]->mfg,"25-Dec-2013");
strcpy(head[5]->exp,"30-nov-2015");
head[5]->pid="SP500";
head[5]->st= 60;
head[5]->netweight=100;
head[5]->cost=31;
head[5]->next=(product*)malloc(sizeof(product));
head[5]=head[5]->next;
strcpy(head[5]->name,"Johnson & Johnson");
strcpy(head[5]->mfg,"01-apr-2013");
strcpy(head[5]->exp,"30-may-2015");
head[5]->pid="SP501";
head[5]->st= 100;
head[5]->netweight=100;
head[5]->cost=65;
head[5]->next=(product*)malloc(sizeof(product));
head[5]=head[5]->next;
strcpy(head[5]->name,"Pears");
strcpy(head[5]->mfg,"11-mar-2013");
strcpy(head[5]->exp,"10-aug-2015");
head[5]->pid="SP502";
head[5]->st= 80;
head[5]->netweight=100;
head[5]->cost=75;
head[5]->next=NULL;
j=0;

while(head[5]!=NULL)
            {
                cout<<j+1<<"."<<head[5]->name;
                head[5]=head[5]->next;
                j++;
            }
            break;

             case 7:
                head[6]=new product;
 strcpy(head[6]->name,"Diamond");
strcpy(head[6]->mfg,"25-Dec-2013");
strcpy(head[6]->exp,"30-nov-2015");
head[6]->pid="BM300";
head[6]->st= 60;
head[6]->netweight=5;
head[6]->cost=72;
head[6]->next=(product*)malloc(sizeof(product));
head[6]=head[6]->next;
strcpy(head[6]->name,"Royal mug");
strcpy(head[6]->mfg,"12-SEP-2010");
strcpy(head[6]->exp,"30-jun-2018");
head[6]->pid="BM301";
head[6]->st= 45;
head[6]->netweight=2;
head[6]->cost=25;
head[6]->next=(product*)malloc(sizeof(product));
head[6]=head[6]->next;
strcpy(head[6]->name,"Challenger bucket");
strcpy(head[6]->mfg,"25-Dec-2010");
strcpy(head[6]->exp,"30-nov-2025");
head[6]->pid="BM302";
head[6]->st= 350;
head[6]->netweight=1;
head[6]->cost=32;
head[6]->next=NULL;

j=0;

while(head[6]!=NULL)
            {
                cout<<j+1<<"."<<head[6]->name;
                head[6]=head[6]->next;
                j++;
            }
            break;


             case 8:
                head[7]=new product;
 strcpy(head[7]->name,"Tumbler");
strcpy(head[7]->mfg,"16-sep-2012");
strcpy(head[7]->exp,"30-mar-2025");
head[7]->pid="U700";
head[7]->st= 30;
head[7]->netweight=1;
head[7]->cost=42;
head[7]->next=(product*)malloc(sizeof(product));
head[7]=head[7]->next;
strcpy(head[7]->name,"Steel Plate");
strcpy(head[7]->mfg,"21-Feb-2011");
strcpy(head[7]->exp,"13-mar-2019");
head[7]->pid="U701";
head[7]->st= 40;
head[7]->netweight=1;
head[7]->cost=22;
head[7]->next=(product*)malloc(sizeof(product));
head[7]=head[7]->next;
strcpy(head[7]->name,"Cooker");
strcpy(head[7]->mfg,"16-sep-2012");
strcpy(head[7]->exp,"30-mar-2016");
head[7]->pid="U702";
head[7]->st= 50;
head[7]->netweight=4;
head[7]->cost=450;
head[7]->next=NULL;

 j=0;

while(head[7]!=NULL)
            {
                cout<<j+1<<"."<<head[7]->name;
                head[7]=head[7]->next;
                j++;
            }
            break;
             case 9:

                   head[8]=new product;
 strcpy(head[8]->name,"Lays");
strcpy(head[8]->mfg,"08-oct-2013");
strcpy(head[8]->exp,"30-feb-2014");
head[8]->pid="CH00";
head[8]->st= 250;
head[8]->netweight=10;
head[8]->cost=10;
head[8]->next=(product*)malloc(sizeof(product));
head[8]=head[8]->next;
strcpy(head[8]->name,"Bingo");
strcpy(head[8]->mfg,"08-oct-2013");
strcpy(head[8]->exp,"11-may-2014");
head[8]->pid="CH01";
head[8]->st= 450;
head[8]->netweight=10;
head[8]->cost=9;
head[8]->next=(product*)malloc(sizeof(product));
head[8]=head[8]->next;
strcpy(head[8]->name,"KidsFun");
strcpy(head[8]->mfg,"30-mar-2013");
strcpy(head[8]->exp,"28-feb-2014");
head[8]->pid="CH02";
head[8]->st= 650;
head[8]->netweight=7;
head[8]->cost=7;
head[8]->next=NULL;

j=0;

while(head[8]!=NULL)
            {
                cout<<j+1<<"."<<head[8]->name;
                head[8]=head[8]->next;
                j++;
            }
            break;

             case 10:
                  head[9]=new product;
 strcpy(head[9]->name,"cakes");
strcpy(head[9]->mfg,"08-oct-2013");
strcpy(head[9]->exp,"30-oct-2013");
head[9]->pid="BV300";
head[9]->st= 250;
head[9]->netweight=20;
head[9]->cost=150;
head[9]->next=(product*)malloc(sizeof(product));
head[9]=head[9]->next;
strcpy(head[9]->name,"cuttlet");
strcpy(head[9]->mfg,"28-jul-2013");
strcpy(head[9]->exp,"01-aug-2013");
head[9]->pid="BV301";
head[9]->st= 250;
head[9]->netweight=20;
head[9]->cost=80;
head[9]->next=(product*)malloc(sizeof(product));
head[9]=head[9]->next;
strcpy(head[9]->name,"…");
strcpy(head[9]->mfg,"08-oct-2013");
strcpy(head[9]->exp,"30-oct-2013");
head[9]->pid="BV302";
head[9]->st= 250;
head[9]->netweight=20;
head[9]->cost=150;
head[9]->next=NULL;

  j=0;

while(head[9]!=NULL)
            {
                cout<<j+1<<"."<<head[9]->name;
                head[9]=head[9]->next;
                j++;
            }
            break;
             case 11:

 head[10]=new product;
 strcpy(head[10]->name,"Oreo");
strcpy(head[10]->mfg,"18-mar-2013");
strcpy(head[10]->exp,"30-oct-2013");
head[10]->pid="BS900";
head[10]->st= 250;
head[10]->netweight=70;
head[10]->cost=20;
head[10]->next=(product*)malloc(sizeof(product));
head[10]=head[10]->next;
strcpy(head[10]->name,"Milk Bikies");
strcpy(head[10]->mfg,"10-dec-2013");
strcpy(head[10]->exp,"02-oct-2014");
head[10]->pid="BS901";
head[10]->st= 850;
head[10]->netweight=75;
head[10]->cost=10;
head[10]->next=(product*)malloc(sizeof(product));
head[10]=head[10]->next;
strcpy(head[10]->name,"Bourbon");
strcpy(head[10]->mfg,"14-may-2013");
strcpy(head[10]->exp,"12-Feb-2014");
head[10]->pid="BS902";
head[10]->st= 650;
head[10]->netweight=10;
head[10]->cost=20;
head[10]->next=NULL;
j=0;


                while(head[10]!=NULL)
            {
                cout<<j+1<<"."<<head[10]->name;
                head[10]=head[10]->next;
                j++;
            }
            break;


             case 12:


 head[11]=new product;
 strcpy(head[11]->name,"Shivaji");
strcpy(head[11]->mfg,"28-may-2013");
strcpy(head[11]->exp,"09-oct-2015");
head[11]->pid="R600";
head[11]->st= 250;
head[11]->netweight=5000;
head[11]->cost=1890;
head[11]->next=(product*)malloc(sizeof(product));
head[11]=head[11]->next;
strcpy(head[11]->name,"Krishna");
strcpy(head[11]->mfg,"05-jun-2012");
strcpy(head[11]->exp,"09-jul-2014");
head[11]->pid="R601";
head[11]->st= 150;
head[11]->netweight=5000;
head[11]->cost=1690;
head[11]->next=(product*)malloc(sizeof(product));
head[11]=head[11]->next;
strcpy(head[11]->name,"India Gate");
strcpy(head[11]->mfg,"11-aug-2013");
strcpy(head[11]->exp,"19-apr-2015");
head[11]->pid="R602";
head[11]->st= 250;
head[11]->netweight=5000;
head[11]->cost=2290;
head[11]->next=NULL;

  j=0;

while(head[11]!=NULL)
            {
                cout<<j+1<<"."<<head[11]->name;
                head[11]=head[11]->next;
                j++;
            }
            break;

             case 13:
                head[12]=new product;
 strcpy(head[12]->name,"Udayam");
strcpy(head[12]->mfg,"14-sep-2013");
strcpy(head[12]->exp,"29-nov-2014");
head[12]->pid="D700";
head[12]->st= 650;
head[12]->netweight=500;
head[12]->cost=50;
head[12]->next=(product*)malloc(sizeof(product));
head[12]=head[12]->next;

strcpy(head[12]->name,"i-sakhti");
strcpy(head[12]->mfg,"04-sep-2013");
strcpy(head[12]->exp,"29-apr-2014");
head[12]->pid="D701";
head[12]->st= 550;
head[12]->netweight=500;
head[12]->cost=80;
head[12]->next=(product*)malloc(sizeof(product));
head[12]=head[12]->next;
strcpy(head[12]->name,"NO1");
strcpy(head[12]->mfg,"13-jul-2013");
strcpy(head[12]->exp,"09-aug-2014");
head[12]->pid="D702";
head[12]->st= 350;
head[12]->netweight=500;
head[12]->cost=70;
head[12]->next=NULL;

 while(head[12]!=NULL)
            {
                cout<<j+1<<"."<<head[12]->name;
                head[12]=head[12]->next;
                j++;
            }
            break;

        case 14:

     head[13]=new product;
 strcpy(head[13]->name,"…..");
strcpy(head[13]->mfg,"14-sep-2013");
strcpy(head[13]->exp,"29-nov-2014");
head[13]->pid="SPE200";
head[13]->st= 650;
head[13]->netweight=500;
head[13]->cost=180;
head[13]->next=(product*)malloc(sizeof(product));
head[13]=head[13]->next;
strcpy(head[13]->name,"…..");
strcpy(head[13]->mfg,"25-aug-2013");
strcpy(head[13]->exp,"15-nov-2014");
head[13]->pid="SPE201";
head[13]->st= 450;
head[13]->netweight=500;
head[13]->cost=165;
head[13]->next=(product*)malloc(sizeof(product));
head[13]=head[13]->next;
strcpy(head[13]->name,"…..");
strcpy(head[13]->mfg,"30-mar-2012");
strcpy(head[13]->exp,"09-nov-2015");
head[13]->pid="SPE202";
head[13]->st= 250;
head[13]->netweight=500;
head[13]->cost=175;
head[13]->next=NULL;
j=0;

 while(head[13]!=NULL)
            {
                cout<<j+1<<"."<<head[13]->name;
                head[13]=head[13]->next;
                j++;
            }
            break;


}
            }while(ch!=15);
    }

};

int main()
{
  int ach,admin_code,ch,cash_ch,cash_code;
  char c=2;
  product e;
  e.set();
  cout<<"\t"<<"\t"<<"\t"<<c<<c<<c<<c<<c<<"EVERWIN SUPERMARKET"<<c<<c<<c<<c<<"\n";
  cout<<"\n"<<"\t"<<"Sellers of best quality  products";
  cout<<"\n"<<"MOTTO:"<<"Customer satisfaction is our treasure and pleasure";
  do
  {
      cout<<"\n"<<"1.Admin panel";
      cout<<"\n"<<"2.Cashier panel";
      cout<<"\n"<<"3.Customer panel";
      cout<<"\n"<<"Select your panel";
      cin>>ch;
      switch(ch)
      {
       case 1:
         rep:
         cout<<"\n"<<"Enter secret code";
         cin>>admin_code;
         if(admin_code==90952)
            cout<<"\n"<<c<<c<<"Welcome Admin!!"<<c<<c;
         else
         {


          cout<<"\n"<<"Wrong code..Try again";
          goto rep;
         }
          do
          {


          cout<<"\n"<<"\t"<<"\t"<<"\t"<<"1.View Customer history";
          cout<<"\n"<<"\t"<<"\t"<<"\t"<<"2.View product list";
          cout<<"\n"<<"\t"<<"\t"<<"\t"<<"3.Increase stock";
          cout<<"\n"<<"\t"<<"\t"<<"\t"<<"4.View customer feedback";
          cout<<"\n"<<"\t"<<"\t"<<"\t"<<"5.Discounts and offers";
          cout<<"\n"<<"\t"<<"\t"<<"\t"<<"6.Add new Product/Sub product";
            cout<<"\n"<<"\t"<<"\t"<<"\t"<<"6.Revenue Till now";
          cout<<"\n"<<"Press 0 to go back to panel menu!!";
          cin>>ach;
          switch(ach)
          {
           case 1:
              cout<<"\n"<<"Hi";


               break;
           case 2:
             cout<<"\n"<<"Hello";
             e.display1();

            break;


           case 3:
            cout<<"\n"<"How are you";
           case 0:
            cout<<"\n"<<"Bye admin!!";
            break;








           case 4:
            cout<<"\n"<<"I am fine";
            break;


           case 5:
              cout<<"\n"<<"Thank you";
              break;
              default:
             cout<<"\n"<<"Not a valid option";


          }
          }while(ach!=0);
          break;
           case 2:
                rep1:
             cout<<"\n"<<"Enter secret code";
             cin>>cash_code;
             if(cash_code==87456)
                cout<<"\n"<<"\t"<<"\t"<<c<<c<<c<<"Welcome cashier!!!";
             else
             {

                 cout<<"\n"<<"Wrong code...Try again";
                 goto rep1;

              }
              do
              {

              cout<<"\n"<<"What do you want do?";
              cout<<"\n"<<"1.Bill generation";
              cout<<"\n"<<"2.Exit to main menu";
              cin>>cash_ch;
              switch(cash_ch)
              {

              case 1:
                 cout<<"Hello";

                break;
              case 2:
                cout<<"\n"<<"Bye bye cashier!!!";
                break;
              default:
                  cout<<"\n"<<"Wrong option !!!";




              }

              }while(cash_ch!=2);
              break;











            default:cout<<"\n"<<"Wrong choice";
      }
  }while(ch!=6);
  return 0;
}

