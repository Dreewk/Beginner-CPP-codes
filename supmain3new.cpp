#include<iostream>
#include<vector>
#include<malloc.h>
#include<string.h>
#include<string>
#include<conio.h>
#include<fstream>
using namespace std;
class product
{
public:
     char name[20],mfg[20],exp[20];
     int st,netweight;
     float cost;
     char pid[20];
     float discount;


     product *next,*prev;
     product *head[14];
     vector <string> a,b,c2,d,e;


    void set()
    {
        int i;
        product *temp;

        head[0]=new product;
strcpy(head[0]->name,"Lacto Calamine");
strcpy(head[0]->mfg,"23-Jan-2012");
strcpy(head[0]->exp,"21-Nov-2013");
strcpy(head[0]->pid,"FP123");
head[0]->st=5;
head[0]->netweight=500;
head[0]->cost=53;
head[0]->discount=0;
head[0]->next=(product*)malloc(sizeof(product));
head[0]->prev=NULL;
temp=head[0];
head[0]=head[0]->next;
head[0]->prev=temp;

strcpy(head[0]->name,"Eva");
strcpy(head[0]->mfg,"15-aug-2010");
strcpy(head[0]->exp,"16-sep-2015");
strcpy(head[0]->pid,"FP124");
head[0]->st= 10;
head[0]->netweight=1000;
head[0]->cost=56;
head[0]->discount=0;
head[0]->next=(product*)malloc(sizeof(product));
temp=head[0];
head[0]=head[0]->next;
head[0]->prev=temp;

strcpy(head[0]->name,"Ponds");
strcpy(head[0]->mfg,"30-mar-2011");
strcpy(head[0]->exp,"01-may-2014");
strcpy(head[0]->pid,"FP125");
head[0]->st= 25 ;
head[0]->netweight=1000;
head[0]->cost=65;
head[0]->discount=0;
head[0]->next=NULL;
head[0]=head[0]->prev;
head[0]=head[0]->prev;


head[1]=new product;
 strcpy(head[1]->name,"Nivea");
strcpy(head[1]->mfg,"11-jan-2010");
strcpy(head[1]->exp,"30-sep-2014");
strcpy(head[1]->pid,"PF100");
head[1]->st= 11;
head[1]->netweight=500;
head[1]->cost=87;
head[1]->discount=0;
head[1]->next=(product*)malloc(sizeof(product));
head[1]->prev=NULL;
temp=head[1];
head[1]=head[1]->next;
head[1]->prev=temp;

strcpy(head[1]->name,"AXE");
strcpy(head[1]->mfg,"31-dec-2012");
strcpy(head[1]->exp,"16-sep-2014");
strcpy(head[1]->pid,"PF101");
head[1]->st= 17;
head[1]->netweight=500;
head[1]->cost=113;
head[1]->discount=0;
head[1]->next=(product*)malloc(sizeof(product));
temp=head[1];
head[1]=head[1]->next;
head[1]->prev=temp;

strcpy(head[1]->name,"Sprinz");
strcpy(head[1]->mfg,"30-mar-2011");
strcpy(head[1]->exp,"01-may-2014");
strcpy(head[1]->pid,"PF102");
head[1]->st= 25 ;
head[1]->netweight=500;
head[1]->cost=108;
head[1]->discount=0;
temp=head[1];
head[1]->next=NULL;
head[1]=head[1]->prev;
head[1]=head[1]->prev;



head[2]=new product;
 strcpy(head[2]->name,"Parachute");
strcpy(head[2]->mfg,"11-jan-2012");
strcpy(head[2]->exp,"30-apr-2015");
strcpy(head[2]->pid,"O100");
head[2]->st= 36;
head[2]->netweight=500;
head[2]->cost=87;
head[2]->discount=0;
head[2]->next=(product*)malloc(sizeof(product));
head[2]->prev=NULL;
temp=head[2];
head[2]=head[2]->next;
head[2]->prev=temp;

strcpy(head[2]->name,"Fairawsome");
strcpy(head[2]->mfg,"05-jun-2012");
strcpy(head[2]->exp,"30-dec-2014");
strcpy(head[2]->pid,"O101");
head[2]->st= 23;
head[2]->netweight=500;
head[2]->cost=56;
head[2]->discount=0;
head[2]->next=(product*)malloc(sizeof(product));
temp=head[2];
head[2]=head[2]->next;
head[2]->prev=temp;

strcpy(head[2]->name,"VVD oil");
strcpy(head[2]->mfg,"15-jul-2011");
strcpy(head[2]->exp,"30-dec-2013");
strcpy(head[2]->pid,"O102");
head[2]->st= 46;
head[2]->netweight=500;
head[2]->cost=76;
head[2]->discount=0;
head[2]->next=NULL;
head[2]=head[2]->prev;
head[2]=head[2]->prev;



head[3]=new product;
 strcpy(head[3]->name,"Tomato");
strcpy(head[3]->mfg,"11-jan-2013");
strcpy(head[3]->exp,"14-jan-2013");
strcpy(head[3]->pid,"V200");
head[3]->st= 100;
head[3]->netweight=1000;
head[3]->cost=48;
head[3]->discount=0;
head[3]->next=(product*)malloc(sizeof(product));
head[3]->prev=NULL;
temp=head[3];
head[3]=head[3]->next;
head[3]->prev=temp;

strcpy(head[3]->name,"Onion");
strcpy(head[3]->mfg,"30-jun-2013");
strcpy(head[3]->exp,"02-jul-2013");
strcpy(head[3]->pid,"V201");
head[3]->st= 250;
head[3]->netweight=1000;
head[3]->cost=36;
head[3]->discount=0;
head[3]->next=(product*)malloc(sizeof(product));
temp=head[3];
head[3]=head[3]->next;
head[3]->prev=temp;

strcpy(head[3]->name,"Beans");
strcpy(head[3]->mfg,"30-jun-2013");
strcpy(head[3]->exp,"02-jul-2013");
strcpy(head[3]->pid,"V202");
head[3]->st= 110;
head[3]->netweight=1000;
head[3]->cost=28;
head[3]->discount=0;
head[3]->next=NULL;
head[3]=head[3]->prev;
head[3]=head[3]->prev;



head[4]=new product;
 strcpy(head[4]->name,"Apple");
strcpy(head[4]->mfg,"25-jan-2013");
strcpy(head[4]->exp,"30-jan-2013");
strcpy(head[4]->pid,"F300");
head[4]->st= 100;
head[4]->netweight=1000;
head[4]->cost=150;
head[4]->discount=0;
head[4]->prev=NULL;
head[4]->next=(product*)malloc(sizeof(product));
temp=head[4];
head[4]=head[4]->next;
head[4]->prev=temp;

strcpy(head[4]->name,"Banana");
strcpy(head[4]->mfg,"20-jan-2013");
strcpy(head[4]->exp,"30-jan-2013");
strcpy(head[4]->pid,"F301");
head[4]->st= 400;
head[4]->netweight=1000;
head[4]->cost=58;
head[4]->discount=0;
head[4]->next=(product*)malloc(sizeof(product));
temp=head[4];
head[4]=head[4]->next;
head[4]->prev=temp;

strcpy(head[4]->name,"Pineapple");
strcpy(head[4]->mfg,"15-jan-2013");
strcpy(head[4]->exp,"30-jan-2013");
strcpy(head[4]->pid,"F302");
head[4]->st= 100;
head[4]->netweight=1000;
head[4]->cost=80;
head[4]->discount=0;
head[4]->next=NULL;
head[4]=head[4]->prev;
head[4]=head[4]->prev;


head[5]=new product;
strcpy(head[5]->name,"Cinthol");
strcpy(head[5]->mfg,"25-Dec-2013");
strcpy(head[5]->exp,"30-nov-2015");
strcpy(head[5]->pid,"SP500");
head[5]->st= 60;
head[5]->netweight=100;
head[5]->cost=31;
head[5]->discount=0;
head[5]->next=(product*)malloc(sizeof(product));
head[5]->prev=NULL;
temp=head[5];
head[5]=head[5]->next;
head[5]->prev=temp;

strcpy(head[5]->name,"Johnson & Johnson");
strcpy(head[5]->mfg,"01-apr-2013");
strcpy(head[5]->exp,"30-may-2015");
strcpy(head[5]->pid,"SP501");
head[5]->st= 100;
head[5]->netweight=100;
head[5]->cost=65;
head[5]->discount=0;
head[5]->next=(product*)malloc(sizeof(product));
temp=head[5];
head[5]=head[5]->next;
head[5]->prev=temp;

strcpy(head[5]->name,"Pears");
strcpy(head[5]->mfg,"11-mar-2013");
strcpy(head[5]->exp,"10-aug-2015");
strcpy(head[5]->pid,"SP502");
head[5]->st= 80;
head[5]->netweight=100;
head[5]->cost=75;
head[5]->discount=0;
head[5]->next=NULL;
head[5]=head[5]->prev;
head[5]=head[5]->prev;


head[6]=new product;
strcpy(head[6]->name,"Diamond");
strcpy(head[6]->mfg,"25-Dec-2013");
strcpy(head[6]->exp,"30-nov-2015");
strcpy(head[6]->pid,"BM300");
head[6]->st= 60;
head[6]->netweight=5;
head[6]->cost=72;
head[6]->discount=0;
head[6]->next=(product*)malloc(sizeof(product));
head[6]->prev=NULL;
temp=head[6];
head[6]=head[6]->next;
head[6]->prev=temp;

strcpy(head[6]->name,"Royal mug");
strcpy(head[6]->mfg,"12-SEP-2010");
strcpy(head[6]->exp,"30-jun-2018");
strcpy(head[6]->pid,"BM301");
head[6]->st= 45;
head[6]->netweight=2;
head[6]->cost=25;
head[6]->discount=0;
head[6]->next=(product*)malloc(sizeof(product));
temp=head[6];
head[6]=head[6]->next;
head[6]->prev=temp;

strcpy(head[6]->name,"Challenger bucket");
strcpy(head[6]->mfg,"25-Dec-2010");
strcpy(head[6]->exp,"30-nov-2025");
strcpy(head[6]->pid,"BM302");
head[6]->st= 350;
head[6]->netweight=1;
head[6]->cost=32;
head[6]->discount=0;
head[6]->next=NULL;
head[6]=head[6]->prev;
head[6]=head[6]->prev;


head[7]=new product;
 strcpy(head[7]->name,"Tumbler");
strcpy(head[7]->mfg,"16-sep-2012");
strcpy(head[7]->exp,"30-mar-2025");
strcpy(head[7]->pid,"U700");
head[7]->st= 30;
head[7]->netweight=1;
head[7]->cost=42;
head[7]->discount=0;
head[7]->next=(product*)malloc(sizeof(product));
head[7]->prev=NULL;
temp=head[7];
head[7]=head[7]->next;
head[7]->prev=temp;

strcpy(head[7]->name,"Steel Plate");
strcpy(head[7]->mfg,"21-Feb-2011");
strcpy(head[7]->exp,"13-mar-2019");
strcpy(head[7]->pid,"U701");
head[7]->st= 40;
head[7]->netweight=1;
head[7]->cost=22;
head[7]->discount=0;
head[7]->next=(product*)malloc(sizeof(product));
temp=head[7];
head[7]=head[7]->next;
head[7]->prev=temp;

strcpy(head[7]->name,"Cooker");
strcpy(head[7]->mfg,"16-sep-2012");
strcpy(head[7]->exp,"30-mar-2016");
strcpy(head[7]->pid,"U702");
head[7]->st= 50;
head[7]->netweight=4;
head[7]->cost=450;
head[7]->discount=0;
head[7]->next=NULL;
head[7]=head[7]->prev;
head[7]=head[7]->prev;


 head[8]=new product;
 strcpy(head[8]->name,"Lays");
strcpy(head[8]->mfg,"08-oct-2013");
strcpy(head[8]->exp,"30-feb-2014");
strcpy(head[8]->pid,"CH00");
head[8]->st= 250;
head[8]->netweight=10;
head[8]->cost=10;
head[8]->discount=0;
head[8]->next=(product*)malloc(sizeof(product));
head[8]->prev=NULL;
temp=head[8];
head[8]=head[8]->next;
head[8]->prev=temp;

strcpy(head[8]->name,"Bingo");
strcpy(head[8]->mfg,"08-oct-2013");
strcpy(head[8]->exp,"11-may-2014");
strcpy(head[8]->pid,"CH01");
head[8]->st= 450;
head[8]->netweight=10;
head[8]->cost=9;
head[8]->discount=0;
head[8]->next=(product*)malloc(sizeof(product));
temp=head[8];
head[8]=head[8]->next;
head[8]->prev=temp;

strcpy(head[8]->name,"KidsFun");
strcpy(head[8]->mfg,"30-mar-2013");
strcpy(head[8]->exp,"28-feb-2014");
strcpy(head[8]->pid,"CH02");
head[8]->st= 650;
head[8]->netweight=7;
head[8]->cost=7;
head[8]->discount=0;
head[8]->next=NULL;
head[8]=head[8]->prev;
head[8]=head[8]->prev;


 head[9]=new product;
 strcpy(head[9]->name,"cakes");
strcpy(head[9]->mfg,"08-oct-2013");
strcpy(head[9]->exp,"30-oct-2013");
strcpy(head[9]->pid,"BV300");
head[9]->st= 250;
head[9]->netweight=20;
head[9]->cost=150;
head[9]->discount=0;
head[9]->next=(product*)malloc(sizeof(product));
head[9]->prev=NULL;
temp=head[9];
head[9]=head[9]->next;
head[9]->prev=temp;

strcpy(head[9]->name,"cuttlet");
strcpy(head[9]->mfg,"28-jul-2013");
strcpy(head[9]->exp,"01-aug-2013");
strcpy(head[9]->pid,"BV301");
head[9]->st= 250;
head[9]->netweight=20;
head[9]->cost=80;
head[9]->discount=0;
head[9]->next=(product*)malloc(sizeof(product));
temp=head[9];
head[9]=head[9]->next;
head[9]->prev=temp;

strcpy(head[9]->name,"Cola");
strcpy(head[9]->mfg,"08-oct-2013");
strcpy(head[9]->exp,"30-oct-2013");
strcpy(head[9]->pid,"BV302");
head[9]->st= 250;
head[9]->netweight=20;
head[9]->cost=150;
head[9]->discount=0;
head[9]->next=NULL;
head[9]=head[9]->prev;
head[9]=head[9]->prev;


 head[10]=new product;
 strcpy(head[10]->name,"Oreo");
strcpy(head[10]->mfg,"18-mar-2013");
strcpy(head[10]->exp,"30-oct-2013");
strcpy(head[10]->pid,"BS900");
head[10]->st= 250;
head[10]->netweight=70;
head[10]->cost=20;
head[10]->discount=0;
head[10]->next=(product*)malloc(sizeof(product));
head[10]->prev=NULL;
temp=head[10];
head[10]=head[10]->next;
head[10]->prev=temp;

strcpy(head[10]->name,"Milk Bikies");
strcpy(head[10]->mfg,"10-dec-2013");
strcpy(head[10]->exp,"02-oct-2014");
strcpy(head[10]->pid,"BS901");
head[10]->st= 850;
head[10]->netweight=75;
head[10]->cost=10;
head[10]->discount=0;
head[10]->next=(product*)malloc(sizeof(product));
temp=head[10];
head[10]=head[10]->next;
head[10]->prev=temp;

strcpy(head[10]->name,"Bourbon");
strcpy(head[10]->mfg,"14-may-2013");
strcpy(head[10]->exp,"12-Feb-2014");
strcpy(head[10]->pid,"BS902");
head[10]->st= 650;
head[10]->netweight=10;
head[10]->cost=20;
head[10]->discount=0;
head[10]->next=NULL;
head[10]=head[10]->prev;
head[10]=head[10]->prev;


 head[11]=new product;
 strcpy(head[11]->name,"Shivaji");
strcpy(head[11]->mfg,"28-may-2013");
strcpy(head[11]->exp,"09-oct-2015");
strcpy(head[11]->pid,"R600");
head[11]->st= 250;
head[11]->netweight=5000;
head[11]->cost=1890;
head[11]->discount=0;
head[11]->next=(product*)malloc(sizeof(product));
head[11]->prev=NULL;
temp=head[11];
head[11]=head[11]->next;
head[11]->prev=temp;

strcpy(head[11]->name,"Krishna");
strcpy(head[11]->mfg,"05-jun-2012");
strcpy(head[11]->exp,"09-jul-2014");
strcpy(head[11]->pid,"R601");
head[11]->st= 150;
head[11]->netweight=5000;
head[11]->cost=1690;
head[11]->discount=0;
head[11]->next=(product*)malloc(sizeof(product));
temp=head[11];
head[11]=head[11]->next;
head[11]->prev=temp;

strcpy(head[11]->name,"India Gate");
strcpy(head[11]->mfg,"11-aug-2013");
strcpy(head[11]->exp,"19-apr-2015");
strcpy(head[11]->pid,"R602");
head[11]->st= 250;
head[11]->netweight=5000;
head[11]->cost=2290;
head[11]->discount=0;
head[11]->next=NULL;
head[11]=head[11]->prev;
head[11]=head[11]->prev;


 head[12]=new product;
 strcpy(head[12]->name,"Udayam");
strcpy(head[12]->mfg,"14-sep-2013");
strcpy(head[12]->exp,"29-nov-2014");
strcpy(head[12]->pid,"D700");
head[12]->st= 650;
head[12]->netweight=500;
head[12]->cost=50;
head[12]->discount=0;
head[12]->next=(product*)malloc(sizeof(product));
head[12]->prev=NULL;
temp=head[12];
head[12]=head[12]->next;
head[12]->prev=temp;


strcpy(head[12]->name,"i-sakhti");
strcpy(head[12]->mfg,"04-sep-2013");
strcpy(head[12]->exp,"29-apr-2014");
strcpy(head[12]->pid,"D701");
head[12]->st= 550;
head[12]->netweight=500;
head[12]->cost=80;
head[12]->discount=0;
head[12]->next=(product*)malloc(sizeof(product));
temp=head[12];
head[12]=head[12]->next;
head[12]->prev=temp;

strcpy(head[12]->name,"NO1");
strcpy(head[12]->mfg,"13-jul-2013");
strcpy(head[12]->exp,"09-aug-2014");
strcpy(head[12]->pid,"D702");
head[12]->st= 350;
head[12]->netweight=500;
head[12]->cost=70;
head[12]->discount=0;
head[12]->next=NULL;
head[12]=head[12]->prev;
head[12]=head[12]->prev;


 head[13]=new product;
 strcpy(head[13]->name,"Tata Salt");
strcpy(head[13]->mfg,"14-sep-2013");
strcpy(head[13]->exp,"29-nov-2014");
strcpy(head[13]->pid,"SPE200");
head[13]->st= 650;
head[13]->netweight=500;
head[13]->cost=180;
head[13]->discount=0;
head[13]->prev=NULL;
head[13]->next=(product*)malloc(sizeof(product));
temp=head[13];
head[13]=head[13]->next;
head[13]->prev=temp;

strcpy(head[13]->name,"Cardamom powder");
strcpy(head[13]->mfg,"25-aug-2013");
strcpy(head[13]->exp,"15-nov-2014");
strcpy(head[13]->pid,"SPE201");
head[13]->st= 450;
head[13]->netweight=500;
head[13]->cost=165;
head[13]->discount=0;
head[13]->next=(product*)malloc(sizeof(product));
temp=head[13];
head[13]=head[13]->next;
head[13]->prev=temp;

strcpy(head[13]->name,"Turmeric powder");
strcpy(head[13]->mfg,"30-mar-2012");
strcpy(head[13]->exp,"09-nov-2015");
strcpy(head[13]->pid,"SPE202");
head[13]->st= 250;
head[13]->netweight=500;
head[13]->cost=175;
head[13]->discount=0;
head[13]->next=NULL;
head[13]=head[13]->prev;
head[13]=head[13]->prev;





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




    void add()
    {
        int cat,stock,nw;
        float cost1;
        product *temp;
        char name1[20],mfg1[20],exp1[20],pid1[20];
        categ:
        cout<<"\n"<<"Enter category";
        cin>>cat;
        if(cat>0 && cat<15)
        {


        while(1)
        {
            if(head[cat-1]->next==NULL)
            break;
            head[cat-1]=head[cat-1]->next;

        }
        temp=head[cat-1];
        head[cat-1]->next=new product;
        head[cat-1]=head[cat-1]->next;
        head[cat-1]->prev=temp;
        cout<<"\n"<<"Product id:";
        cin>>pid1;
        cout<<"\n"<<"Product name:";
        cin>>name1;
        cout<<"\n"<<"Mfg date:";
        cin>>mfg1;
        cout<<"\n"<<"Expiry date:";
        cin>>exp1;
        cout<<"\n"<<"Cost:";
        cin>>cost1;
        cout<<"\n"<<"Net weight:";
        cin>>nw;
        cout<<"\n"<<"Stock:";
        cin>>stock;
        strcpy(head[cat-1]->name,name1);
        strcpy(head[cat-1]->pid,pid1);
        head[cat-1]->cost=cost1;
        head[cat-1]->netweight=nw;
        strcpy(head[cat-1]->mfg,mfg1);
        strcpy(head[cat-1]->exp,exp1);
        head[cat-1]->st=stock;
        head[cat-1]->cost=cost1;
        head[cat-1]->next=NULL;
        cout<<"\n"<<"Product successfully added";
         while(1)
           {
                if(head[cat-1]->prev==NULL)
                break;
                else
                head[cat-1]=head[cat-1]->prev;
          }



        }
        else
        {
            cout<<"\n"<<"Wrong category";
            goto categ;
        }
    }

    void manipulate()
    {
        int r,c,am;
        float dis,cst;
        char  id[20];
        do

        {
        cout<<"\n"<<"1.Increase stock"<<"\n"<<"2.Add discount"<<"\n"<<"3.Change the cost"<<"\n"<<"4.Exit";
        cout<<"\n"<<"What do you want to do?";
        cin>>r;
        switch(r)
        {
            case 1:
                take:
            cout<<"\n"<<"Enter category";
            cin>>c;
            if(c>0 && c<15)
            {
                ideone:
                cout<<"\n"<<"Enter product id";

                cin>>id;
                while(strcmp(head[c-1]->pid,id)!=0)
                {
                  head[c-1]=head[c-1]->next;
                  if(strcmp(head[c-1]->pid,id)!=0 && head[c-1]->next==NULL)
                  {
                      cout<<"\n"<<"Wrong product-id";


                       while(1)
           {
                if(head[c-1]->prev==NULL)
                break;
                else
                head[c-1]=head[c-1]->prev;
          }
                  goto ideone;
                  }


                }
                cout<<"\n"<<"Enter quantity";
                cin>>am;
                head[c-1]->st+=am;
                cout<<"\n"<<"Stock is increased successfullly";
                while(1)
           {
                if(head[c-1]->prev==NULL)
                break;
                else
                head[c-1]=head[c-1]->prev;
          }

            }
            else{
                cout<<"\n"<<"Wrong category";
                goto take;
            }
            break;
            case 2:
                 take1:
            cout<<"\n"<<"Enter category";
            cin>>c;
            if(c>0 && c<15)
            {
                ideone1:
                cout<<"\n"<<"Enter product id";

                cin>>id;
                while(strcmp(head[c-1]->pid,id)!=0)
                {
                  head[c-1]=head[c-1]->next;
                  if(strcmp(head[c-1]->pid,id)!=0 && head[c-1]->next==NULL)
                  {
                      cout<<"\n"<<"Wrong product-id";
                       while(1)
           {
                if(head[c-1]->prev==NULL)
                break;
                else
                head[c-1]=head[c-1]->prev;
          }
                      goto ideone1;
                  }


                }
                cout<<"\n"<<"Enter discount percentage";
                cin>>dis;
                head[c-1]->discount=dis;
                head[c-1]->cost-=(float)(head[c-1]->cost)*dis/100.0;
                cout<<"\n"<<"Discount Added successfully";
                while(1)
           {
                if(head[c-1]->prev==NULL)
                break;
                else
                head[c-1]=head[c-1]->prev;
          }
            }
            else
            {
                cout<<"\n"<<"Wrong category";
                goto take1;
            }
            break;
            case 3:
                 take2:
            cout<<"\n"<<"Enter category";
            cin>>c;
            if(c>0 && c<15)
            {
                ideone2:
                cout<<"\n"<<"Enter product id";

                cin>>id;
                while(strcmp(head[c-1]->pid,id)!=0)
                {
                  head[c-1]=head[c-1]->next;
                  if(strcmp(head[c-1]->pid,id)!=0 && head[c-1]->next==NULL)
                  {
                      cout<<"\n"<<"Wrong product-id";

                       while(1)
           {
                if(head[c-1]->prev==NULL)
                break;
                else
                head[c-1]=head[c-1]->prev;
          }
             goto ideone2;
                  }


                }
                cout<<"\n"<<"Enter the new cost";
                cin>>cst;
                head[c-1]->cost=cst-(float)(cst*head[c-1]->discount/100.0);
                while(1)
           {
                if(head[c-1]->prev==NULL)
                break;
                else
                head[c-1]=head[c-1]->prev;
          }
            }
            else
            {
                cout<<"\n"<<"Wrong category";
                goto take2;
            }
                break;
            case 4:
                cout<<"\n"<<"Quitting to admin menu....";
                break;
            default:
                cout<<"\n"<<"Wrong option";
        }
    }while(r!=4);
    }

    void display1()
    {

    int i,ch,n,j,k=1;


            cout<<"\n"<<"CATEGORIES:";
            cout<<"\n"<<"a).COSMETICS"<<"\n";
            for(i=0;i<3;i++)
            cout<<"\t"<<"\t"<<'\n'<<k++<<"."<<a[i];

            cout<<"\n"<<"(b).VEGETABLES AND FRUITS"<<"\n";
            for(i=0;i<2;i++)
            cout<<"\t"<<"\t"<<'\n'<<k++<<"."<<b[i];

            cout<<"\n"<<"(c).HOUSEHOLD AND COOKING ITEMS"<<"\n";
            for(i=0;i<3;i++)
            cout<<"\t"<<"\t"<<'\n'<<k++<<"."<<c2[i];

            cout<<"\n"<<"(d).EATABLES"<<"\n";
            for(i=0;i<3;i++)
            cout<<"\t"<<'\n'<<k++<<"."<<d[i];

            cout<<"\n"<<"(e).PROVISIONS"<<"\n";
            for(i=0;i<3;i++)
            cout<<"\t"<<"\t"<<'\n'<<k++<<"."<<e[i];

             hello:
            cout<<"Select category";

            cin>>ch;


            j=0;
            if(ch<15 && ch>0)
            {


            while(1)
            {
                cout<<"\n";
                cout<<j+1<<"."<<head[ch-1]->name;
                cout<<"\n"<<head[ch-1]->cost<<"\n"<<head[ch-1]->st<<"\n";
                if(head[ch-1]->next==NULL)
                break;
                else
                head[ch-1]=head[ch-1]->next;
                j++;
            }

              while(1)
           {
                if(head[ch-1]->prev==NULL)
                break;
                else
                head[ch-1]=head[ch-1]->prev;
          }

            }
            else

            {
                cout<<"\n"<<"Wrong category";
                goto hello;

            }









}
 void del2()
    {
        product *temp;
        int c3;
        char id3[20];
        take4:
         cout<<"\n"<<"Enter category";
            cin>>c3;
            if(c3>0 && c3<15)
            {
                ideone4:
                cout<<"\n"<<"Enter product id";

                cin>>id3;
                while(strcmp(head[c3-1]->pid,id3)!=0)
                {
                  head[c3-1]=head[c3-1]->next;
                  if(strcmp(head[c3-1]->pid,id3)!=0 && head[c3-1]->next==NULL)
                  {
                      cout<<"\n"<<"Wrong product-id";


                       while(1)
           {
                if(head[c3-1]->prev==NULL)
                break;
                else
                head[c3-1]=head[c3-1]->prev;
          }
                    goto ideone4;
                  }
                }
                     if(head[c3-1]->prev!=NULL && head[c3-1]->next!=NULL)
                     {


                     head[c3-1]->prev->next=head[c3-1]->next;
                     head[c3-1]->next->prev=head[c3-1]->prev;
                     free(head[c3-1]);
                     while(1)
           {
                if(head[c3-1]->prev==NULL)
                break;
                else
                head[c3-1]=head[c3-1]->prev;
          }
                     }
                     else if(head[c3-1]->prev==NULL && head[c3-1]->next!=NULL)
                     {
                         temp=head[c3-1];

                         head[c3-1]=head[c3-1]->next;
                         head[c3-1]->prev=NULL;
                         free(temp);


                     }
                     else if(head[c3-1]->next==NULL && head[c3-1]->prev!=NULL)
                     {
                         temp=head[c3-1];

                         head[c3-1]=head[c3-1]->prev;
                         head[c3-1]->next=NULL;
                         free(temp);
                         while(1)
           {
                if(head[c3-1]->prev==NULL)
                break;
                else
                head[c3-1]=head[c3-1]->prev;
          }
                     }

                }
                else
                {

                    cout<<"\n"<<"Wrong category";
                    goto take4;
                }



            }

};
class cust : public product
{


    public:
    char name[20];
    int prod;
    float amt;
    cust *next;
    cust *plink;
void set1()
{
    plink=new cust;
    strcpy(plink->name,"Selvam");
    plink->prod=5;
    plink->amt=200;
    plink->next=NULL;
    head[0]->st--;
}

void display2()
{
    while(1)
    {
        cout<<plink->name;
        if(plink->next==NULL)
        break;
        plink=plink->next;
    }
}
void bill()
{


}


};
int main()
{
  int ach,ch,cash_ch,i,k;
  FILE *fp;
  string admin_code="",cash_code="",cust_code="";
  char c=2,p,o;
  product e;
  cust f;
  e.set();
  f.set();
  f.set1();
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
          p = _getch();
          while(p != 13){//character 13 is enter
          admin_code.push_back(p);
          cout << '*';
          p= _getch();
   }


         if(admin_code=="admin")
         {
            admin_code="";

            cout<<"\n"<<c<<c<<"Welcome Admin!!"<<c<<c;
         }
         else
         {


          cout<<"\n"<<"Wrong code..Try again";
          admin_code="";
          goto rep;
         }
          do
          {

          menu:

          cout<<"\n"<<"\t"<<"\t"<<"\t"<<"1.View Customer history";
          cout<<"\n"<<"\t"<<"\t"<<"\t"<<"2.View product list";
          cout<<"\n"<<"\t"<<"\t"<<"\t"<<"3.Manipulate product ";
          cout<<"\n"<<"\t"<<"\t"<<"\t"<<"4.View customer feedback";
          cout<<"\n"<<"\t"<<"\t"<<"\t"<<"5.Delete a product ";
          cout<<"\n"<<"\t"<<"\t"<<"\t"<<"6.Add new Product";
            cout<<"\n"<<"\t"<<"\t"<<"\t"<<"7.Revenue Till now";
          cout<<"\n"<<"Press 0 to go back to panel menu!!";
          cin>>ach;
          switch(ach)
          {
           case 1:
              cout<<"\n"<<"Hi";


               break;
           case 2:
             cout<<"\n"<<"Hello";
             f.display1();
             goto menu;

            break;


           case 3:
              f.manipulate();
              break;
           case 0:
            cout<<"\n"<<"Bye admin!!";
            break;








           case 4:
            cout<<"\n"<<"Customer feedback:";
            fp=fopen("hello.txt","r");
            o=getc(fp);
            while(o!=EOF)
            {
                putchar(o);
                o=getc(fp);
            }
              fclose(fp);


            break;


           case 5:
                f.del2();
              break;
           case 6:
               f.add();
               break;
              default:
             cout<<"\n"<<"Not a valid option";


          }
          }while(ach!=0);
          break;
           case 2:
                rep1:
             cout<<"\n"<<"Enter secret code";
               while(p != 13){//character 13 is enter
          cash_code.push_back(p);
          cout << '*';
          p= _getch();
   }
             if(cash_code=="cashier")
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
              cout<<"\n"<<"2.View product list";
              cout<<"\n"<<"3.Exit to main menu";
              cin>>cash_ch;
              switch(cash_ch)
              {

              case 1:
                 f.bill();

                break;
              case 2:
                f.display1();
                break;
               case 3:cout<<"\n"<<"Bye!!";
               break;
              default:
                  cout<<"\n"<<"Wrong option !!!";




              }

              }while(cash_ch!=3);
              break;

             case 3:

            do
              {

              cout<<"\n"<<"What do you want do?";
              cout<<"\n"<<"1.View product list";
              cout<<"\n"<<"2.Give feedback";
              cout<<"\n"<<"3.View history";
              cout<<"\n"<<"4.Exit";
              cin>>cash_ch;
              switch(cash_ch)
              {

              case 1:
                 f.display1();

                break;
              case 2:
                cout<<"\n"<<"Enter your feedback here!!!";


                break; fp=fopen("hello.txt","a");
                o=getchar();
                while(o!='#')
                {
                    putc(o,fp);
                    o=getchar();
                }
                fclose(fp);


               case 3:cout<<"History is";
               f.display1();
               break;
                case 4: cout<<"\n"<<"Bye";
               break;
              default:
                  cout<<"\n"<<"Wrong option !!!";




              }

              }while(cash_ch!=4);
              break;









            default:cout<<"\n"<<"Wrong choice";
      }
  }while(ch!=6);
  return 0;
}

