/*  LIZ BELL
March 27, 2024
Dr. McMillan, Tarrant County College
COSC 1437-58000, Programming Fundamentals II
The purpose of this program is to apply functions and arrays to let the user create a functional shoopping list that highlights their favorite item.
Coding this helped me further understand how to use arrays and functions.
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

#define GREENBACKGROUND "\033[42m"
#define RESET "\033[0m"

int main() {
    vector<string> shoppingList;
    string item;

    // Accept items until "end" is entered
    cout << "Enter items to add to your shopping list (type 'end' to finish):\n";
    while (true) {
        getline(cin, item);
        if (item == "end") {
            break;
        }
        shoppingList.push_back(item);
    }

    // Sort the list in descending order
    sort(shoppingList.rbegin(), shoppingList.rend());

    // Highlight the favorite item
    string favoriteItem;
    cout << "Enter your favorite item from the list: ";
    getline(cin, favoriteItem);

    // Output the sorted list with favorite item highlighted
    cout << "Your sorted shopping list:\n";
    for (const string& listItem : shoppingList) {
        if (listItem == favoriteItem) {
           cout << GREENBACKGROUND << listItem << RESET << " *****" << '\n';; // Highlight the favorite item
        } else {
            cout << listItem << '\n';
        }
    }

    return 0;
}
