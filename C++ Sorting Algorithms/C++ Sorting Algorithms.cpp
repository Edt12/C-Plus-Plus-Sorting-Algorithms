#include <iostream>
#include <vector>

using namespace ::std;

vector<int> insertionSort(vector<int> input) {
    //start at 1 as insertion sort works by comparing elem to all previous elem
    for (int j = 1; j < input.size();j++) {
        int key = input[j];
        int i = j - 1;
        while (i >= 0 && input[i] > key) {
            //changes index to insert the current elem (Key)
            input[i + 1] = input[i];
            i = i - 1;

        }
        //+1 as if the while is true then could end up with i being equal to -1
        input[i + 1] = key;
    }
    return input;
}

int main()
{
    vector<int> unsortedArray = { 5,41,3,27,2,0 };
    vector<int> output = insertionSort(unsortedArray);
    for (int i = 0; i < output.size(); i++)
    {
        cout << output[i] << endl;

    }


}

