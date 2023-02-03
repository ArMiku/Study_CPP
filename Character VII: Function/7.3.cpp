//
// Created by QIHANG SUN on 2023/2/2.
//
#include <iostream>
using namespace std;

struct box{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void ShowBox(box box1);
void SetVolume(box * box1);

int main(){
    box box1;
    cout << "Input name of the box: ";
    cin >> box1.maker;
    cout << "Input height, width and length of the box:";
    cin >> box1.height >> box1.width >> box1.length;
    SetVolume(&box1);
    ShowBox(box1);
    return 0;
}

void ShowBox(box box1){
    cout << box1.maker << ": " << endl;
    cout << box1.height << " " << box1.width << " " << box1.length << endl;
    cout << box1.volume << endl;
}

void SetVolume(box * box1){
    box1->volume = box1->length * box1->height * box1->width;
}