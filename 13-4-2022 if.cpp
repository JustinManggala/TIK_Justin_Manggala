#include <iostream>
using namespace std;

int main(){
     /*
    jika nilai >= 100 sangat memuaskan anak keren
    jika nilai >= 90 lulus sangat memuaskan
    jika nilai >= 80 lulus memuaskan
    jika nilai > 75 cukup
    <= 75 tidak Lulus
    <= 60 anak tidak pintar
    */
    int nilai;
    cout<<"Masukan Nilai = "; cin>>nilai;
    if (nilai >=101 || nilai <0){
        cout<<"Diluar jangkauan";
    }
    else if (nilai >=100){
        cout<<"Sangat memuaskan anak keren";
    }
    else if (nilai >= 90) {
        cout<<"Lulus sangat memuaskan";
    }
    
    else if (nilai >= 80){
        cout<<"Lulus memuaskan";
    }
    else if (nilai >= 75){
        cout<<"cukup";
    }
    else if (nilai <= 75){
        cout<<"tidak lulus";
    }
    


    return 0;
}//end of main function
