#include <bits/stdc++.h>
#include <iostream>

using namespace std;
//Implement the class Box
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions :

// Constructors:
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)
class Box {
private:
    long long l,b,h;
public:
    Box (long long l = 0, long long b = 0,long long h = 0)
    {
        this->l = l;
        this->b = b;
        this->h = h;
    }
    friend ostream &operator << (ostream & out , Box & A)
    {
        out << A.l << " " <<  A.b << " " <<  A.h ;
        return out;
    }
    long long getLength ()
    {
        return this->l;
    }
    long long getBreadth ()
    {
        return this->b;
    }
    long long getHeight ()
    {
        return this->h;
    }
    long long CalculateVolume ()
    {
        return this->l * this->b * this->h;
    }
    bool operator < ( Box & B)
    {
        return (this->l < B.l) || (this->b < B.b && this->l == B.l) || (this->h < B.h && this->b == B.b && this->l == B.l);
    }
    Box(const Box& B)
    {
        l=B.l;
        b=B.b;
        h=B.h;
    }
};

int main()
{
	int n;
	cin >>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}
