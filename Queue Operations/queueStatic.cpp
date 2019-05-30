#include<iostream.h>
#include<process.h>
#include<conio.h>
#define n  10
class QUEUE
{
    int data[n];
    int front,rear;
    public:
    QUEUE()
    {  front=-1;
       rear=-1;}
    void Add();
    void Remove();
    void Display();
};
void  QUEUE::Add()
{ clrscr();
  if(rear==n-1)
  {
    cout<<" QUEUE is Overflow " ;
    getch();
    exit(0);
  }
  if(front==-1)
   {
     front=0;
     rear=0;
   }
   else
     rear = rear +1;
   cout<<"Enter the element to be inserted ";
   cin>>data[rear];
}
void QUEUE:: Remove()
{
  clrscr();
  if(front == -1)
  {
       cout<<"Queue Underflow";
       getch();
       exit(0);
  }
  cout<<" The deleted element is " << data[front];
  if( front==rear)
   {
     front =-1;
      rear = -1;
    }
   else
     front++;
}
void QUEUE:: Display()
{
  clrscr();
  cout<<"\n \n Front : <-";
  for(int i=front; i<=rear;i++)
    cout<<data[i]<<"<-";
  cout<<"Rear. \n";
}
void main()
{
   int choice;
   clrscr();
   QUEUE Q;
   do
   {  clrscr();
      cout<<"\n    STATIC IMPLEMENTATION OF QUEUE    \n\n";
      cout<<"\n            M A I N  M E N U \n";
      cout<<"\n       1----> Insert Node  \n";
      cout<<"\n       2----> Delete Node  \n";
      cout<<"\n       3----> Display all the Nodes \n";
      cout<<"\n       4----> Exit\n\n";
      cout<<"Select your choice :";
      cin>>choice;
      switch(choice)
      {case 1: Q.Add();
	case 3: Q.Display();}
     cout<<"\n \n Press any Key to continue ...";
     getch( );
  }while(choice!=4);
}
