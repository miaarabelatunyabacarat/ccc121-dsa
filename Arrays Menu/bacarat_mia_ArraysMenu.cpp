//arrays menu using:
//switch case and functions

#include <iostream>
using namespace std;

class ArrayFunctions{
    public:
        //insert array
        void insertArray(int array[], int &currentSize, int pos, int value){
            for(int i = currentSize; i > pos; i--){
                array[i] = array[i - 1];
            }
            array[pos] = value;
            currentSize++;
        }
        //delete an element of an array
        void deleteArray(int array[], int &currentSize, int pos){
            for(int i = pos; i < currentSize - 1; i++){
                array[i] = array[i + 1];
            }
            currentSize--;
        }
        //print an array
        void traverseArray(int array[], int currentSize){
            
            if (currentSize == 0) {
            cout << "Array is empty." << endl;
            return;
            }
            cout << "Array Elements: ";
            for ( int i = 0; i < currentSize; i++){
                cout << array[i] << " ";
            }
            
            cout << endl;
        }

        //search an element of an array
        int searchArray(int array[], int currentSize, int value){
            for (int i = 0; i < currentSize; i++){
                if(array[i] == value){
                    return i;
                }
            }
            return -1;
        }
        //update an element of an array
        void updateArray(int array[], int pos, int value){
            array[pos] = value;
        }
};
int main(){
    ArrayFunctions a1;

    int array[20];
    int currentSize = 0;
    int choice;
    do
    {
        cout << "\n----------------" << endl;
        cout << "   ARRAYS MENU   " << endl;
        cout << "------------------" << endl;
        cout << "1. Insert " << endl;
        cout << "2. Delete " << endl;
        cout << "3. Traverse " << endl;
        cout << "4. Search " << endl;
        cout << "5. Update " << endl;
        cout << "6. Exit " << endl;

        cout << "Enter your choice: ";
        cin >> choice;
        cout << endl;

        switch (choice){
        
        case 1:
            int pos,value;
                if (currentSize == 20){
                    cout << "Array is Full" << endl;
                }

            cout << "Enter value to insert: ";
            cin >> value;
            cout << "Enter position(index): ";
            cin >> pos;
            
            if (pos < 0 || pos > currentSize) {
                    cout << "Invalid position!" << endl;
                    break;
                }
            
            a1.insertArray(array, currentSize, pos, value);

            cout << "Value inserted successfully!";
            cout << endl;
            break;

        case 2:
            cout << endl;
            cout << "Enter posiiton to delete: ";
            cin >> pos;

            if (pos < 0 || pos > currentSize) {
                    cout << "Invalid position!" << endl;
                    break;
                }
            
            a1.deleteArray(array, currentSize, pos);

            cout << "Element succesfully deleted!";
            cout << endl;
            break;

        case 3:
            a1.traverseArray(array, currentSize);
            break;

        case 4: {

            cout << "Enter a value to search: ";
            cin >> value;

            int result = a1.searchArray(array, currentSize, value);

                if (result != -1)
                {
                    cout << "Value found at index: " << result << endl;
                } else {
                    cout << "Value not found" << endl;
                }
            }

            break;

        case 5:
            cout << "Enter index to update: ";
            cin >> pos;
                    if (pos < 0 || pos >= currentSize) {
                        cout << "Invalid position!" << endl;
                        break;
                    }
            cout << "Enter new value: ";
            cin >> value;

            a1.updateArray(array, pos, value);
            cout << "Value updated successfully!! " << endl;
            cout << endl;
            break;

        case 6:
            cout << "Exiting program...";
            break;

        default:
            cout << "Invalid choice. Try Again";
            break;
        }
        
    } while (choice !=6);
    
    return 0;
}