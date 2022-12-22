#include<bits/stdc++.h>                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          #include<bits/stdc++.h>
using namespace std;
///OOPS
///better to create in different files for main and class
/*class Student
{
    int age;
public:
    int rollnumber;
    char name[50];
    void display()
    {
        cout<<age<<" "<<rollnumber;
    }
    int getAge()
    {
        return age;
    }
    void setAge(int a,int password)
    {
        if(password!=123)
        {
            return;
        }
        age=a;
    }
};
int main()
{
    //create object statically
    Student s1;
    Student s2,s3,s4;

    //create object dynamically
    Student *s5=new Student;
    //s1.age=24;
    s1.setAge(24);
    s1.rollnumber=1929174;
    s1.display();
    cout<<"Enter Name:"<<endl;
    cin.getline(s1.name,50);
    cout<<"Name:"<<s1.name<<endl;
    cout<<"Age:"<<s1.getAge()<<endl;
    cout<<"Roll number:"<<s1.rollnumber<<endl;
    //(*s5).age=20;
    (*s5).rollnumber=1382923;
    //s5->age=20;
    s5->setAge(32);
    s5->rollnumber=1382923;
    s5->display();
    cin.getline(s5->name,50);
}*/
/*class Student
{
    int age;
public:
    int Roll;
    ///default user created constructor
    Student()
    {
        cout<<"Default Constructor called"<<endl;
    }
    ///parameterized user created constructor
    Student(int r)
    {
        Roll=r;
        cout<<"parameterized constructor called"<<endl;
    }
    Student(int Roll)
    {
        this->Roll=Roll;   //here it is mandatory because we have to diffrentiate between
                           //parameter roll number and property roll number
        cout<<"parameterized constructor called"<<endl;
    }
    Student(int r,int a)
    {
        this->Roll=r;  //optional
        this->age=a;   //optional
        cout<<"Parameterized constructor 2 called"<<endl;
        cout<<"This:"<<this<<endl;
    }
    void display()
    {
        cout<<age<<" "<<Roll<<endl;
    }
    int getAge()
    {
        return age;
    }
    void setAge(int a)
    {
        age=a;
    }
    ~Student()
    {
        cout<<"Destructor called"<<endl;
    }
};*/
/*int main()
{
    Student S(1929174);
    S.display();

    /*Student S1(10,100);
    cout<<"Address of S1:"<<&S1<<endl;
    Student s1;
    s1.display();
    Student s2;
    s2.display();
    Student *s3=new Student;
    
    
}*/
/*class Student
{
    int age;
public:
    int Roll;
    ///default user created constructor
    Student()
    {
        cout<<"Default Constructor called"<<endl;
    }
    ///parameterized user created constructor
    Student(int r)
    {
        Roll=r;
        cout<<"parameterized constructor called"<<endl;
    }
    Student(int Roll)
    {
        this->Roll=Roll;   //here it is mandatory because we have to diffrentiate between
                           //parameter roll number and property roll number
        cout<<"parameterized constructor called"<<endl;
    }
    Student(int r,int a)
    {
        this->Roll=r;  //optional
        this->age=a;   //optional
        cout<<"Parameterized constructor 2 called"<<endl;
        cout<<"This:"<<this<<endl;
    }
    void display()
    {
        cout<<age<<" "<<Roll<<endl;
    }
    int getAge()
    {
        return age;
    }
    void setAge(int a)
    {
        age=a;
    }
    ~Student()
    {
        cout<<"Destructor called"<<endl;
    }
};*/
/*int main()
{
    Student S(1929174);
    S.display();

    /*Student S1(10,100);
    cout<<"Address of S1:"<<&S1<<endl;
    Student s1;
    s1.display();
    Student s2;
    s2.display();
    Student *s3=new Student;
    s3->display();
    Student s4(1929100);
    s4.display();
    Student *s5=new Student(11278172,43);
    s5->display();
    return 0;
}*/
///copy constructor
/*int main()
{
    Student s1(10,100);  //parameterized cons
    cout<<"S1:";
    s1.display();
    Student *s2=new Student(s1);  //copy cons inbuilt
    cout<<"S2:";
    s2->display();
    Student s3(*s2);
    cout<<"S3:";
    s3.display();


    return 0;
}*/
///copy assignment operator
/*int main()
{
    Student s1(10,100);
    cout<<"s1:";
    s1.display();
    Student s2(20,200);
    s2=s1;
    cout<<"s2:";
    s2.display();
    Student *s3=new Student(90,230);
    *s3=s2;
    cout<<"s3:";
    s3->display();
    delete s3;
    return 0;
}*/
///FRACTION CLASS
/*class Fraction
{
    int numerator;
    int denominator;
public:
    Fraction()
    {
        cout<<"Default constructor"<<endl;
    }
    Fraction(int numerator,int denominator)
    {
        this->numerator=numerator;      //mandatory
        this->denominator=denominator;
    }
    void PrintFraction()
    {
        cout<<"Fraction is:"<<endl;
        cout<<this->numerator<<"/"<<this->denominator<<endl;
    }
    void add(Fraction const &f2)  //to prevent extra space and time complexity we pass
                                  //by reference
    {
        int lcm = denominator*f2.denominator; //optional this'
        int x = lcm/denominator;
        int y = lcm/f2.denominator;
        int num=x*numerator + y*f2.numerator;
        this->numerator=num;
        this->denominator=lcm;
        simplify();
    }
    void simplify()
    {
        //inbuilt fuction for gcd:__gcd(a,b);
        int gcd=1;
        int j=min(this->numerator,this->denominator);
        for(int i=1;i<=j;i++)
        {
            if(numerator%i==0 && denominator%i==0)
            {
                gcd=i;
            }
        }
        numerator/=gcd;
        denominator/=gcd;
        display();
    }
    void display()
    {
        cout<<"Addition of fraction:"<<endl;
        cout<<numerator<<"/"<<denominator<<endl;
    }
};
int main()
{
    Fraction f0;
    Fraction f1(10,2);
    Fraction f2(20,4);
    f1.PrintFraction();
    f2.PrintFraction();
    f1.add(f2);
    Fraction *f3=new Fraction(f2);
    Fraction *f4=new Fraction(34,12);
    f3->PrintFraction();
    f4->PrintFraction();
    f3->add(*f4);
    return 0;
}*/
///COMPLEX NUMBER CLASS
/*class Complex
{
    int real;
    int imaginary;
public:
    Complex(int real,int imaginary)
    {
        this->real=real;
        this->imaginary=imaginary;
    }
    void print()
    {
        cout<<"Complex Number:"<<endl;
        cout<<real<<"+"<<imaginary<<"i"<<endl;
    }
    void Addedprint()
    {
        cout<<"Added Complex Number:"<<endl;
        cout<<real<<"+"<<imaginary<<"i"<<endl;
    }
    Complex operator+(Complex const &c2)
    {
        int realadd=real+c2.real;
        int imaginaryadd=imaginary+c2.imaginary;
        Complex cnew(realadd,imaginaryadd);
        return cnew;
        //cnew.Addedprint();
    }
    Complex add(Complex const &c2)
    {
        int realadd=real+c2.real;
        int imaginaryadd=imaginary+c2.imaginary;
    }


};
int main()
{
    Complex c1(3,4);
    Complex c2(8,5);
    c1.print();
    c2.print();
    //c1.add(c2);
    Complex c4=c1+c2;
    c4.Addedprint();
    return 0;
}
///Shallow and deep copies and our own copy constructor creation
/*class student
{
    int age;

public:
    char *name;
    //own copy constructor creation
    student(student const &s)              //inbuilt copy constructor code
    {
        this->age=s.age;
        //this->name=s.name;                     //shallow copy
        this->name=new char[strlen(s.name)+1];   //deep copy
        strcpy(this->name,s.name);
    }
    student(int age,char *name)
    {
        this->age=age;
        //this->name=name; shallow copy(avoid this)
        ///deep copy(create new and copy the previous array
        this->name=new char[strlen(name)+1];
        strcpy(this->name,name);

    }
    void display()
    {
        cout<<name<<" "<<age<<endl;
    }
};
int main()
{
    char a[]="abcd";
    student s1(20,a);
    s1.display();
    ///deep copy demo
    /a[3]='e';
    student s2(32,a);
    s2.display();
    s1.display();
    ///our own copy constructor demo
    student s2(s1) ;
    s2.name[0]='z';
    s2.display();
    s1.display();
}*/
///Initialization List
/*class student
{
public:
    int age;
    const int roll;
    int &x;
    student(int roll,int age):roll(roll),age(age),x(this->age)
    {
        //this->roll=roll; //wrong as this has already been allocated by the garbage value
    }
    void display()
    {
        cout<<age<<" "<<roll<<" "<<x;
    }
};
int main()
{
    student s1(3223,45);
    s1.display();

}*/
///constant function
/*class Fraction
{
		int numerator;
		int denominator;

	public :
	    Fraction()
	    {

	    }
		Fraction(int numerator, int denominator)
		{
			this -> numerator = numerator;
			this -> denominator = denominator;
		}

		int getNumerator() const
		{
			return numerator;
		}
        int getDenominator() const
		{
			return denominator;
		}

		void setNumerator(int n)
        {
			numerator = n;
		}

		void setDenominator(int d) {
			denominator = d;
		}

		void print()
        {
			cout << this -> numerator << " / " << denominator << endl;
		}
        void simplify()
		{
			int gcd = 1;
			int j = min(this -> numerator, this -> denominator);
			for(int i = 1; i <= j; i++)
                {
				if(this -> numerator % i == 0 && this -> denominator % i == 0)
				{
					gcd = i;
				}
			}
			this -> numerator = this -> numerator / gcd;      //numerator/=gcd
			this -> denominator = this -> denominator / gcd;
		}
        Fraction add(Fraction const &f2) const
		 {
			int lcm = denominator * f2.denominator;
			int x = lcm / denominator;
			int y = lcm / f2.denominator;

			int num = x * numerator + (y * f2.numerator);

			//numerator = num;
			//denominator = lcm;
			Fraction f3(num,lcm);    ///para cons
			f3.simplify();
			return f3;
		}
        ///operator overloading
		Fraction operator+(Fraction const &f2) const
		 {
			int lcm = denominator * f2.denominator;
			int x = lcm / denominator;
			int y = lcm / f2.denominator;

			int num = x * numerator + (y * f2.numerator);

			//numerator = num;
			//denominator = lcm;
			Fraction f3(num,lcm);    ///para cons
			f3.simplify();
			return f3;
		}
        Fraction multiply(Fraction const &f2)
        {
			this->numerator = numerator * f2.numerator;
			this->denominator = denominator * f2.denominator;
			//Fraction fnew(numerator,denominator);

			simplify();
			return *this;
		}
		Fraction operator*(Fraction const &f2) const
        {
			int num = numerator * f2.numerator;
			int den = denominator * f2.denominator;
			Fraction fnew(num,den);

			fnew.simplify();
			return fnew;
		}
        bool operator==(Fraction const &f2) const
		{
		    return(this->numerator==f2.numerator && this->denominator==f2.denominator);
		}
		//pre-increment
		Fraction& operator++()
		{
		    numerator+=denominator;
		    simplify();
		    return *this;
		}
		//post-increment
		Fraction operator++(int)
		{
		    Fraction fnew(this->numerator,this->denominator);
		    fnew.simplify();
		    this->numerator+=this->denominator;
		    simplify();
		    return fnew;

		}
        //+= overloading
		Fraction& operator+=(Fraction const &f2)
		{
		    int lcm = denominator * f2.denominator;
			int x = lcm / denominator;
			int y = lcm / f2.denominator;

			int num = x * numerator + (y * f2.numerator);

			numerator = num;
			denominator = lcm;
			simplify();
			return *this;
		}
        
};
int main()
{
    Fraction f1(10,2);
    Fraction f2(15,4);
    Fraction f11=f1++;
    Fraction f3=f1.add(f2);
    Fraction f4=f3+f2;
    Fraction f5=f1.multiply(f2);
    Fraction f6=f5*f1;
    Fraction f7(1,5);
    Fraction f8(1,5);
    Fraction f9=++f8;
    Fraction f10=++(++f1);
    
    f1.print();
    f2.print();
    f3.print();
    f4.print();
    cout<<"Multiplication:"<<endl;
    f5.print();
    cout<<"Multiplication using operator overloading:"<<endl;
    f6.print();
    cout<<"Equal or not?"<<endl;
    f7.print();
    f8.print();
    if(f7==f8)
    {
        cout<<"Equal"<<endl;
    }
    else cout<<"Not Equal"<<endl;
    //cout<<"Increment:"<<endl;
    f9.print();
    f1.print();
    ++(++f1);
    f1.print();
    f10.print();
    cout<<"Post increment:"<<endl;
    f11.print();
    f1.print();
    cout<<"+=:"<<endl;
    f1+=f2;
    f1.print();

}*/
///Dynamic Array(Vector implementation)
/*class DynamicArray
{
    int *data;
    int capacity;
    int NextIndex;
public:
    DynamicArray()
    {
        data=new int[5];
        capacity=5;
        NextIndex=0;
    }
        DynamicArray(DynamicArray const &d2)
    {
        this->NextIndex=d2.NextIndex;
        this->capacity=d2.capacity;
        this->data=new int[d2.capacity];
        for(int i=0;i<d2.NextIndex;i++)
        {
            this->data[i]=d2.data[i];
        }
    }
    int getCapacity() const
    {
        cout<<"Length:"<<endl;
        cout<<capacity<<endl;
    }
    void print() const
    {
        for(int i=0;i<NextIndex;i++)
        {
            cout<<data[i]<<" ";;
        }
        cout<<endl;
    }
    void add(int element)
    {
        data[NextIndex]=element;
        NextIndex++;
        if(NextIndex==capacity)
        {
            int *NewData=new int[capacity*2];
            for(int i=0;i<capacity;i++)
            {
                NewData[i]=data[i];
            }
            delete []data;
            data=NewData;
            capacity*=2;

        }
        data[NextIndex]=element;
        NextIndex++;
    }
    int getelement(int i) const
    {
        if(i>=0 && i<NextIndex)
        {
            cout<<data[i]<<endl;;
        }
        else
        {
            cout<<"Invalid Index"<<endl;  //return -1
        }
    }
    void addelement(int i,int element)
    {
        if(i>=0 && i<NextIndex)
        {
            data[i]=element;
        }
        else if(i==NextIndex)
        {
            add(element);
        }
        else
        {
            cout<<"Invalid Index!"<<endl;
        }
    }
    DynamicArray operator=(DynamicArray const &d2)
    {
        this->NextIndex=d2.NextIndex;
        this->capacity=d2.capacity;
        this->data=new int[d2.capacity];
        for(int i=0;i<d2.NextIndex;i++)
        {
            this->data[i]=d2.data[i];
        }

    }
};
int main()
{
    DynamicArray d1,d3;
    d1.add(3);
    d1.add(10);
    d1.add(5);
    d1.add(6);
    d1.add(7);
    d1.print();
    DynamicArray d2(d1);
    d3=d1;
    d2.addelement(0,8);
    d1.print();
    d2.print();
    d3.addelement(0,4);
    d3.print();
    d1.print();

    cout<<"Search for element at index"<<endl;
    d1.getelement(0);
    cout<<"Insert element at desired index:"<<endl;
    d1.addelement(0,5);
    d1.getCapacity();
}*/
///Dynamic Memory Allocation
/*int main()
{
    cout<<"Enter number of elements:"<<endl;
    int n;
    cin>>n;
    int *ar=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    delete []ar;
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<< " ";
    }

}*/
///Dynamic Memory Allocation(2D array)
/*int main()
{
    int m,n;
    cin>>m>>n;
    int** p=new int*[m];
    for(int i=0;i<m;i++)
    {
        p[i]=new int[n];
        for(int j=0;j<n;j++)
        {
            cin>>p[i][j];
        }
    }
    //p[1][2]=99;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<m;i++)      //remember to delete
    {
        delete []p[i];
    }
    delete []p;

    return 0;
}*/
/*int main()
{
    int ar[]={1,2,3,4,5,6};
    int s=sizeof(ar)/sizeof(ar[0]);
    cout<<s<<endl;
}*/
///Swastika(pattern)
/*void Swastika(int n)
{
    int k=((n+1)/2);
    for(int i=1;i<=((n+1)/2)-1;i++)
    {
        cout<<"*";
        for(int i=1;i<=((n+1)/2)-2;i++)
        {
            cout<<" ";
        }
        for(int j=1;j<=k;j++)
        {
            cout<<"*";
        }
        cout<<endl;
        k=1;
    }
    for(int i=1;i<=n;i++)
    {
        cout<<"*";
    }
    cout<<endl;
    for(int i=1;i<=((n+1)/2)-2;i++)
    {
        for(int i=1;i<=((n+1)/2)-1;i++)
        {
            cout<<" ";
        }
        for(int i=1;i<=1;i++)
        {
            cout<<"*";
        }
        for(int i=1;i<=((n+1)/2)-2;i++)
        {
            cout<<" ";
        }
        for(int i=1;i<=1;i++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int k=0;k<=((n+1)/2)-1;k++)
    {
        cout<<"*";
    }
    for(int i=1;i<=((n+1)/2)-2;i++)
    {
        cout<<" ";
    }
    for(int i=1;i<=1;i++)
    {
        cout<<"*";
    }
}
int main()
{
    Swastika(7);
}*/



