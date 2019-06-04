#include<iostream.h>
#include<process.h>
#include<conio.h>
int n,org,c,sum;
void armstrong()
{
c=0; sum=0;
cout<<”Enter n”;
cin>>n;
 org=n;
while(n>0)
{
  n=n/10;
  c++;
}
n=org;
while(n>0)
 {
  sum=sum+pow(n%10,c);
  n/=10;
}
If(org==sum)
    cout<<org<<” is Armstrong number\n”;
else
   cout<<org<<” is not Armstrong Number\n”;
}

void automorphic()
{
 
c=0;
cout<<”Enter n”;
 cin>>n;
org=n;
long int s=n*n;
while(n>0)
    {
       n=n/10;
          c++;
    }
 if(org==s % (int)pow(10,c)
           cout<<”\n\nYes… Automorphic number “<<org;
else
	cout<<”\n\nNo… It is not Automorphic Number “<<org;
}

void prime()
{
c=0;
cout<<”Enter Number”;
cin>>n;
for(int i=2;i<n;i++)
   if(n%i==0) c++;
if(c==0)
   cout<<”\n\nPrime number is “<<n;
else
   cout<<’\n’<<n<<” is not a prime number “;
}
void perfect()
{
c=0; 
cout<<”Enter Number”;
cin>>n;
for(int i=1;i<n;i++)
              if(n%i==0) c=c+i;
cout<<endl;
 if(c==n)
  cout<<n<<” is a perfect number”;
else
  cout<<n<<”is not a perfect number”;

}
void main()
{

int opt;
do
{
 clrscr();
 cout<<”\nMenu\n____\n”;
cout<<”1. Armstrong number\n”;
cout<<”2. Automorphic number \n”;
cout<<”3. Prime number \n”;
cout<<”4. Perfect number\n”;
cout<<”5.Exit\n”;
cout<<”Enter your option : “;
cin>>opt;
switch(opt)
 {
  case 1:
	armstrong();
           break;
 case 2:
         automorphic();
          break;
case 3:
         prime();
	break;
case 4:
    perfect();
	break;
case 5:
	exit(0);
}
getch();
} while(opt<=5);
}
