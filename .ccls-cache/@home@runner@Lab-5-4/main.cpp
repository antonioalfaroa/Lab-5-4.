#include <iostream>

using namespace std;

class Example{
  public:
    Example( int y = 10 ): data( y ){
      // empty body
    } // end Example constructor
    int getIncrementedData(){
      return data++; //the getIncrementedData is a constant function so it can not be modifed
    } // end function getIncrementedData
    int getCount(){
      //int data; (it works because the variable is declared inside the function)
      cout << "Data is " << data << endl; //static function means that the function only can use variables declared inside the same function
      return count;
    } // end function getCount
  private:
    int data;
    int count; //count can not be a static, if it is a static it is not going to be able to be used in another function
};

int main(){
Example e;
  e.getIncrementedData();
  e.getCount();



  
}