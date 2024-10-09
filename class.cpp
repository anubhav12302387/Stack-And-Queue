#include<iostream>
#include<string>
using namespace std;
class student
{
    private:
        int roll_no;
        protected:
        char section[10];
        public:
        void get_roll_no()
        {
            cin>>roll_no;
        }
        void show_roll_no()
        {
            cout<<"\n Rollno: "<<roll_no;
        }
};
class result: public student
{
    private:
    float fees;
    public:
        void get_data(){
            get_roll_no();
            cin>>fees;
            cin>>section;

        }
        void display(){
            show_roll_no();
            cout<<"fee is:"<<fees;
            cout<<"Section is:"<<section;
        }
};
int main(){
    result obj1;
    obj1.get_data();
    obj1.display();
    return 0;
}



// You are using GCC
#include<iostream>
using namespace std;
class B{
    protected:
    int x;
    public:
    void get_dataB()
    {
        cin>>x;
    }
};
class DB1: public virtual bitand
{
    protected:
    int z;
    public:
    void get_dataDB2()
    {
        cin>>z;
    }
};
class D: public DB1, public get_dataDB2
{
    public:
    void sum()
    {
        int result;
        result=x+y+z;
        cout<<"Result is:"<<result;
    }
};
int main()
{
    D obj1;
    obj1.get_dataB();
    obj1.get_dataDB1();
    obj1.get_dataDB2();
    obj1.sum();
    return 0;
}