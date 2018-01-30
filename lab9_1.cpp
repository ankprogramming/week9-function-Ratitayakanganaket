#include <iostream>

using namespace std;

void swap(int *a, int *b) {
    int Ratitaya;
    Ratitaya = *a;
    *a =*b;
    *b=Ratitaya;
}
int main() {
    int a,b, cmd;
    cin >>a;
    cin>>b;
    do{
        cout << "manu\na. swap()\n2. guit()" <<endl;
        cin>> cmd;
        if (cmd ==1){
            cout <<a<<b ; swap (&a,&b);
        }else {break;}
    }while(1);
     return 0;
    /*เขียนโปรแกรมรับค่าจำนวนเต็มบวกจากคีย์บอร์ด 2 จำนวน เก็บไว้ในตัวแปร และสลับค่าข้อมูลระหว่างตัวแปรสองตัวแปรดังกล่าว
    โดยกำหนดให้โปรแกรมสลับค่าข้อมูลจนกว่าผู้ใช้งานต้องการออกจากการทำงานของโปรแกรม
    และแบ่งการทำงานของโปรแกรมเป็นโปรแกรมย่อย
    */



}
