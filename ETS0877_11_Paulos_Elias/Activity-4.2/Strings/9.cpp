#include <cstring>
#include <iostream>

using namespace std;

int main() {
    char ts1[20], ts2[] = "Breaking Bad";
    strcpy(ts1, "Prison Break");
    
    cout<<"Favourite Tv series\n"<<ts1<<"\n"<<ts2<<"\n";
    return 0;
}
