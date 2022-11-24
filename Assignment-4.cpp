#include <iostream>
using namespace std;
class emp
{
public:
    int eno;
    char name[20],
        des[20];
    void get()
    {
        cout << "Enter the employee number:";
        cin >> eno;
        cout << "Enter the employee name:";
        cin >> name;
    }
};
class salary : public emp
{
    float n, bp, hr;

public:
    void get1()
    {
        cout << "Enter the basic pay:";
        cin >> bp;
        cout << "Enter the HR:";
        cin >> hr;
    }
    void calculate()
    {
        n = bp + hr;
        ;
    }
    void display()
    {
        cout << eno << "\t" << name << "\t" << bp << "\t" << hr << "\n";
    }
};
class student
{
public:
    string name;
    int roll;
    void getdata(void);
    void display(void);
};

void student::getdata()
{
    cout << "name is:";
    cin >> name;
    cout << "roll no:";
    cin >> roll;
}

void student::display()
{
    cout << "name:" << name << "\nroll:" << roll;
}

class value
{
    int x;
    int y;

public:
    value()
    {
        x = 1;
        y = 2;
    }
    void display()
    {
        cout << "value of x and y :" << x << y;
    }
};

int area(int, int);
float area(float);
float area(float, float);
int area(int l, int b)
{
    return (lb);
}
float area(float r)
{
    return (3.14rr);
}
float area(float bs, float ht)
{
    return ((bsht) / 2);
}
class student2
{
protected:
    int roll_no;

public:
    void get_no(int x)
    {
        roll_no = x;
    }
    void put_no()
    {
        cout << "\nRoll Number :: " << roll_no << "\n";
    }
};

class test : virtual public student2
{
protected:
    float sub_marks;

public:
    void get_submarks(float y)
    {
        sub_marks = y;
    }
    void put_submarks() { cout << "\nSubject Marks :: " << sub_marks << "\n"; }
};
class sports : public virtual student2
{
protected:
    float sp_marks;

public:
    void get_spmarks(float z)
    {
        sp_marks = z;
    }
    void put_spmarks()
    {
        cout << "\nSports Marks :: " << sp_marks << "\n";
    }
};

class result : public test, public sports
{
    float total_marks;

public:
    void put_result()
    {
        total_marks = sub_marks + sp_marks;
        put_no();
        put_submarks();
        put_spmarks();
        cout << "\nTotal Marks :: " << total_marks << "\n";
    }
};

int main()
{
    int i, n;
    char ch;
    salary s[10];
    cout << "Enter the number of employee:";
    cin >> n;

    for (i = 0; i < n; i++)
    {
        s[i].get();
        s[i].get1();
        s[i].calculate();
    }

    cout << "\ne_no \t e_name\t des \t bp \t hr \n";
    for (i = 0; i < n; i++)
    {
        s[i].display();
    }
    student s1;
    s1.name = "john";
    s1.roll = 1;
    s1.display();
    value v;
    v.display();
    int l, b;
    float r, bs, ht;
    cout << "enter length and breadth of rectangle:";
    cin >> l >> b;
    cout << "enter radius of circle:";
    cin >> r;
    cout << "enter base and height of triangle:";
    cin >> bs >> ht;
    cout << "area of rectangle is:" << area(l, b);
    cout << "\narea of circle is:" << area(r);
    cout << "\narea of triangle is:" << area(bs, ht);
    result R;
    R.get_no(34);
    R.get_submarks(67.2);
    R.get_spmarks(98.9);
    R.put_result();

    return 0;
}
