// #include<iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int a;
//     a='a';

//     cout<<"Size of int "<<sizeof(a)<<endl;
//     cout<<"int = "<<a<<endl;

//     float b;
//     cout<<"size of float "<<sizeof(b)<<endl;

//     char c;
//     cout<<"size of char "<<sizeof(c)<<endl;

//     bool d;
//     cout<<"size of char "<<sizeof(d)<<endl;

//     short int si;
//     long int li;

//     cout<<"Size of short int "<<sizeof(si)<<endl;
    
//     cout<<"Size of long int "<<sizeof(li)<<endl;

//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"Hello World\n";
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int amount1;
//     cin>>amount1;

//     int amount2;
//     cin>>amount2;

//     int sum=amount1+amount2;
//     cout<<"Sum = "<<sum<<endl;
//     return 0;
// }

// #include <iostream> 
// using namespace std; 
// class Student {
// public:
// int id;//data member (also instance variable) 
// string name;//data member(also instance variable) 
// void insert(int i, string n)
// {
// id = i; 
// name = n;
// }
// void display() 
// {
// cout<<id<<" "<<name<<endl; 
// }
// };int main(void) {
// Student s1; //creating an object of Student 
// Student s2; //creating an object of Student 
// s1.insert(201, "Sonoo");
// s2.insert(202, "Nakul"); 
// s1.display();
// s2.display(); 
// return 0;
// }

// #include <iostream> 
// #include <conio.h>  
// using namespace std;  
// class Hello {  
// public:  
//   //Constructor  
//   Hello () {  
//     cout<< "Constructor function is called" <<endl;  
//   }  
//   //Destructor  
//   ~Hello () {  
//     cout << "Destructor function is called" <<endl;  
//    }  
//    //Member function  
//    void display() {  
//      cout <<"Hello World!" <<endl;  
//    }  
// };  
// int main(){  
//    //Object created  
//    Hello obj;  
//    //Member function called  
//    obj.display();  
//    return 0;  
// }

// #include <iostream> 
// using namespace std; 
// class A
// { 
// public: 
// int x;
// A(int a)               // parameterized constructor. 
// {
// x=a; 
// }
// A(A &i)              // copy constructor 
// {
// x = i.x; 
// }
// };
// int main() 
// {
// A a1(20);              // Calling the parameterized constructor. 
// A a2(a1);               //  Calling the copy constructor.
// cout<<a2.x; 
// return 0; 
// }

// #include <iostream>  
// using namespace std;  
// class Note  
// {  
// // declare a static data member  
// static int num;  
  
// public:  
// // create static member function  
// static int func ()  
// {  
// cout << " The value of the num is: " << num << endl;    
// }  
// };  
// // initialize the static data member using the class name and the scope resolution operator  
// int Note :: num = 15;   
  
// int main ()  
// {  
//     // create an object of the class Note  
//     Note n;  
// // access static member function using the object  
// n.func();  
  
// return 0;  
// }

// #include<iostream>
// using namespace std;
// class math;
// {
// private:
//     int a,c,b,s;
// public:
//     math(int x,int y,int z)
//     {
//         a=x;
//         b=y;
//         c=z;
//     }
//     void add()
//     {
//         s=a+b+c;
//         cout<<"Sum is : "<<s;
//     }    
// };
// int main()
// {
//     math o(2,3,4);
//     o.add();
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class math
// {
// private:
//     int a,b,c;
// public:
//     math(int x,int y)
//     {
//         a=x;
//         b=y;
//     }
//     void add()
//     {
//         c=a+b;
//         cout<<"Total : "<<c;
//     }
// };
// int main()
// {
//     int m,n;
//     cin>>m;
//     cin>>n;
//     math o(m,n);
//     o.add();
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class student
// {
// 	private: char name[20],add[20];
// 	  	int roll,zip;
// 	public: student ( ); //Constructor
// 		~student( ); //Destructor
// 		void read( );
// 		void disp( );			
// };
// student :: student()
// {
//     cout<<endl;
// }
// void student :: read( )
// {
// 	cout<<"Enter the student Name: ";
// 	cin>>name;
// 	cout<<"Enter the student roll no: ";
// 	cin>>roll;
// 	cout<<"Enter the student address: ";
// 	cin>>add;
// 	cout<<"Enter the Zipcode: ";
// 	cin>>zip;
// }

// void student :: disp( )
// {
// 	cout<<"Studet details"<<endl;
// 	cout<<"Student Name   :"<<name<<endl;
// 	cout<<"Roll no is     :"<<roll<<endl;
// 	cout<<"Address is     :"<<add<<endl;
// 	cout<<"Zipcode is     :"<<zip<<endl;
// }

// student :: ~student( )
// {
// 	cout<<"Student class destructor called.";
// }
 
// int main( )
// {
//     int n;
//     cout<<"Enter for the number of students : "<<endl;
//     cin>>n;
//     student s[n];
//     for (int i = 0; i < n; i++)
//     {
//         s[i].read();
//     }
//     for (int i = 0; i < n; i++)
//     {
//         s[i].disp();
//     }
// }

