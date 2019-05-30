#include<iostream.h>
#include<conio.h>
#include<process.h>
int q[100], ele, n, front=-1 ,rear=-1;
void ins()
{
	if((front==0 && rear==n-1)||(front==rear+1))
		cout<<"\nQueue Overflow !!\n";
	else
	{
		if(front==-1)
			front=rear=0;
		else
		{
			if(rear!=(n-1))
				rear++;
			else
				rear=0;
		}
		cout<<"\nEnter the desired Element :: ";
		cin>>ele;
		q[rear]=ele;
	}
}
void del()
{
	if(front==-1)
		cout<<"\nQueue Underflow !!\n";
	else
	{
		ele=q[front];
		q[front]=NULL;
		if(front==rear)
		{ front=rear=-1; }
		else if(front==(n-1))
			front=0;
		else
			front++;
		cout<<ele<<" is successfully deleted !!\n";
	}
}
void disp()
{
	if (front==-1)
		cout<<"\nQueue Underflow !!\n";
	else
		cout<<"\n\n";
		for(int i=0;i<n;i++)
			if(q[i]!=0)
				cout<<q[i]<<" ";
}
void main()
{
	clrscr();
	char c;
	cout<<"Enter the size of the Circular Queue :: ";
	cin>>n;
	for( ; ; )
	{
		clrscr();
		cout<<"OPERATIONS ON CIRCULAR QUEUE\n\n";
		cout<<" M A I N  M E N U \n==================\n\n";
		cout<<"1.Insert\n\n";
		cout<<"2.Delete\n\n";
		cout<<"3.Display\n\n";
		cout<<"4.Exit\n\n";
		cout<<"What is your choice :: ";
		cin>>c;
		switch(c)
		{
			case '1': ins();
				  break;
			case '2': del();
				  break;
			case '3': disp();
				  break;
			case '4': exit(0);
		}
	getch();
	}
}
