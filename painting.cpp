#include<iostream>
#include<iomanip>
using namespace std;

//  Output
//  Artist name, year painted, starting auction price, updated price

class Painting
{
    private://can access directly
    string artist;
    int yearPainted;
    double auctionPrice;

    public:
    //Mutator=inline member function
    void setArtist(string s)
    {
        artist = s;
    }
    void setYear( int y)
    {
        yearPainted = y;
    }
    void setPrice( double p)
    {
        auctionPrice = p;
    }

    //Accessor function inline
    string getArtist() const
    {
        return artist;
    }
    int getYear() const
    {
        return yearPainted;
    }
    double getPrice() const
    {
        return auctionPrice;
    }

    void auction();
    void displayPrice() const;

};

//Regulator function
 void Painting:: auction() //update
    {
        auctionPrice +=500;
    }

void Painting:: displayPrice() const
{
    cout<<"Current auction price: "<<auctionPrice<<endl;

}

int main() 
{
    Painting p;
    //can call public

    //use mutator to assign value to the private member variable

     p.setArtist(" Kwon Ji Yong");
     p.setPrice(1200);
     p.setYear(2017);

     /*
     string name;
     cout<<"Name: ";
     getline(cin,name);
     p.setArtist(name);
     */
     
     cout<<setprecision(2)<<fixed;
     cout<<"The artist name is "<<p.getArtist()<<endl;
     cout<<"The starting price is "<<p.getPrice()<<endl;
     cout<<"The year is "<<p.getYear()<<endl;
     

     for(int i=0;i<5;i++)
     {
         p.auction();
         p.displayPrice();

     }


    return 0;
}
