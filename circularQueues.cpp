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

        if(FRONT == -1){
            FRONT = 0;
            REAR = 0;
        }
        else {
        //jika RAER berada di posisi terakhir array, kembali ke awal array
        if (REAR == max- 1)
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
        else{
            //jika elemen yang dihapus berda di posisi terakhir array, kembali ke awal array
            if (FRONT ==max -1)
                FRONT = 0;
            else
                FRONT = FRONT + 1;
        }
    }

    void display(){

        int FRONT_Position = FRONT;
        int REAR_Postion = REAR;

        //cek apakah antrian kosong
        if (FRONT_Position== -1){
            cout <<"Queue is empety\n";
            return;
        }
        cout <<"\nElement in the queue are...\n";
        //jika FRONT <=REAR, iterasi dari front hingga rear
        if(FRONT_Position<= REAR_Postion) {
            while(FRONT_Position <= REAR_Postion){
                cout << queue_array[FRONT_Position]<<" ";
                FRONT_Position++;
            }
            cout << endl;
        }
        else{
            //jiks front> rear, iterasi dari front hingga akhir array
            while(FRONT_Position <= max -1){
                cout <<queue_array[FRONT_Position]<<" ";
                FRONT_Position++;
            }
            FRONT_Position =0;

            //iterasi dari awal array hingga rear
            while(FRONT_Position <= REAR_Postion){
                cout <<queue_array[FRONT_Position]<<" ";
                FRONT_Position++;
            }
            cout <<endl;
        }
    }
};

int main(){
    Queues q;
    char ch;

    while(true){
        try{
            cout <<"Menu"<<endl;
            cout <<"1. Inplement insert operation"<<endl;
            cout <<"2. Inplement delete operation"<<endl;
            cout <<"3. Display values"<<endl;
            cout <<"4. Exit"<<endl;
            cout <<"Enter your choise(1-4):";
            cin>> ch;
            cout <<endl;

            switch(ch){
            case '1':{
                
                q.insert();
                break;
            }
            case '2':{
                q.remove();
                break;
            }
            case '3':{
                q.display();
                break;
            }
            case '4':{
                return 0;
            }
            default:{
                cout <<"Invalid option!!"<<endl;
                break;
            }
           }
        }
        catch(exception& e) {
            cout <<"Check for the values entered. "<<endl;
        }
    }
    return 0;
}