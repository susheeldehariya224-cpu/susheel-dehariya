# include<iostream>
using namespace std;

    // class myclass
    // {
    //     public :
    //     myclass(){

    //         cout <<"hello word";

    //     }
    // };
    // int main ()
    // {
    //     myclass myobj;  // create an object of myclass (this will call the constructor)
        
    
    // return 0;
    // }



    // class car
    //  {
    //     public :
    //     string brand;
    //     string model;
    //     int year;
    //     car(string X, string Y, int Z)
    //     {
    //         brand = X;
    //         model = Y;
    //         year = Z;

    //     }
    // };


    int main()
    {
        //create car objects and call the constructor with diffrent values

        car carobj1("BMW","X5", 1999);
        car carobj2("ford","Mustang", 1969);

        // print values
        cout <<car obj1. brand << " " << carobj1.model << " "<< carobj1.year << "\n";

        cout <<car obj2. brand << " " << carobj2.model << " "<< carobj2.year << "\n";

        return 0;
        
    }