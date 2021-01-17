#include <String.h>;
void setup ()
{
     Serial.begin (9600);
}
char a;
void loop ()
{
     if (Serial.available ()> 0) {
         a = Serial.read ();
         Serial.print(a);
     }
}
