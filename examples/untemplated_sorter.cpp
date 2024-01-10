#include <iostream>
#include <string>
using namespace std;

void sort(int array[], int size)
{
   // temporarily holds a value for swapping
   int temp; 
   for (int i=0; i<size-1; i++)  
   {
      int small=i;

      // Find the smallest remaining item
      for (int j=i+1; j<size; j++) 
         if (array[j] < array[small])
            small=j;

      // Swap smallest remaining item with item in
      // position i
      temp = array[i];
      array[i] = array[small];
      array[small] = temp;
   }
}

// Define arrays of various sorts
int main()
{
   int intArray[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
   double doubleArray[10] = { 1.1, 2.2, 3.3, 4.4, 5.5, 
                              6.6, 7.7, 8.8, 9.9, 10.10 };
   char charArray[10] = { 'a', 'b', 'c', 'd', 'e', 
                          'f', 'g', 'h', 'i', 'j' };
   string stringArray[10] = { "one", "two", "three", "four", "five", 
                              "six", "seven", "eight", "nine", "ten" };

   // Sort the arrays
   sort(intArray, 10);

   // Display the sorted arrays
   cout << "Sorted intArray: ";
   for (int i=0; i<10; i++)
      cout << intArray[i] << " ";
   cout << endl;

   return 0;
}
