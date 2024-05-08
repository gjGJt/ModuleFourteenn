#include <iostream>


using namespace std;




//class #1
class Shoes
{
    //attributes
    private:
        string color;
        int size;
       


    public:


    //Shoe Constructor
    Shoes(string c, int s)
    {
        color = c;
        size = s;
    }


    //accessor and mutator Methods for Color
    string getColor()
    {
        return color;
    }


    void setColor(string col)
    {
        color = col;
    }


    //accessor and mutator Methods for Size
    bool getSize()
    {
        return size;
    }


    void setSize(int si)
    {
        size = si;
    }


    //Is it bigfoot's shoe? function
    bool BigFoot()
    {
        if (size >= 24)
        {
            return true;
        }
        return false;
    }
};


//subclass #1 for Shoes
class Crocs:public Shoes
{
    //attribute
    bool isPlatform;


    public:
    //constructor
    Crocs(string c, int s, bool p) : Shoes(c,s)
    {
        isPlatform = p;
    }


    //accessor and mutator methods for IsPlatform
    bool getIsPlatform()
    {
        return isPlatform;
    }


    void setIsPlatform(bool plat)
    {
        isPlatform = plat;
    }
};


//subclass #2 for Shoes
class Boots: public Shoes
{
    //attribute
    string type;


    public:
    //constructor
    Boots(string c, int s, string t):Shoes(c,s)
    {
        type = t;
    }


    //accessor and mutator methods for Type
    string getType()
    {
        return type;
    }


    void setType(string ty)
    {
        type = ty;
    }
};


//subclass #3 for Shoes
class Heels: public Shoes
{
    //attribute
    int inches;


    public:
    //constructor
    Heels(string c, int s, int i):Shoes(c,s)
    {
        inches = i;
    }


    //accessor and mutator methods for Inches
    int getInches()
    {
        return inches;
    }


    void setInches(int inch)
    {
        inches = inch;
    }
};


//class #2
class Caffeine
{
    //attributes
    private:
        int grams;
   
    public:


        //Caffeine Constructor
        Caffeine(int g)
        {
            grams = g;
        }


    //accessor and mutator Methods for Grams
    int getGrams()
    {
        return grams;
    }


    void setGrams(int gr)
    {
        grams = gr;
    }


    //Are you a caffeine addict? function
    bool Addict()
    {
        if (grams >= 1000)
        {
            return true;
        }
        return false;
       
    }
   
};


//subclass #1 for Caffeine
class Coffee:public Caffeine
{
    //attribute
    string flavor;


    public:
    //constructor
    Coffee(int g, string f) : Caffeine(g)
    {
        flavor = f;
    }


    //accessor and mutator methods for Flavor
    string getFlavor()
    {
        return flavor;
    }


    void setFlavor(string flav)
    {
        flavor = flav;
    }
};


//subclass #2 for Caffeine
class Tea: public Caffeine
{
    //attribute
    bool containsAntioxidants;


    public:
    //constructor
    Tea(int g, bool a):Caffeine(g)
    {
        containsAntioxidants = a;
    }


    //accessor and mutator methods for containsAntioxidants
    bool getContainsAntioxidants()
    {
        return containsAntioxidants;
    }


    void setContainAntioxidants(bool anti)
    {
        containsAntioxidants = anti;
    }
};


//subclass #3 for Caffeine
class EnergyDrink: public Caffeine
{
    //attribute
    int howManyADay;


    public:
    //constructor
    EnergyDrink(int g, int h):Caffeine(g)
    {
        howManyADay = h;
    }


    //accessor and mutator methods for How Many A Day
    int getHowManyADay()
    {
        return howManyADay;
    }


    void setHowManyADay(int many)
    {
        howManyADay = many;
    }
};


//class #3
class Pet
{
    //attributes
    private:
        int legs;
        bool isCute;
       
    public:


    //Pet Constructor
    Pet(int l, bool c)
    {
        legs = l;
        isCute = c;
    }


    //accessor and mutator Methods for Legs
    int getLegs()
    {
        return legs;
    }


    void setLegs(int le)
    {
        legs = le;
    }


    //accessor and mutator Methods for isCute
    bool getIsCute()
    {
        return isCute;
    }


    void setIsCute(bool cute)
    {
        isCute = cute;
    }


    //Scale of 0-10, how cute is the pet? function
    string cuteLevel()
    {
        string level;


        if (isCute==true)
        {
            if (legs<4)
            {
                level =  "5-10";
            }
        }
        else
        {
            level = "0-4";
        }
        return level;
    }
};


//subclass #1 for Pet
class Dog:public Pet
{
    //attribute
    string Breed;


    public:
    //constructor
    Dog(int l, bool c, string b) : Pet(l,c)
    {
        Breed = b;
    }


    //accessor and mutator methods for Breed
    string getBreed()
    {
        return Breed;
    }


    void setBreed(string br)
    {
        Breed = br;
    }
};


//subclass #2 for Pet
class Cat: public Pet
{
    //attribute
    bool isOrange;


    public:
    //constructor
    Cat(int l, bool c, bool o):Pet(l,c)
    {
        isOrange = o;
    }


    //accessor and mutator methods for isOrange
    bool getIsOrange()
    {
        return isOrange;
    }


    void setIsOrange(bool orang)
    {
        isOrange = orang;
    }
};


//subclass #3 for Pet
class Parrot: public Pet
{
    //attribute
    int numOfColors;


    public:
    //constructor
    Parrot(int l, bool c, int n):Pet(l,c)
    {
        numOfColors = n;
    }


    //accessor and mutator methods for Num of Colors
    int getNumOfColors()
    {
        return numOfColors;
    }


    void setNumOfColors(int colors)
    {
        numOfColors = colors;
    }
};


int main()
{
    //constructing Shoe Object
    Shoes one("Black",9);


    //subclass objects for Shoe
    Crocs crocodile("Yellow", 8, true);
    Boots fromDora("Brown", 10, "Cowboy");
    Heels hana("Red", 5, 4);


    //contructing Caffeine Object
    Caffeine uno(500);


    //subclass objects for Caffeine
    Coffee addicted(1000, "Caramel");
    Tea pot(500, true);
    EnergyDrink celcius(2000, 5);


    //constructing Pet Object
    Pet ichi(4, true);
   
    //subclass objects for Pet
    Dog BestieBear(4, true, "German Shepard");
    Cat MimiWiwi(4, true, true);
    Parrot Jewel(2, false, 3);
   
   
    return 0;
}
