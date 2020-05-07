//********************C L A S E C A R R O ********************
class Carro{
public:
byte encoderI=2; //pin del encoder de la llanta izquierda
byte encoderD=3; //pin del encoder de la llanta derecha
byte adelanteI=4; //pin avance adelante llanta izquierda
byte atrasI=5; //pin de reversa llanta izquierda
byte potenciaI=6; //pin de potencia llanta izquierda pin PWM
byte adelanteD=7; //adelante llanta derecha
byte atrasD=8; //atras llanta derecha
byte potenciaD=9; //potencia llanta derecha pin PWM
byte sensortrigerC=10; //sensor ultrasonido central trigger
byte sensorechoC=11; //sensor ultrasonido central echo
byte sensortrigerI=12; //sensor ultrasonido izquierda trigger
byte sensorechoI=13; //sensor ultrasonido izquierda echo
byte sensortrigerD=14; //sensor ultrasonido derecha trigger
byte sensorechoD=15; //sensor ultrasonido derecho echo
byte potenciaMAX=200;

Ultrasonido UltraC; //
Ultrasonido UltraI; //
Ultrasonido UltraD;


//DEFINIENDO LAS INTERRUPCIONES--USAN MIEMBROS ESTATICOS
static volatile unsigned int contaI; //contador de las vueltas de la llanta izquierda
static volatile unsigned int contaD; //contador de las vueltas de la llanta derecha
//CONTADORES DE RUEDAS IZQUIERDA Y DERECHA
static void contarRuedaI(); //metodo a registrar con la interrupcion en constructor
static void contarRuedaD();

//Constructor -- configura variables, sensores e interrupciones
Carro();

//acciona el motor,recibe como parametro la accion en la llanta izquierda y la llanta derecha
//el valor de cada llanta si es positivo movera la llanta hacia adelante
//si es negativo movera la llanta hacia atras
//el numero representara la potencia aplicada a cada llanta
//los valores pueden ir de -10 hasta 10
void mover(int Izquierda, int Derecha);

//gira la cantidad de grados especifica: - a la izquierda, + derecha
//usa los contadores de vuelta para la presicion al girar
//tu decides si usas dos llantas para girar o solo una
void girar(int grados);
}
