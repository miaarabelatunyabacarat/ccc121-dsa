//arrays menu using:
//switch case and functions
#include <iostream>
using namespace std;

//insert 
void insertArray(int array[], int &currentSize, int pos, int value) {
    for (int i = currentSize; i > pos; i--) {
        array[i] = array[i - 1];
    }

    array[pos] = value;
    currentSize++;
}

//delete
void deleteArray(int array[], int &currentSize, int pos) {
    for (int i = pos; i < currentSize - 1; i++) {
        array[i] = array[i + 1];
    }

    currentSize--;
}

//traverse
void traverseArray(int array[], int currentSize) {
    if (currentSize == 0) {
        cout << "Array is empty." << endl;
        return;
    }

    cout << "Array: ";

    for (int i = 0; i < currentSize; i++) {
        cout << array[i] << " ";
    }

    cout << endl;
}

//search
int searchArray(int array[], int currentSize, int value) {
    for (int i = 0; i < currentSize; i++) {
        if (array[i] == value) {
            return i;
        }
    }

    return -1;
}

//update
void updateArray(int array[], int pos, int value) {
    array[pos] = value;
}


int main() {
    int array[20];
    int currentSize = 0;

    int choice;

    do {
        cout << "\n----------------" << endl;
        cout << "   ARRAYS MENU   " << endl;
        cout << "------------------" << endl;

        cout << "1. Insert" << endl;
        cout << "2. Delete" << endl;
        cout << "3. Traverse" << endl;
        cout << "4. Search" << endl;
        cout << "5. Update" << endl;
        cout << "6. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

            case 1: {
                int pos, value;

                if (currentSize == 20) {
                    cout << "Array is full!" << endl;
                    break;
                }
                cout << "Enter value to insert: ";
                cin >> value;

                cout << "Enter position (index): ";
                cin >> pos;

                if (pos < 0 || pos > currentSize) {
                    cout << "Invalid position!" << endl;
                    break;
                }

                

                insertArray(array, currentSize, pos, value);

                cout << "Value inserted successfully!" << endl;
                cout << endl;
                break;
            }

            case 2: {
                int pos;

                if (currentSize == 0) {
                    cout << "Array is empty!" << endl;
                    break;
                }

                cout << "Enter position to delete: ";
                cin >> pos;

                if (pos < 0 || pos >= currentSize) {
                    cout << "Invalid position!" << endl;
                    break;
                }

                deleteArray(array, currentSize, pos);

                cout << "Element successfully deleted!" << endl;
                cout << endl;
                break;
            }

            case 3:
                traverseArray(array, currentSize);
                break;
                cout << endl;

            case 4: {
                int value;

                if (currentSize == 0) {
                    cout << "Array is empty!" << endl;
                    break;
                }

                cout << "Enter a value to search: ";
                cin >> value;

                int result = searchArray(array, currentSize, value);

                    if (result != -1) {
                        cout << "Value found at index: " << result << endl;
                    } else {
                        cout << "Value not found." << endl;
                    }

                break;
            }

            case 5: {
                int pos, value;

                    if (currentSize == 0) {
                        cout << "Array is empty!" << endl;
                        break;
                    }

                cout << "Enter index to update: ";
                cin >> pos;

                    if (pos < 0 || pos >= currentSize) {
                        cout << "Invalid position!" << endl;
                        break;
                    }

                cout << "Enter new value: ";
                cin >> value;

                updateArray(array, pos, value);
                cout << "Value updated successfully!! " << endl;
                break;
            }

            case 6:
                cout << "Exiting program..." << endl;
                break;

            default:
                cout << "Invalid choice. Try again." << endl;
        }

    } while (choice != 6);

    return 0;
}