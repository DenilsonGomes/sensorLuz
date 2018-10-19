/*Autor: Denilson Gomes Vaz da Silva
* Graduando em Engenharia de Computação
* Universidade Federal do Ceará - UFC
*
* LeitorLuminosidade: Codigo para ler o valor de um sensor de luminosidade, LDR.
*/
//Bibliotecas
#include <Arduino.h>

//Variaveis
int sensor = A0; //Variavel sensor no pino A0
int valor; //Variavel para valor do sensor

void setup() {
    pinMode(sensor, INPUT); //Pino sensor como entrada
    Serial.begin(9600); //Inicia comunicação serial
}

void loop() {
    valor = analogRead(sensor); //Valor recebe a leitura do sensor
    Serial.println(valor); //Exibe o valor da leitura
    delay(3000); //Espera 3 segundos
}