#include <iostream>
using namespace std;

class Artwork
{
protected:
    string title;
    string name;
    int price;
    float discount;

public:
    Artwork(string t, string n, int p) : title(t), name(n), price(p),discount(0) {}
    virtual void displayDetails()
    {
        cout << "Title: " << title << endl;
        cout << "Artist: " << name << endl;
        cout << "Price: " << price << endl;
        cout << "Discount: " << discount<<endl;
        cout << "DiscountedPrice: " << price-discount<<endl;
    }
    virtual void applyDiscount(float p) = 0;
    virtual ~Artwork()
    {
        cout << "Destructing: " << title << endl;
    }
};

class Painting : public Artwork
{
protected:
    string medium;


public:
    Painting(string t, string n, int p, string m) : Artwork(t, n, p), medium(m) {}
    void displayDetails()
    {
        Artwork::displayDetails();
        cout << "Medium: " << medium << endl;
    }
    void applyDiscount(float p)
    {
        discount=price*(p/100);
    }
};

class Sculpture : public Artwork
{
protected:
    string material;

public:
    Sculpture(string t, string n, int p, string m) : Artwork(t, n, p), material(m) {}
    void displayDetails()
    {
        Artwork::displayDetails();
        cout << "Material: " << material << endl;
    }
    void applyDiscount(float p)
    {
        discount=0;
    }
};

class DigitalArt : public Artwork
{
protected:
    string resolution;

public:
    DigitalArt(string t, string n, int p, string r) : Artwork(t, n, p), resolution(r) {}
    void displayDetails()
    {
        Artwork::displayDetails();
        cout << "Resolution: " << resolution << endl;
    }
    void applyDiscount(float p)
    {
        discount=price*((p+1)/100);
    }
};

void DisplayGalleryDetails(Artwork* gallery[],int size)
{
    for(int i=0;i<size;i++)
        gallery[i]->displayDetails();
}

int main()
{
    Artwork *arts[5];
    arts[0] = new Painting("Painting 1", "Person 1", 100000, "Acrylic");
    arts[1] = new Sculpture("Painting 2", "Person 2", 200000, "Bronze");
    arts[2] = new DigitalArt("Painting 3", "Person 3", 300000, "800x600");
    arts[3] = new Painting("Painting 4", "Person 4", 400000, "Waterpaint");
    arts[4] = new Sculpture("Painting 5", "Person 5", 500000, "Ash");

    for (int i = 0; i < 5; i++)
    {
        arts[i]->displayDetails();
        cout << endl;
    }

    arts[0]->applyDiscount(1);
    arts[1]->applyDiscount(2);
    arts[2]->applyDiscount(3);
    arts[3]->applyDiscount(4);
    arts[4]->applyDiscount(5);

    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        arts[i]->displayDetails();
        cout << endl;
    }
    DisplayGalleryDetails(arts,5);

    for (int i = 0; i < 5; i++)
        delete arts[i];
}
