/*Autor: Denilson Gomes Vaz da Silva
* Graduando em Engenharia de Computação
* Universidade Federal do Ceará - UFC
*
* LeitorLuminosidade: Codigo para ler o valor de um sensor de luminosidade, LDR.
*/
//Bibliotecas
#include <Arduino.h>

//Variaveis
int sensor = A0;
int valor;

void setup() {
    pinMode(sensor, INPUT);
}

void loop() {
    // put your main code here, to run repeatedly:
}