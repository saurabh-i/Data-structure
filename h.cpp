#include<iostream>
using namespace std;
class A{
    
    public:

        void add(){
            int sum=0;
            for(int i=0;i<5;i++)
            {
                sum=sum+a[i];
            }
            cout<<sum;
        }

        void sum(){
            string s=" ";
            for(int i=0;i<3;i++)
            {
                s=s+arr[i];
            }
            cout<<s;
        }
};


int main()
{
    int a[5]={10,20,30,40,50};
    string arr[3] = {"saur","abh ","Bhaskar"};

    A *obj=new A();
    obj->add(int a[]);
    obj->sum(arr);
}