//Greater number among 4 numbers using a global function as friend
#include <iostream>
using namespace std;
class test2; //Forward Declaration
class test3;
class test4;
class test1{
   int num1;

   public:
   void setData(int a)
   {
       num1=a;
   }
   friend void greaterNum(test1, test2, test3, test4); //friend function declaration
   friend void smallerNum(test1, test2, test3, test4);
};
class test2{
   int num1;

   public:
   void setData(int a)
   {
       num1=a;
   }
   friend void greaterNum(test1, test2, test3, test4); //friend function declaration
   friend void smallerNum(test1, test2, test3, test4);
};
class test3{
   int num1;

   public:
   void setData(int a)
   {
       num1=a;
   }
   friend void greaterNum(test1, test2, test3, test4); //friend function declaration
   friend void smallerNum(test1, test2, test3, test4);
};
class test4{
   int num1;

   public:
   void setData(int a)
   {
       num1=a;
   }
   friend void greaterNum(test1, test2, test3, test4); //friend function declaration
   friend void smallerNum(test1, test2, test3, test4);
};

//friend function definition
void greaterNum(test1 t1,test2 t2, test3 t3, test4 t4)
{
   cout<<"Greater numbers is = "<<max(t1.num1,max(t2.num1,max(t3.num1,t4.num1)))<<endl;
}
void smallerNum(test1 t1,test2 t2, test3 t3, test4 t4)
{
   cout<<"smaller numbers is = "<<min(t1.num1,min(t2.num1,min(t3.num1,t4.num1)))<<endl;
}

int main()
{
      test1 ta;
      test2 tb;
      test3 tc;
      test4 td;
      int x,y,z,q;
      cin>>x>>y>>z>>q;
      ta.setData(x);
      tb.setData(y);
      tc.setData(z);
      td.setData(q);
      greaterNum(ta,tb,tc,td);
      smallerNum(ta,tb,tc,td);

      return 0;
}
