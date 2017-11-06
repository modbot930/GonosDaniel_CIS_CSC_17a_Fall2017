

#include <iostream>
#include <cstdlib>

using namespace std;



int main() {
    const int element = 15;
    int numbers[element];

    
    for (int x = 0; x < element; x++){
        numbers[x] = rand()%100;
        }
    
    for (int x = 0; x < element; x++){
        for (int i = x+1;i < element; i++){
            int temp;
            
            if(numbers[x] > numbers[i]){
                temp = numbers[x];
                numbers[x] = numbers[i];
                numbers[i] = temp;
                
            }
    }
    }
      
    for (int x = 0; x < element; x++){
        cout << numbers[x] << " ";
    }
    
    int mean = 0;
    for (int x = 0; x < element; x++){
        mean += numbers[x];
        
    }
    cout << endl << "The mode of the numbers is ";
    for (int x = 0; x < element; x++){
        for (int i = x+1;i < element; i++){
            
            
            if(numbers[x] == numbers[i]){
                int mode = numbers[x];
                cout << mode << " ";
            }
    }
    }
   
    
    cout << endl <<"The mean of the numbers is " << mean/15 << endl;
    cout << "The median of the numbers is " << numbers[7] << endl;
    
    return 0;
}
