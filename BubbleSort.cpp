#include <iostream>
#include <limits>

using namespace std;

const int INF = numeric_limits<int>::infinity();

int main (int argc, char * argv[]){
    
    int arr[argc];
    int temp;

    for(int i = 2; i < argc; ++i)
        arr[i - 2] = atoi(argv[i]);

    while(true){

        temp = numeric_limits<int>::infinity();

        for(int i = 0; i < argc - 2; ++i){
            if(arr[i] > arr[i + 1]){
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }

        if (temp == INF) break;

    }

    cout << "------------BEFORE SORT------------" << '\n';
    for (int i = 2; i < argc; ++i) cout << argv[i] << " ";
    cout << '\n';
    cout << "\n------------AFTER SORT------------" << '\n';
    for (int i = 0; i < argc - 2; ++i) cout << arr[i] << " ";
    cout << "\n";

    exit(0);

}