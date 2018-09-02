#include<iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int count(10);
    if (argc > 1) count = stoi(argv[1]);
    for (count; count>0; count--)
        cout << count << endl;
    return(0);
}
