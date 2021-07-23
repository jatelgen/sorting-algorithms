#include <iostream>
#include <algorithm>

using namespace std;

int main (int argc, char * argv[]){

    int arr[argc];
    int min_ind;

    for(int i = 2; i < argc; ++i)
        arr[i - 2] = atoi(argv[i]);


    for(int i = 0; i < argc - 2; ++i){

        min_ind = i;
        for(int j = i; j < argc - 2; ++j)
            if (arr[j] < arr[min_ind]) min_ind = j;

        swap(arr[i], arr[min_ind]);

    }

    cout << "------------BEFORE SORT------------" << '\n';
    for (int i = 2; i < argc; ++i) cout << argv[i] << " ";
    cout << '\n';
    cout << "\n------------AFTER SORT------------" << '\n';
    for (int i = 0; i < argc - 2; ++i) cout << arr[i] << " ";
    cout << "\n";

}