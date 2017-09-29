#include <iostream>
#include <sstream>
using namespace std ;

bool read_numbers(int array[10])
{
    string string; 
    getline( cin, string );
    istringstream stream( string );
    bool success = true;
    for( int i = 0; i < 10; ++i ) {
        if( !( stream >> array[ i ] ) ) {
           success = false;
           break;
        }
    }
   
   return success;
}

int main()
{
   int array1[10];
   int array2[10];
   int max;
   
   if( read_numbers( array1 ) && read_numbers( array2 ) )
        {
            int i=0;
            int j=0;
            int maxA[10];
            maxA[0]=array1[0];
            //max=array1[0]+array2[0];
            for (i=1; i < 10 ; ++i)
                {
                    if( maxA[i-1] < array1[i] )
                        {
                            maxA[i]=array1[i];
                        }  
                    else 
                        {
                            maxA[i]=maxA[i-1];
                        }    
                }
            int max2[10]; 
            for (j=0; j < 10 ; ++j)
                {
                    max2[j]=array2[j]+maxA[j];    
                
                }
           for(int j=1 ;j<10  ;j++)
                {
                    if (max2[j-1]< max2[j])
                        {
                            max=max2[j];
                        }
                    else
                    {
                        max=max2[j-1];
                    }
                }   
            cout << max << endl ;    
        }
   else {
       std::cout << "has  sasa";
   }
}
