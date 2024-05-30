#include <iostream>
using namespace std;

class Queues{
private:
   static const int max = 3;
   int FRONT, REAR;
   int queue_array[max];

public:
    Queues(){
        FRONT = -1;
        REAR = -1;
    }

    void insert (){
        int num;
        cout <<"Enter a number:";
        cin>>num;
        cout <<endl;

        //cek apakah antrian kosong

        if(FRONT == max -1){
            FRONT = 0;
            FRONT = 0;
        }
    }
};