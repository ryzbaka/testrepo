#include<iostream>
using namespace std;
void display(int a[],int f,int r)
{
	for(int i=f;i<=r;i++)
	{
		cout<<"int type val: "<<a[i]<<"\n";
	}
}
void display(double a[],int f,int r)
{
	for(int i=f;i<=r;i++)
	{
		cout<<"double value type: "<<a[i]<<"\n";
	}
}
void display(char a[],int f,int r)
{
	for(int i=f;i<=r;i++)
	{
		cout<<"char value type: "<<a[i]<<"\n";
	}
}
void enqueue(int a[],int f,int r,int size)
{
	int value;
	cout<<"enter value \n"
	cin>>value;
	if(r==size-1)
	{
		cout<<"overflow!  \n";
	}
	else if(f==-1)
	{
		f+=1;
		r+=1;
		a[r]=value;
	}
	else
	{
		r+=1;
		a[r]=value;	
	}
}
void enqueue(double a[],int f,int r,int size)
{
	int value;
	cout<<"enter value \n"
	cin>>value;
	if(r==size-1)
	{
		cout<<"overflow!  \n";
	}
	else if(f==-1)
	{
		f+=1;
		r+=1;
		a[r]=value;
	}
	else
	{
		r+=1;
		a[r]=value;	
	}
}
void enqueue(char a[],int f,int r,int size)
{
	int value;
	cout<<"enter value \n"
	cin>>value;
	if(r==size-1)
	{
		cout<<"overflow!  \n";
	}
	else if(f==-1)
	{
		f+=1;
		r+=1;
		a[r]=value;
	}
	else
	{
		r+=1;
		a[r]=value;	
	}
}
void dequeue(int a[],int f,int r)
{
	if(f==-1)
	{
		cout<<"underflow";
	}
	else if(f==size-1)
	{
		cout<<a[f]<<"\n";
		f=-1;
		r=-1//reset queue
	}
	else
	{
		cout<<a[f]<<"\n";
		f+=1;
	}
}
void dequeue(double a[],int f,int r)
{
	if(f==-1)
	{
		cout<<"underflow";
	}
	else if(f==size-1)
	{
		cout<<a[f]<<"\n";
		f=-1;
		r=-1//reset queue
	}
	else
	{
		cout<<a[f]<<"\n";
		f+=1;
	}
}
void dequeue(char a[],int f,int r)
{
	if(f==-1)
	{
		cout<<"underflow";
	}
	else if(f==size-1)
	{
		cout<<a[f]<<"\n";
		f=-1;
		r=-1//reset queue
	}
	else
	{
		cout<<a[f]<<"\n";
		f+=1;
	}
}
void main()
{
	
	int size;
	int f;
	int r;
	f==-1;
	r==-1;
	cout<<"1.int \n";
	cout<<"2.double \n";
	cout<<"3.char \n";
	int choice;
	cin>>choice;
	if(choice==1)//int
	{
		int queue[100];
	menu:	cout<<"Enter the size of the queue \n";
		cin>>size;
		cout<<"1.enqueue \n"
		cout<<"2. dequeue \n";
		cout<<"3.display \n";
		int choice1;
		cin>>choice1;
		if(choice1==1)
		{
			enqueue(queue,f,r,size);
			goto menu;
		}
		if(choice1==2)
		{
			dequeue(queue,f,r,size);
			goto menu;
		}
		if(choice1==3)
		{
			display(queue,f,r);
			goto menu;
		}
	}
	if(choice==2)//double
	{
		
		double queue[100];
	menu1:	cout<<"Enter the size of the queue \n";
		cin>>size;
		cout<<"1.enqueue \n"
		cout<<"2. dequeue \n";
		cout<<"3.display \n";
		int choice1;
		cin>>choice1;
		if(choice1==1)
		{
			enqueue(queue,f,r,size);
			goto menu1;
		}
		if(choice1==2)
		{
			dequeue(queue,f,r,size);
			goto menu1;
		}
		if(choice1==3)
		{
			display(queue,f,r);
			goto menu1;
		}
	}
	if(choice==2)//char
	{
		
		char queue[100];
	menu2:	cout<<"Enter the size of the queue \n";
		cin>>size;
		cout<<"1.enqueue \n"
		cout<<"2. dequeue \n";
		cout<<"3.display \n";
		int choice1;
		cin>>choice1;
		if(choice1==1)
		{
			enqueue(queue,f,r,size);
			goto menu2;
		}
		if(choice1==2)
		{
			dequeue(queue,f,r,size);
			goto menu2;
		}
		if(choice1==3)
		{
			display(queue,f,r);
			goto menu2;
		}
	}
	system("pause");
}