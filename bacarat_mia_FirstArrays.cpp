#include <iostream>
using namespace std;

class ArrayFunctions{
    public:
        void insertArray(int array[], int &currentSize, int pos, int value){
            for(int i = currentSize; i > pos; i--){
                array[i] = array[i - 1];
            }
            array[pos] = value;
            currentSize++;

        }

        void deleteArray(int array[], int &currentSize, int pos){
            for(int i = pos; i < currentSize - 1; i++){
                array[i] = array[i + 1];
            }
            currentSize--;
        }

        void traverseArray(int array[], int currentSize){
            /*cout << "Current size: " << currentSize << endl;
            cout << "Array: "; */
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

        int searchArray(int array[], int currentSize, int value){
            for (int i = 0; i < currentSize; i++){
                if(array[i] == value){
                    return i;
                }
            }
            return -1;
        }

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
        cout << "   ARRAYS MENU" << endl;
        cout << "----------------" << endl;
        cout << "1. Insert " << endl;
        cout << "2. Delete " << endl;
        cout << "3. Traverse " << endl;
        cout << "4. Search " << endl;
        cout << "5. Update " << endl;
        cout << "6. Exit " << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice){
        int pos,value;
        case 1:

            if (currentSize == 20){
                cout << "Array is Full" << endl;
            }

            cout << "Enter value to insert: ";
            cin >> value;
            cout << "Enter position(index): ";
            cin >> pos;

            
            a1.insertArray(array, currentSize, pos, value);

            cout << "Value inserted successfully!";
            cout << endl;
            break;

        case 2:
            cout << "Enter posiiton to delete";
            cin >> pos;
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