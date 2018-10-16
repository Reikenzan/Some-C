#include <iostream>

using namespace std;

#include "ccc_time.h"

int main()
{  
   Time wake_up(9, 0, 0);
   Time now (11,53,16);
   
   cout<< now-wake_up <<endl;
   
   wake_up.add_seconds(1000); 
      /* a thousand seconds later */
   cout << wake_up.get_hours() 
      << ":" << wake_up.get_minutes()
      << ":" << wake_up.get_seconds() << "\n";
   system ("pause");
   return 0;
}
