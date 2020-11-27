//Swap two numbers using member function as friend
#include <iostream>
using namespace std;

class test2;

class test1{
   int num1;

   public:
   void setData(int a)
   {
       num1=a;
   }
   void swaps(test1&, test2&); //friend function declaration
};

class test2{
   int num1;

   public:
   void setData(int a)
   {
       num1=a;
   }
   friend void test1 :: swaps(test1&, test2&); // Member function as friend function declaration
};

//Member function as friend function definition
void test1 :: swaps(test1 &t1,test2 &t2)
{
   cout<<"Before swap the numbers are = "<<t1.num1<<" "<<t2.num1<<endl;
   int temp;
   temp=t1.num1;
   t1.num1=t2.num1;
   t2.num1=temp;
   cout<<"After swap the numbers are = "<<t1.num1<<" "<<t2.num1<<endl;
}

int main()
{
      test1 ta;
      test2 tb;
      int x,y;
      cin>>x>>y;
      ta.setData(x);
      tb.setData(y);
      ta.swaps(ta,tb);

      return 0;
}
