#include <iostream>
#include <limits>

using namespace std;

const int INF = numeric_limits<int>::infinity();


/*
    argc defines size of the array and all
    inputs to the command line after are the
    array to be sorted.
    This funcion takes in an array and uses
    bucket sort to output sorted array
*/
int main (int argc, char * argv[]){
    
    int arr[argc]; //array of integers to sort
    int temp;      //a temp variable to hold value

    //add all array inputs from command line to new int array
    for(int i = 2; i < argc; ++i)
        arr[i - 2] = atoi(argv[i]);

    //Loops until sorted
    while(true){

        //sets temp to infinity at start of each iteration
        temp = numeric_limits<int>::infinity();

        //Each iteration of array swaps with bucket next to
        //it if greater than
        for(int i = 0; i < argc - 2; ++i){
            if(arr[i] > arr[i + 1]){
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }

        //If temp still infinity no passes were made thus sorted
        if (temp == INF) break;

    }

    //Print unsorted and sorted arrays

    cout << "------------BEFORE SORT------------" << '\n';
    for (int i = 2; i < argc; ++i) cout << argv[i] << " ";
    cout << '\n';
    cout << "\n------------AFTER SORT------------" << '\n';
    for (int i = 0; i < argc - 2; ++i) cout << arr[i] << " ";
    cout << "\n";

    exit(0);

}