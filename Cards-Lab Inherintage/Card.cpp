#include "CARD.H"

Card::Card()
{ 
    name = "";
}

Card::Card(string n)
{  
    name = n;
}

 bool Card::is_expired() const
{   
    return false;
}

 void Card::print() const
 {  
    return 0.0;
}
