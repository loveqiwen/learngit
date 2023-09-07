#include<iostream>
using namespace std; 
class ClsA 
{
	public:
    ClsA(int i) {
        printf("ClsA()\n");
    }

    ~ClsA() {
        printf("~ClsA()\n");
    }
};

int fun()
{
    ClsA *clsA = new ClsA(2);
    return 0;
}

int main()
{
    fun();
}
