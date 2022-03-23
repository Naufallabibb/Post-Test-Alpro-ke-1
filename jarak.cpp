#include <iostream>
#include <string>
#include <math.h>

using namespace std;
int main()
{
   string raptor_prompt_variable_zzyz;
   float y1;
   float a;
   float jarak;
   float x2;
   float y2;
   float b;
   float x1;

   raptor_prompt_variable_zzyz ="Masukkan titik A (x1) : ";
   cout << raptor_prompt_variable_zzyz;
   cin >> x1;
   raptor_prompt_variable_zzyz ="Masukkan titik A (y1) : ";
   cout << raptor_prompt_variable_zzyz;
   cin >> y1;
   raptor_prompt_variable_zzyz ="Masukkan titik B (x2) : ";
   cout << raptor_prompt_variable_zzyz;
   cin >> x2;
   raptor_prompt_variable_zzyz ="Masukkan titik B (y2) : ";
   cout << raptor_prompt_variable_zzyz;
   cin >> y2;
   a =(x2-x1)*(x2-x1);
   b =(y2-y1)*(y2-y1);
   jarak =sqrt(a+b);
   cout<<endl;
   cout << "Jarak titik A ke B = "<<jarak << endl;
   cout<<endl;
   system("PAUSE");
   return 0;
}
