/*
Daniel Gonos
CIS 17A (48969)
Assignment 9.7 (Case Study Modification #2)
This is a modified program of number 9-19. It uses a dynamic array using a pointer to allow any number of donations.
Unlike the program before in 9.6 this program sorts the donations in descending order vs ascending
*/

#include <iostream>//pulls in library for input & output
using namespace std;//allows us to use cin and cout

// Function prototypes
void arrSelectSort(int *[], int);//function that is used to sort the array in ascending order
void showArray(const int [], int);//used to display contents of array that is being pointed to
void showArrPtr(int *[], int);//used to display the contents of the pointer array

int main()
{
int *donate;//pointer that will be used to create a dynamic array
int user;// Number of donations inputed by the user

// An array containing the donation amounts.
cout << "How many donations would you like to enter? " << endl;//asks user to input the number of donations that they would like
cin >> user;//user inputs number of donations
donate = new int[user];//the number entered becomes the size of the dynamically created array
for(int i=0; i < user; i++){// a loop that will ask the user to input the number of donations until the max requested number is reached
    cout << endl << "Please enter in donation " << i + 1 << endl;
    cin >> donate[i];
    
}
        

//An array of pointers to int modified from original to not have a specific set of elements. This number is based on users input of donation amount. 
int *arrPtr[user];
for (int i = 0; i < user; i++){
    arrPtr[i]=nullptr;
}

// Each element of arrPtr is a pointer to int. Make each
// element point to an element in the donations array.
for (int count = 0; count < user; count++)
arrPtr[count] = &donate[count];

// Sort the elements of the array of pointers.
arrSelectSort(arrPtr, user);

// Display the donations using the array of pointers. This
// will display them in sorted order.
cout << "The donations, sorted in descending order are: \n";
showArrPtr(arrPtr, user);

// Display the donations in their original order.
cout << "The donations, in their original order are: \n";
showArray(donate, user);
delete [] donate;
return 0;
}





//****************************************************************
// Definition of function arrSelectSort. *
// This function performs an descending order selection sort on *
// arr, which is an array of pointers. Each element of array *
// points to an element of a second array. After the sort, *
// arr will point to the elements of the second array in *
// descending order. *
//****************************************************************

void arrSelectSort(int *arr[], int size)
{
int startScan, minIndex;
int *minElem;

for (startScan = 0; startScan < (size - 1); startScan++)
{
minIndex = startScan;
minElem = arr[startScan];
for(int index = startScan + 1; index < size; index++)
{
if (*(arr[index]) > *minElem)
{
minElem = arr[index];
minIndex = index;
}
}
arr[minIndex] = arr[startScan];
arr[startScan] = minElem;
}
}

//***********************************************************
// Definition of function showArray. *
// This function displays the contents of arr. size is the *
// number of elements. *
//***********************************************************

void showArray(const int arr[], int size)
{
for (int count = 0; count < size; count++)
cout << arr[count] << " ";
cout << endl;
}

//***************************************************************
// Definition of function showArrPtr. *
// This function displays the contents of the array pointed to *
// by arr. size is the number of elements. *
//***************************************************************



void showArrPtr(int *arr[], int size)
{
for (int count = 0; count < size; count++)
cout << *(arr[count]) << " ";
cout << endl;
}


