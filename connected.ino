#include <Servo.h>

//creamos objetos servo
Servo pulgar;
Servo indice;
Servo medio;
Servo menique;
Servo anular;
Servo abrazo;
Servo codo;
Servo hombro;
int semaforo1 = 0;
int M1, M2, M3, M4, M5, M6, M7,M8;
void setup()
{

  // asignamos los pines al servo.
  pulgar.attach(2);
  indice.attach(3);
  medio.attach(4);
  anular.attach(5);
  menique.attach(6);
  abrazo.attach(7);
  codo.attach(8);
  hombro.attach(9);

  Serial.begin(9600);
}
void pIni() {
 M1=90;
 M2=90;
 M3=90;
 M4=90;
 M5=90;
 M6=90;
 M7=90;
 M8=90;

}
void DecodificarSerial(String Mensaje) {
  // Mensaje de la forma Mn/g
  // Donde Mn Es motor 1
  // g el valor
  String Mensaje = Serial.readStringUntil('\n');
  int PosicionPleca = Mensaje.indexOf('/');
  int PosicionSaltoLinea = Mensaje.length();
  String Dato = Mensaje.substring(0, PosicionPleca);
  int Valor = Mensaje.substring(PosicionPleca + 1, PosicionSaltoLinea).toInt();
  switch (Dato){
     case ("M1"): 
        M1 = Valor;
        break;
    case ("M2"): 
        M2 = Valor;
        break;
    case ("M3"): 
        M3 = Valor;
        break;
    case ("M4"): 
        M4 = Valor;
        break;
    case ("M5"): 
        M5 = Valor;
        break;
    case ("M6"): 
        M6 = Valor;
        break;
    case ("M7"): 
        M7 = Valor;
        break;
        
  }
 }

void mueve(int M1,int M2,int M3,int M4,int M5,int M6,int M7,int M8) {
  // enviamos el valor al servo.
      pIni();
     
      pulgar.write(M1);
      medio.write(M2);
      indice.write(M3);
      menique.write(M4);
      anular.write(M5);
      abrazo.write(M6);
      codo.write(M7);
      hombro.write(M8);
     
      
void loop()
{
  if (semaforo1 == 0) {

        if (Serial.available() > 0) {
            Byte_entrada = Serial.read();
           // This is data that’s already arrived and stored in the serial receive buffer (which holds 64 bytes).
            DecodificarSerial(Byte_entrada);
        }
       else{   
          pulgar.detach();
          medio.detach();
          indice.detach();
          menique.detach();
          anular.detach();
          abrazo.detach();
          codo.detach();
          hombro.detach();
      }
  } 
}
      
