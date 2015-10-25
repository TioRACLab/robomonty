#include <Pinagem.h>

void setup()
{
	pinMode(PinoMotorEsquerdo1, OUTPUT);
	pinMode(PinoMotorEsquerdo2, OUTPUT);

	pinMode(PinoMotorDireito1, OUTPUT);
	pinMode(PinoMotorDireito2, OUTPUT);

	pinMode(PinoMotorPinca1, OUTPUT);
	pinMode(PinoMotorPinca2, OUTPUT);
}

void loop()
{
	/*AndarRobo(true);
	delay(2000);
	AndarRobo(false);
	delay(2000);
	VirarEsquerda(true);
	delay(2000);
	VirarEsquerda(false);
	delay(2000);
	VirarDireita(true);
	delay(2000);
	VirarDireita(false);
	delay(2000);
	PararRobo();*/
	//delay(2000);
	MovimentarPinca(false);
	delay(500);
	PararPinca();
	delay(1800);
	MovimentarPinca(true);
	delay(2000);
	PararPinca();
	delay(500);
}
