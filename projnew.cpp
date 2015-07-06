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
     char name[20],mfg[20],exp[20]; //class data members of product
     int st,netweight;
     float cost;
     char pid[20];
     float discount;

     product *next,*prev; //class within class having same data members
     product *head[14];
     vector <string> a,b,c2,d,e;
    void set3()        //function for creating product linked list
    {
        int i;
        product *temp;
           // linklist creation for 14 categories. Each categories has 3+ nodes with details
        head[0]=new product;
        strcpy(head[0]->name,"Lacto Calamine");
        strcpy(head[0]->mfg,"23-Jan-2012");
        strcpy(head[0]->exp,"21-Nov-2013");
        strcpy(head[0]->pid,"FP12");
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
        strcpy(head[0]->pid,"FP13");
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
        strcpy(head[0]->pid,"FP14");
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
strcpy(head[1]->pid,"PF10");
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
strcpy(head[1]->pid,"PF11");
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
strcpy(head[1]->pid,"PF12");
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
strcpy(head[5]->pid,"SP50");
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
strcpy(head[5]->pid,"SP51");
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
strcpy(head[5]->pid,"SP52");
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
strcpy(head[6]->pid,"BM30");
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
strcpy(head[6]->pid,"BM31");
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
strcpy(head[6]->pid,"BM32");
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
strcpy(head[9]->pid,"BV30");
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
strcpy(head[9]->pid,"BV31");
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
strcpy(head[9]->pid,"BV32");
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
strcpy(head[10]->pid,"BS90");
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
strcpy(head[10]->pid,"BS91");
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
strcpy(head[10]->pid,"BS92");
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
strcpy(head[13]->pid,"SPE1");
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
strcpy(head[13]->pid,"SPE2");
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
strcpy(head[13]->pid,"SPE3");
head[13]->st= 250;
head[13]->netweight=500;
head[13]->cost=175;
head[13]->discount=0;
head[13]->next=NULL;
head[13]=head[13]->prev;
head[13]=head[13]->prev;
                            //storing category name in the array
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

    void add() //adding a new category to the linked list
    {
        int cat,stock,nw;
        float cost1;
        product *temp;
        char name1[20],mfg1[20],exp1[20],pid1[20];
        categ:
        cout<<"\n\n"<<"Enter category to which product to be added:";
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
        cout<<"\n"<<"Product new id:";  //input the product details
        cin>>pid1;
        cout<<"\n"<<"Product new name:";
        cin>>name1;
        cout<<"\n"<<"Mfg date:";
        cin>>mfg1;
        cout<<"\n"<<"Expiry date:";
        cin>>exp1;
        cout<<"\n"<<"Cost:Rs.";
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
        cout<<"\n\t\t"<<"New Product successfully added to the product list\n";
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
            cout<<"\n"<<"Wrong category!!!\n";
            goto categ;
        }
    }

    void manipulate()  //manipulation of the product linked list
    {
        int r,c,am;
        float dis,cst;
        char  id[20];
        do

        {
        cout<<"\n\t\t\t"<<"1.Increase stock"<<"\n\t\t\t"<<"2.Add discount"<<"\n\t\t\t"<<"3.Change the cost"<<"\n\t\t\t"<<"4.Back";
        cout<<"\n"<<"What do you want to do?...";
        cin>>r;
        switch(r)
        {
            case 1:
                take:
            cout<<"\n"<<"Enter category:";
            cin>>c;
            if(c>0 && c<15)
            {
                ideone:
                cout<<"\n"<<"Enter product id:";
                cin>>id;
                while(strcmp(head[c-1]->pid,id)!=0)
                {
                  head[c-1]=head[c-1]->next;
                  if(strcmp(head[c-1]->pid,id)!=0 && head[c-1]->next==NULL)
                  {
                      cout<<"\n\t\t\t"<<"Wrong product-id!!!";
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
                cout<<"\n"<<"Enter stock quantity...";
                cin>>am;
                head[c-1]->st+=am;
                cout<<"\n\t\t\t"<<"Stock is increased successfully...\n\n";
                while(1)
                 {
                    if(head[c-1]->prev==NULL)
                        break;
                    else
                        head[c-1]=head[c-1]->prev;
                 }

            }
            else{
                cout<<"\n\t\t\t"<<"Wrong category!!!";
                goto take;
                }
            break;
        case 2:
            take1:
            cout<<"\n"<<"Enter category:";
            cin>>c;
            if(c>0 && c<15)
            {
                ideone1:
                cout<<"\n"<<"Enter product id:";

                cin>>id;
                while(strcmp(head[c-1]->pid,id)!=0)
                {
                  head[c-1]=head[c-1]->next;
                  if(strcmp(head[c-1]->pid,id)!=0 && head[c-1]->next==NULL)
                  {
                      cout<<"\n\t\t\t"<<"Wrong product-id!!!";
                       while(1)
                         {
                             if(head[c-1]->prev==NULL)
                                 break;
                             else
                                 head[c-1]=head[c-1]->prev;
                         }
                      goto ideone1;
                  }


                }              //adding discount offer to the product
                cout<<"\n"<<"Enter discount percentage:";
                cin>>dis;
                head[c-1]->discount=dis;
                head[c-1]->cost-=(float)(head[c-1]->cost)*dis/100.0;
                cout<<"\n\t\t"<<"Discount Added successfully to the this product\n\n";
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
                cout<<"\n\t\t\t"<<"Wrong category!!!";
                goto take1;
            }
            break;
        case 3:
            take2:
            cout<<"\n"<<"Enter category:";
            cin>>c;
            if(c>0 && c<15)
            {
                ideone2:
                cout<<"\n"<<"Enter product id:";

                cin>>id;
                while(strcmp(head[c-1]->pid,id)!=0)
                {
                  head[c-1]=head[c-1]->next;
                  if(strcmp(head[c-1]->pid,id)!=0 && head[c-1]->next==NULL)
                  {
                      cout<<"\n\t\t\t"<<"Wrong product-id...";

                       while(1)
                        {
                           if(head[c-1]->prev==NULL)
                                break;
                           else
                                head[c-1]=head[c-1]->prev;
                        }
                        goto ideone2;
                  }


                }               //Entering new cost for the product
                cout<<"\n"<<"Enter the new cost:";
                cin>>cst;
                head[c-1]->cost=cst-(float)(cst*head[c-1]->discount/100.0);
                cout<<"\n\t\t\tUpdate cost of the product:Rs."<<cst<<"\n\n";
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
                cout<<"\n"<<"Wrong category!!!";
                goto take2;
            }
                break;
        case 4:
                cout<<"\n\t\t\t"<<"Quitting to admin menu....\n\n";
                break;
        default:
                cout<<"\n\t\t\t"<<"Wrong option!!!";
        }
    }while(r!=4);
    }

    void display1()
    {

    int i,ch,n,j,k=1;
                            //display the product list

            cout<<"\n"<<"CATEGORIES:";
            cout<<"\n\n\n"<<"a).COSMETICS"<<"\n";
            for(i=0;i<3;i++)
            cout<<"\t"<<"\t"<<'\n'<<k++<<"."<<a[i];

            cout<<"\n\n\n"<<"(b).VEGETABLES AND FRUITS"<<"\n";
            for(i=0;i<2;i++)
            cout<<"\t"<<"\t"<<'\n'<<k++<<"."<<b[i];

            cout<<"\n\n\n"<<"(c).HOUSEHOLD AND COOKING ITEMS"<<"\n";
            for(i=0;i<3;i++)
            cout<<"\t"<<"\t"<<'\n'<<k++<<"."<<c2[i];

            cout<<"\n\n\n"<<"(d).EATABLES"<<"\n";
            for(i=0;i<3;i++)
            cout<<"\t"<<'\n'<<k++<<"."<<d[i];

            cout<<"\n\n\n"<<"(e).PROVISIONS"<<"\n";
            for(i=0;i<3;i++)
            cout<<"\t"<<"\t"<<'\n'<<k++<<"."<<e[i];

            hello:
            cout<<"\n\nSelect category:";
            cin>>ch;
            j=0;
            if(ch<15 && ch>0)
            {
            while(1)   //in a table format
            {
                 cout<<"\n";
                cout<<j+1<<".\n"<<"_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n\n| PRODUCT BRAND NAME       |  "<<head[ch-1]->name;
                cout<<"\n| PRODUCT ID.NO            |  "<<head[ch-1]->pid;
                cout<<"\n| PRODUCT PRICE            |  Rs."<<head[ch-1]->cost;
                cout<<"\n| MANFG DATE               |  "<<head[ch-1]->mfg;
                cout<<"\n| EXPRY DATE               |  "<<head[ch-1]->exp;
                cout<<"\n| STOCK                    |  "<<head[ch-1]->st;
                cout<<"\n| NET WEIGHT               |  "<<head[ch-1]->netweight;
                cout<<"\n_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n";


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
                cout<<"\n"<<"Wrong category!!!";
                goto hello;
            }
}
void del2()     //deleting a product from link list and resetting the pointer
    {
        product *temp;
        int c3;
        char id3[20];
        take4:
         cout<<"\n"<<"Enter category:";
            cin>>c3;
            if(c3>0 && c3<15)
            {
                ideone4:
                cout<<"\n"<<"Enter product id:";
                cin>>id3;
                while(strcmp(head[c3-1]->pid,id3)!=0)
                {
                  head[c3-1]=head[c3-1]->next;
                  if(strcmp(head[c3-1]->pid,id3)!=0 && head[c3-1]->next==NULL)
                  {
                      cout<<"\n\t\t\t"<<"Wrong product-id!!!";
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
                     cout<<"\n\t\t\tProduct is deleted successfully\n\n";
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
                         cout<<"\n\t\t\tProduct is deleted successfully\n\n";
                     }
                     else if(head[c3-1]->next==NULL && head[c3-1]->prev!=NULL)
                     {
                         temp=head[c3-1];
                         head[c3-1]=head[c3-1]->prev;
                         head[c3-1]->next=NULL;
                         free(temp);
                         cout<<"\n\t\t\tProduct is deleted successfully\n\n";
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

                    cout<<"\n\t\t\t"<<"Wrong category!!!";
                    goto take4;
                }
            }
};

struct sample
{
    char pd[20],pname[20];
    float cst,gcst;
    int q;
    struct sample *next,*prev;
};
class cust : public product
{

    public:
    char name[20];
    int prod;
    float amt;
    cust *next,*prev;
    cust *qlink;

void set1()
{
    qlink=new cust;
    strcpy(qlink->name,"Selvam");
    qlink->prod=5;
    qlink->amt=200;
    qlink->next=qlink->prev=NULL;
}
void admin_hist()   //admin to view customer history
{
     cout<<"\n"<<"_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n\n| CUSTOMER NAME        | PURCHASE AMOUNT | TOTAL PRODUCTS |\n";
     cout<<"_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n\n";
    while(1)
    {


        cout<<"| "<<qlink->name;
        int uu=strlen(qlink->name);
        int ss= 21 - uu;
        for(int ii=1;ii<=ss;ii++)
        {
            cout<<" ";
        }
        cout<<"| "<<qlink->amt;
        //cout<<"              | "<<qlink->amt;
        cout<<"             | "<<qlink->prod;
        cout<<"\n";
        if(qlink->next==NULL)
        {
            cout<<"_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n\n";
            break;
        }
        qlink=qlink->next;
    }
    while(1)
    {
        if(qlink->prev==NULL)
        break;
        qlink=qlink->prev;
    }
}
void cust_hist(char sname[20])  //to view customer history
{
    while(strcmp(qlink->name,sname)!=0)
    {
        if(qlink->next==NULL && strcmp(qlink->name,sname)!=0)
        {
         cout<<"\n\t\t\t\t"<<"Not found";

        break;

    }
    else
    qlink=qlink->next;
}
cout<<"\n\t\tTotal amount:Rs."<< (qlink->amt+(qlink->amt*0.036))<<"\n\n";
cout<<"\n\t\tProducts Purchased:"<<qlink->prod<<"\n";
while(1)
{
    if(qlink->prev==NULL)
        break;
        qlink=qlink->prev;
}
}
void revenue()  //total profit of the supermarket shop at the end session
{
    float rev=0,prod1=0;
    while(1)
    {
        rev+=qlink->amt;
        prod1+=qlink->prod;
        if(qlink->next==NULL)
            break;
        qlink=qlink->next;
    }
    while(1)
     {
        if(qlink->prev==NULL)
            break;
        qlink=qlink->prev;
     }

     cout<<"\n"<<"_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n\n|REVENUE        | TOTAL PRODUCTS SOLD   \n";
     cout<<"_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n\n";
      cout<<"| "<<rev;
        cout<<"           | "<<prod1;
         cout<<"\n\n_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n\n";
}

void bill()
{

    struct sample *plink,*temp;
    cust *temp1;
    char cname[20],pd[20],cl='y',nname[20],nmfg[20],nexp[20];
    int qn,c,i=0,tota=0,totp=0,nst,nnwt;
    float ncost;
    bool t=true;
    cout<<"\n"<<"Enter customer name:";
    cin>>cname;
    while(cl=='y')
    {
        t=true;
        cout<<"\n"<<"Enter the Category:";
        cin>>c;
        cout<<"\n"<<"Product-id:";
        cin>>pd;
        cout<<"\n"<<"Enter quantity...";
        cin>>qn;
        while(strcmp(head[c-1]->pid,pd)!=0)
        {
            if(head[c-1]->next==NULL && strcmp(head[c-1]->pid,pd)!=0)
            {
                cout<<"\n"<<"Product not found in the existing product list....Entry should be made";
                cout<<"\n"<<"Enter product name:";
                cin>>nname;
                cout<<"\n"<<"Enter mfg date:";
                cin>>nmfg;
                cout<<"\n"<<"Enter exp date:";
                cin>>nexp;
                cout<<"\n"<<"Enter stock:";
                cin>>nst;
                cout<<"\n"<<"Enter netweight:";
                cin>>nnwt;
                cout<<"\n"<<"Enter cost:";
                cin>>ncost;
                head[c-1]->next=new product;
                head[c-1]=head[c-1]->next;
                strcpy(head[c-1]->pid,pd);
                strcpy(head[c-1]->name,nname);
                strcpy(head[c-1]->mfg,nmfg);
                strcpy(head[c-1]->exp,nexp);
                head[c-1]->st=nst;
                head[c-1]->cost=ncost;
                head[c-1]->netweight=nnwt;
                head[c-1]->next=NULL;


                t=false;
                while(1)
                {
                    if(head[c-1]->prev==NULL)
                    break;
                    head[c-1]=head[c-1]->prev;

                }
                plink->next=new sample;
                plink=plink->next;
                plink->prev=temp;
                temp=plink;
                strcpy(plink->pd,head[c-1]->pid);
            strcpy(plink->pname,head[c-1]->name);
            plink->cst=head[c-1]->cost;

            plink->gcst=head[c-1]->cost*qn;

            tota+=plink->gcst;
            plink->q=qn;
            totp+=plink->q;
            temp=plink;
            i++;
            cout<<"\n"<<"Continue?(y/n):";
            cin>>cl;
            if(cl=='n')
                plink->next=NULL;


            }
            else

                head[c-1]=head[c-1]->next;
        }

        if(t==true)
        {
            if(i==0)
            {
                plink=new sample;
                plink->prev=NULL;
            }
            else
            {
                plink->next=new sample;
                plink=plink->next;
                plink->prev=temp;
            }
            strcpy(plink->pd,head[c-1]->pid);
            strcpy(plink->pname,head[c-1]->name);
            plink->cst=head[c-1]->cost;
            if(qn>head[c-1]->st)
            {
                cout<<qn-head[c-1]->st<<"extra items!!!";
            }
            else
            head[c-1]->st-=qn;

            plink->gcst=head[c-1]->cost*qn;

            tota+=plink->gcst;
            plink->q=qn;
            totp+=plink->q;
            temp=plink;
            i++;
            cout<<"\n"<<"Continue?(y/n):";
            cin>>cl;
            if(cl=='n')
                plink->next=NULL;
        }
    }




    while(1)
    {
        if(plink->prev==NULL)
        break;
        plink=plink->prev;

    }

    while(strcmp(qlink->name,cname)!=0)
    {
        if(qlink->next==NULL && strcmp(qlink->name,cname)!=0)
        {
            qlink->next=new cust;
            temp1=qlink;
            qlink=qlink->next;
            qlink->prev=temp1;
            strcpy(qlink->name,cname);
            qlink->prod=0;
            qlink->amt=0;
        }

        else
        qlink=qlink->next;
    }


            qlink->prod+=totp;
            qlink->amt+=tota;
            while(1)
            {
              if(qlink->prev==NULL)
                break;
                qlink=qlink->prev;
            }

        cout<<"\n\t\t\t\tGenerating bill...\n";

         cout<<"\n"<<"_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n\n| PRODUCT NO. | PRODUCT NAME           | PRICE  | QUANTITY | AMOUNT  | \n";
        cout<<"_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n\n";

       while(1)
       {
        cout<<"| "<<plink->pd;
        cout<<"      | "<<plink->pname;

        int uu=strlen(plink->pname);
        int ss= 23 - uu;
        for(int ii=1;ii<=ss;ii++)
        {
            cout<<" ";
        }
        cout<<"| "<<plink->cst;
        cout<<"         | "<<plink->cst;
        cout<<"     | "<<plink->q;
        cout<<"        | "<<plink->gcst;
        cout<<"\n";

        if(plink->next==NULL)
          {
              cout<<"_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n\n";
              break;
          }
          plink=plink->next;
       }

        /*  cout<<"\n"<<plink->pname<<"\n\n"<<plink->cst<<"\n\n"<<plink->gcst<<"\n\n"<<plink->pd<<"\n\n"<<plink->q;
          if(plink->next==NULL)
            break;
          plink=plink->next;
        */

       cout<<"\n\t\t\t\t\t     "<<"Net amount  : Rs."<<tota;
       cout<<"\n\n\t\t\t\t\t     Service Tax :    3.6%\n";
       cout<<"\n\t\t\t\t\t                   _ _ _ _ _ _ _ _";
       cout<<"\n\n\t\t\t\t\t     FINAL AMOUNT: Rs."<<(tota+(tota*0.036));
       cout<<"\n\t\t\t\t\t                   _ _ _ _ _ _ _ _\n\n";
    }

};

int main()
{
  int ach,ch,cash_ch,i,k;
  string admin_code="",cash_code="",cust_code="";
  char c=2,p,o,hisname[20];
  FILE *fp;
  product e;
  cust f;
  e.set3();
  f.set3();
  f.set1();


  cout<<"\t"<<"\t"<<"\t"<<c<<c<<c<<"\t"<<"EVERWIN SUPERMARKET"<<"\t"<<c<<c<<c<<c<<"\n";
  cout<<"\n"<<"\t\t"<<"       Sellers of best quality  products\n";
  cout<<"\n"<<"MOTTO:"<<"Customer satisfaction is our treasure and pleasure\n";
  do
  {
      cout<<"\n\t\t\t"<<"1.ADMIN PANEL";
      cout<<"\n\t\t\t"<<"2.CASHIER PANEL";
      cout<<"\n\t\t\t"<<"3.CUSTOMER PANEL";
      cout<<"\n\n"<<"Select your panel:";
      cin>>ch;
      switch(ch)
      {
       case 1:
         rep:
         cout<<"\n"<<"\nEnter secret code:";
          p = _getch();
          while(p != 13){//character 13 is enter
          admin_code.push_back(p);
          cout << '*';
          p= _getch();
   }


         if(admin_code=="admin")
         {


            cout<<"\n\n\t\t\t "<<c<<c<<"Welcome Administrator!!"<<c<<c<<"\n";
            admin_code="";
         }
         else
         {

          char malk;
          cout<<"\n"<<"\nIncorrect password...\n\n";
          cout<<"Do you want to continue?(y/n)";
          cin>>malk;
          if(malk=='y')
          {
              admin_code="";
              goto rep;
          }
          else
            break;
          /*cout<<"";
          admin_code="";
          goto rep;*/
         }
          do
          {

          menu:
          cout<<"\n"<<"\t"<<"\t"<<"\t"<<"1.View Customer history";
          cout<<"\n"<<"\t"<<"\t"<<"\t"<<"2.View product list";
          cout<<"\n"<<"\t"<<"\t"<<"\t"<<"3.Product modification";
          cout<<"\n"<<"\t"<<"\t"<<"\t"<<"4.View customer feedback";
          cout<<"\n"<<"\t"<<"\t"<<"\t"<<"5.Delete a product ";
          cout<<"\n"<<"\t"<<"\t"<<"\t"<<"6.Add new Product";
          cout<<"\n"<<"\t"<<"\t"<<"\t"<<"7.Revenue Till now";
          cout<<"\n\n\t\t"<<"Press 0 to go back to panel menu!!";
          cout<<"\n\n"<<"Enter your choice:";
          cin>>ach;
          switch(ach)
          {
           case 1:
                  f.admin_hist();
                  break;
           case 2:
                  cout<<"\n"<<"Hello\n";
                  f.display1();
                  goto menu;
                  break;
           case 3:
                  f.manipulate();
                  break;
           case 0:
                  cout<<"\n\t\t\t"<<"Logging out admin panel...\n\n";
                  break;
           case 4:
                  cout<<"\n"<<"Customer feedback:";
                  cout<<"\n";
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
           case 7:
                    f.revenue();
                    break;
           default:
                  cout<<"\n\t\t\t"<<"Not a valid option";
          }
          }while(ach!=0);
          break;
    case 2:
            rep1:
             cout<<"\n"<<"Enter secret code:";
             p=_getch();
               while(p != 13){//character 13 is enter
                  cash_code.push_back(p);
                  cout << '*';
                  p= _getch();
                }
             if(cash_code=="cashier")
             {


                cout<<"\n\n\n"<<"\t"<<"\t\t"<<c<<c<<c<<"Welcome cashier!!!\n\n";
                cash_code="";
             }
             else
             {
                 char milk;
                 cout<<"\n\t\t\t"<<"Incorrect password...\n\n";
                 cout<<"Do you want to continue?(y/n)";
                 cin>>milk;
                 if(milk=='y')
                 {
                     cash_code="";
                     goto rep1;
                 }
                 else
                    break;
                /* cash_code="";
                 goto rep1;*/
             }
              do
              {
              cout<<"\n\t\t\t"<<"What do you want do?";
              cout<<"\n\t\t\t"<<"1.Bill generation";
              cout<<"\n\t\t\t"<<"2.View product list";
              cout<<"\n\t\t\t"<<"3.Exit to main menu";
              cout<<"\n\nEnter your choice:";
              cin>>cash_ch;
              switch(cash_ch)
              {

              case 1:
                 cout<<"\n\n\t\t\t\tWelcome\n";
                  cout<<"\n\t\t\t   "<<"BILL GENERATION\n\n";
                  f.bill();
                  break;
              case 2:
                  f.display1();
                  break;
              case 3:cout<<"\n\t\t\t"<<"logging out cashier...\n";
                    break;
              default:
                  cout<<"\n\t\t\t"<<"Wrong option!!!\n\n";
              }

              }while(cash_ch!=3);
              break;

     case 3:

            do
              {

              cout<<"\n\t\t\t"<<"What do you want do?";
              cout<<"\n\t\t\t"<<"1.View product list";
              cout<<"\n\t\t\t"<<"2.Give feedback";
              cout<<"\n\t\t\t"<<"3.View history";
              cout<<"\n\t\t\t"<<"4.Exit\n\n";
              cout<<"Enter your choice:";
              cin>>cash_ch;
              switch(cash_ch)
              {

              case 1:
                     f.display1();
                     break;
              case 2:
                     cout<<"\n"<<"Enter your feedback here (delimiter '#'):\n";
                      fp=fopen("hello.txt","a");
                        o=getchar();
                        while(o!='#')
                            {
                                putc(o,fp);
                                o=getchar();
                            }
                        fclose(fp);
                        break;
              case 3:   cout<<"\n\nEnter your name:";
                        cin>>hisname;
                        f.cust_hist(hisname);

                        break;
              case 4:cout<<"\n\t\t\t"<<"Quitting to main panel...\n\n";
                     break;
              default:
                     cout<<"\n\t\t\t\t"<<"Wrong option !!!\n\n";
              }

              }while(cash_ch!=4);
              break;


    default:cout<<"\n\t\t\t\t"<<"Wrong choice";
      }
  }while(ch!=6);
  return 0;
}
