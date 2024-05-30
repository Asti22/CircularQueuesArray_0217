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
        
        //cek apakah antrian penuh
        if ((FRONT == 0 && REAR == max - 1 )||(FRONT == REAR+1)){
            cout << "\nQueue overflow\n";
            return;
        }

        //cek apakah antrian kosong

        if(FRONT == max -1){
            FRONT = 0;
            FRONT = 0;
        }
        else {
        //jika RAER berada di posisi terakhir array, kembali ke awal array
        if (REAR == max - 1)
            REAR = 0;
            else
              REAR = REAR +1;

        }
        queue_array[REAR]= num;
           
    }
    void remove(){
        //cek apakah antrina kosong
        if(FRONT == -1){
            cout <<"queue underflow\n";
            return;
        }
        cout <<"\nThe element delete from the queue is :"<< queue_array[FRONT]<<"\n";

        // cek jika antrian hanya memliki satu elemen
        if(FRONT ==REAR){
            FRONT = -1;
            REAR = -1;
        }
    }
};