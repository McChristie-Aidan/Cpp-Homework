#include <iostream> 
#include <cstdlib>
#include <ctime>
#define NUMBER_OF_SHIPS 5

using namespace std;

class Ship
{
private:
   int xLoc;
   int yLoc;
public:
   void SetLoc(){
      this->xLoc = rand() % 10 + 1;
      this->yLoc = rand() % 10 + 1;
   }

   void PrintLoc(){
      cout << xLoc << "," << yLoc << endl;
   }
};

int main()
{
   srand(time(0));
   Ship ships[NUMBER_OF_SHIPS];

   for (int i = 0; i < NUMBER_OF_SHIPS; i++)
   {
      ships[i].SetLoc();
      ships[i].PrintLoc();
   }
   
   return 0;
}