#include <iostream>
using namespace std;

int main()
{
    int arr[50], i, elem, pos, tot, op, flag = 0;
    cout << "Enter the Size for Array: ";
    cin >> tot;
    cout << "Enter " << tot << " Array Elements: ";
    for (i = 0; i < tot; i++)
        cin >> arr[i];

    cout << "choose your operation: " << endl << "1 insertion" << endl << "2 deletion" << endl << "3 search" << endl;
    cin >> op;
   

        switch (op)
        {
        case 1:


            cout << "\nEnter Element to Insert: ";
            cin >> elem;
            cout << "At What Position ? ";
            cin >> pos;
            for (i = tot; i >= pos; i--)
                arr[i] = arr[i - 1];
            arr[i] = elem;
            tot++;
            cout << "\nThe New Array is:\n";
            for (i = 0; i < tot; i++)
                cout << arr[i] << "  ";
            cout << endl;
            break;
        case 2:
            cout << "\nEnter the position to remove: ";
            cin >> elem;
            for (i = elem; i < tot; i++)
            {
                arr[i - 1] = arr[i];
            }
            tot = tot - 1;
            cout << "\nThe New Array is:\n";
            for (i = 0; i < tot; i++)
                cout << arr[i] << "  ";
            cout << endl;
            break;
        case 3:
            cout << "\nEnter the number you searching for: ";
            cin >> elem;
            for (i = 0; i < tot; i++)
            {
                if (elem == arr[i])
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                cout << "The element is not found";
            }
            else
            {
                cout << "The number is found at index :" << i;
            }
        default:
            break;

        }
        
       
    }
   
}

