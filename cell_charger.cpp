#include <iostream>
using namespace std;

int main()
{
    int cells[] = {17, 70, 9, 4, 12};
    cout<<"Before charging..."<<endl;
    for(int index = 0; index < 5; index++){
        cout<<"Cell "<<index+1<<": "<<cells[index]<<endl;
    }
    
    for(int i =0; i < 5; i++){
        if (cells[i] != 100){
            for(int charge = cells[i]; charge < 100; charge++){
                cells[i]++;
            }
        }
    }
    
    cout<<"After charging..."<<endl;
    for(int index = 0; index < 5; index++){
        cout<<"Cell "<<index+1<<": "<<cells[index]<<endl;
    }

    return 0;
}