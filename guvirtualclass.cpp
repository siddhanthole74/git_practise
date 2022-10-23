#include<iostream>
using namespace std;

class item
{
	protected:
		int avq;
		void iteminfo()
		{
			cout<<"\nEnter item available:";
			cin>>avq;
		}
};

class sale :protected virtual item
{
	protected:
		int sq;
		void saleinfo()
		{
			cout<<"\nEnter Sale quantity:";
			cin>>sq;
		}
};

class purches : protected virtual item
{
	protected:
	int pq;
	void purchesinfo()
	{
		
		cout<<"\nEnter purches quantity:";
		cin>>pq;
	}
};

class stock : protected sale, protected purches
{
	public:
		int cb;
		void stockinfo()
		{
            
			cb=avq-sq+pq;
			cout<<"\nFinal quantity="<<cb;
		}
};

int main()
{
	stock sk;
	sk.stockinfo();
	return 0;
}
