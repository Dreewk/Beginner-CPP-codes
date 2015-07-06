#include<iostream>
#include<fstream>
using namespace std;
int main()
{
 char c;
 FILE *fp;
 fp=fopen("hello.txt","r");
 c=getc(fp);
 while(c!=EOF)
 {
   putchar(c);
   c=getc(fp);
}
fclose(fp);
return 0;
}



