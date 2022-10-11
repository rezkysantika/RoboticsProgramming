// NAMA		: Rezky Dwisantika Pujiastuti
// NRP      : 5024221001
// Jurusan  : Teknik Komputer

#include <iostream>
#include <cmath>

#define GRAVITASI 10 //10 m/s^2
#define START_PENGUKURAN 1 //pengukuran dimulai dari 1 meter
#define SUDUT 45 //sudut elevasi tembakan

using namespace std;

float mencari_V0(int jarak, int speed)
{
	/* Fungsi Mencari v0 */
	float v1;
	
	v1 = sqrt(10 * jarak) + speed;
	
  	return v1;
}

int speed_dgn_loss(int v1)
{
    int v2;
    
    if(v1 >= 1 && v1 <= 10) 
        v2 = v1 - 1;
    else if(v1 >= 11 && v1 <= 20)
        v2 = v1 - 3;
    else if(v1 >= 21 && v1 <= 30)
        v2 = v1 - 5;
    
    return v2;
}

int main()
{
    /* tulis kode utama kalian disini */
    int v1, jarak;
  
  	/* input adalah kecepatan tangensial maksimum roller */
  	cout << "Masukkan kecepatan tangensial maks roller: " << endl;
  	cin >> v1;
  	
  	int v2 = speed_dgn_loss(v1);
  	jarak = pow(v2, 2) / 10;
    float vTan = mencari_V0(jarak, v1 - v2);
  
  	/* std::cout << jarak << " " << kecepatan tangensial << std::endl */
  	cout << jarak << " " << vTan << endl;
    return 0;
}