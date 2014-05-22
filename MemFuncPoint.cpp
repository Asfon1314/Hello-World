#include <iostream>
#include <functional>

using namespace std;


class Foo
{
	public:
		int TT(int a)
		{
			cout<<"a is:"<<a<<endl;
			return 0;
		}
};


int main()
{
	Foo re;
	Foo we;
	auto f= mem_fn(&Foo::TT,&re);
	f();
	return 0;
}