/*
Carlos Escobar
4/14/2026
Lab 13
This program demonstrates the Bubble Sort algorithm
*/

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

void fillVector(vector<int>&);
void bubbleSort(vector<int>&);
void printVector(const vector<int>&);

//main function, calls other functions
int main()
{
    vector<int> numbers(25);

    srand(time(0));

    cout << "This program demonstrates the Bubble Sort on a Vector " << endl
        << endl;

    fillVector(numbers);

    cout << "Original: ";
    printVector(numbers);

    bubbleSort(numbers);

    return 0;
}

//function prints random numbers
void fillVector(vector<int>& v)
{
    for (int i = 0; i < v.size(); i++)
    {
        v[i] = rand() % 100;
    }
}

//function sort the numbers via bubble sort
void bubbleSort(vector<int>& v)
{
    int temp;

    for (int pass = 0; pass < v.size() - 1; pass++)
    {
        for (int i = 0; i < v.size() - 1 - pass; i++)
        {
            if (v[i] > v[i + 1])
            {
                temp = v[i];
                v[i] = v[i + 1];
                v[i + 1] = temp;
            }
        }

        cout << "Pass # " << pass + 1 << ": ";
        printVector(v);
    }
}

//this function show the vector on the screen
void printVector(const vector<int>& v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << setw(4) << v[i];
    }
    cout << endl;
}