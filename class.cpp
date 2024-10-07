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