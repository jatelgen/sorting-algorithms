#include <iostream>

using namespace std;

int main (int argc, char * argv[]){

    int arr[argc];
    int min_ind;
    int size = atoi(argv[1]);

    for(int i = 2; i < argc; ++i)
        arr[i - 2] = atoi(argv[i]);

    for(int i = 0; i < size; ++i){

        int ind = i;
        for(int j = i - 1; j >= 0; --j){
            if(arr[j] > arr[ind]) swap(arr[ind],arr[j]);
            else break;
            ind = j;
        }

    }

    cout << "------------BEFORE SORT------------" << '\n';
    for (int i = 2; i < argc; ++i) cout << argv[i] << " ";
    cout << '\n';
    cout << "\n------------AFTER SORT------------" << '\n';
    for (int i = 0; i < size; ++i) cout << arr[i] << " ";
    cout << "\n";
    exit(0);

}