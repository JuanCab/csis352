#include <iostream>
#include <string>
using namespace std;

template <typename itemType>
void sort(itemType array[], int n)
{
   // temporarily holds a value for swapping
   itemType temp; 
   for (int i=0; i<n-1; i++)  
   {
      int big=i;
     
      // Find the largest remaining item
      for (int j=i+1; j<n; j++) 
         if (array[j] > array[big])
            big=j;

      // Swap largest remaining item with item in position i
      temp = array[i];
      array[i] = array[big];
      array[big] = temp;
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
   sort(doubleArray, 10);
   sort(charArray, 10);
   sort(stringArray, 10);

   // Display the sorted arrays
   cout << "Sorted intArray: ";
   for (int i=0; i<10; i++)
      cout << intArray[i] << " ";
   cout << endl;

   cout << "Sorted doubleArray: ";
   for (int i=0; i<10; i++)
      cout << doubleArray[i] << " ";
   cout << endl;

   cout << "Sorted charArray: ";
   for (int i=0; i<10; i++)
      cout << charArray[i] << " ";
   cout << endl;

   cout << "Sorted stringArray: ";
   for (int i=0; i<10; i++)
      cout << stringArray[i] << " ";
   cout << endl;

   return 0;
}
