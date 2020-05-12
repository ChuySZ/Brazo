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
int angulo = 179;
int semaforo1 = 0;
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
 

}
void mueve(int A) {
  // enviamos el valor al servo.
  switch (A) {
    case (65)://A
      pIni();
      medio.write(LOW);
      indice.write(LOW);
      menique.write(LOW);
      anular.write(LOW);
      break;
    case (66)://B
      pIni();
      pulgar.write(LOW);
      break;
    case (67): //C
      pIni();
      pulgar.write(LOW);
      medio.write(LOW);
      indice.write(LOW);
      menique.write(LOW);
      anular.write(LOW);
      abrazo.write(LOW);
      break;
    case (68): //D
      pIni();
      pulgar.write(LOW);
      medio.write(LOW);
      menique.write(LOW);
      anular.write(LOW);

      break;
    case (69): //E
      pIni();
      pulgar.write(30);
      medio.write(30);
      indice.write(30);
      menique.write(30);
      anular.write(30);
      break;
    case (70): //F
      pIni();
      indice.write(LOW);
      abrazo.write(LOW);
      break;
    case (71): //G
      pIni();
      medio.write(LOW);
    case (72): //H
      pIni();
      menique.write(LOW);
      anular.write(LOW);
      abrazo.write(LOW);
      break;
    case (73): //I
      pIni();
      pulgar.write(HIGH);
      medio.write(HIGH);
      indice.write(HIGH);
      anular.write(HIGH);
      abrazo.write(HIGH);
      break;
    case (74): //J
      pIni();
      pulgar.write(HIGH);
      medio.write(HIGH);
      indice.write(HIGH);
      anular.write(HIGH);
      abrazo.write(HIGH);
      hombro.write(HIGH);
      break;
    case (75)://K
      pIni();
      medio.write(LOW);
      menique.write(HIGH);
      anular.write(HIGH);
      break;
    case (76): //L
      pIni();
      medio.write(HIGH);
      indice.write(HIGH);
      menique.write(HIGH);
      break;
    case (77)://M
      pIni();
      pulgar.write(HIGH);
      menique.write(HIGH);
      abrazo.write(HIGH);
      break;
    case (78)://N
      pIni();
      pulgar.write(HIGH);
      anular.write(HIGH);
      menique.write(HIGH);
      abrazo.write(HIGH);
      break;
    case (79)://O
      pIni();
      medio.write(LOW);
      pulgar.write(LOW);
      menique.write(LOW);
      indice.write(LOW);
      anular.write(LOW);
      abrazo.write(LOW);
      break;
    case (80)://P
      pIni();
      medio.write(30);
      menique.write(HIGH);
      anular.write(HIGH);
      abrazo.write(LOW);
      break;
    case (81)://Q
      pIni();
      medio.write(LOW);
      pulgar.write(LOW);
      menique.write(LOW);
      indice.write(45);
      anular.write(LOW);
      abrazo.write(LOW);
      delay(500);
      abrazo.write(90);
      break;
    case (82)://R
      pIni();
      menique.write(HIGH);
      anular.write(HIGH);
      pulgar.write(HIGH);
      indice.write(LOW);
      break;
    case (83)://S
      pIni();
      pulgar.write(HIGH);
      medio.write(HIGH);
      indice.write(HIGH);
      menique.write(HIGH);
      anular.write(HIGH);
      break;
    case (84): //T
      pIni();
      pulgar.write(HIGH);
      medio.write(HIGH);
      indice.write(HIGH);
      menique.write(HIGH);
      anular.write(HIGH);
      break;
    case (85): //U
      pIni();
      pulgar.write(HIGH);
      menique.write(HIGH);
      anular.write(HIGH);
      break;
    case (86): //V
      pIni();
      pulgar.write(HIGH);
      menique.write(HIGH);
      anular.write(HIGH);
      break;
    case (87): //W
      pIni();
      menique.write(HIGH);
      anular.write(HIGH);
      break;
    case (88): //X
      pIni();
      pulgar.write(LOW);
      medio.write(30);
      indice.write(LOW);
      menique.write(LOW);
      anular.write(LOW);
      abrazo.write(HIGH);
      break;
    case (89): //Y
      pIni();
      medio.write(HIGH);
      indice.write(HIGH);
      anular.write(HIGH);
      abrazo.write(HIGH);
      break;
    case (90): //Z
      pIni();
      medio.write(HIGH);
      pulgar.write(HIGH);
      anular.write(HIGH);
      abrazo.write(HIGH);
      break;

  }

}
void loop()
{
//  if (Serial.available() > 0) {
 delay(500);
    
    pulgar.write(0);
    anular.write(0);
    indice.write(0);
    medio.write(0);
    menique.write(0);
    //Byte_entrada = Serial.read();
    
    if (semaforo1 == 0) {
    
      mueve(89);
      delay(500);
//      Byte_entrada = Serial.read();
      mueve(72);
       delay(500);
      semaforo1 = 1;
   // }
     }
      pulgar.detach();
      medio.detach();
      indice.detach();
      menique.detach();
      anular.detach();
}
