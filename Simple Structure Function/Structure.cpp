#include<iostream>
using namespace std;


struct stu
{
        char name[50];
        char dept[20];
        int roll;
        int session;
        float gpa;
};

int main()
{
    int n;
    cin>>n;
    struct stu s[n];
    for(int i=0;i<n;i++)
    {
         cin>>s[i].name>>s[i].roll>>s[i].dept>>s[i].session>>s[i].gpa;

    }
    for(int i=0;i<n;i++)
    {
        cout<<endl;
        cout<<s[i].name<<"\t"<<s[i].roll<<"\t"<<s[i].dept<<"\t"<<s[i].session<<"\t"<<s[i].gpa<<endl;
    }

}

