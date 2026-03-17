#include <iostream>
using namespace std;
 main() {
    int rows = 5;

    for(int i = rows; i >= 1; i--) {      
        for(int j = rows; j >= rows - i + 1; j--) {   
            cout << j << " ";
        }
        cout << endl;
    }

    
}
    
