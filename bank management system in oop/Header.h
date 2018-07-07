#include<string>
int pass, verify;
namespace all
{
	using namespace std;
	template<class t>
	class out
	{
	public:
		void operator <<(t s)
		{
			cout << s << endl;
		}
		friend void design(string, string, string);
	};

	void design(string a, string b, string c)
	{
		cout << "\t\n\n\n\t  " << a;
		cout << "\n\n\t" << b;
		cout << "\n\n\t  " << c << endl;
	}
	void intro()
	{
		out<string> o;
		design("Bank", "Management", "System");
		o << "\n\n\t made by samir";
		cin.get();
	}

}
namespace temp
{
	void intro()
	{
		if (::pass == 1607073)
			verify = 1;
		else
			verify = 0;
	}
}
