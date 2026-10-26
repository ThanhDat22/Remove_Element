#include <iostream>
#include <vector>

using namespace std;

int remove_item(vector<int>& vec, int item) {
    size_t last_position = 0;
    for (size_t i = 0; i < vec.size(); ++i) {
        if (vec.at(i) != item) {
            vec.at(last_position) = vec.at(i);
            ++last_position;
        }
    }
    vec.resize(last_position);
    return last_position;
} // Time Complexity: O(n), Space Complexity: O(1)

void print_vector(const vector<int>& vec) {
    cout << "[";
    for (size_t i = 0; i < vec.size(); ++i) {
        cout << vec.at(i); // Print each element of the vector
        if (i != vec.size() - 1) {
            cout << ", "; // Add a comma and space between elements
        }
    }
    cout << "]" << endl << endl;;
} // Time Complexity: O(n), Space Complexity: O(1)

int main() {
    vector<int> vec_1 = {0,1,2,2,3,0,4,2};
    int item_1 = 2;
    cout << "Original vector: ";
    print_vector(vec_1);
    cout << item_1 << " is removed from the vector." << endl;
    remove_item(vec_1, item_1);
    print_vector(vec_1);
}