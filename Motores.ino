#include <Pinagem.h>

void AndarRobo(bool frente)
{
	digitalWrite(PinoMotorEsquerdo1, frente);
	digitalWrite(PinoMotorEsquerdo2, !frente);

	digitalWrite(PinoMotorDireito1, frente);
	digitalWrite(PinoMotorDireito2, !frente);
}

void VirarEsquerda(bool frente)
{
	digitalWrite(PinoMotorEsquerdo1, HIGH);
	digitalWrite(PinoMotorEsquerdo2, HIGH);

	digitalWrite(PinoMotorDireito1, frente);
	digitalWrite(PinoMotorDireito2, !frente);
}

void VirarDireita(bool frente)
{
	digitalWrite(PinoMotorEsquerdo1, frente);
	digitalWrite(PinoMotorEsquerdo2, !frente);

	digitalWrite(PinoMotorDireito1, HIGH);
	digitalWrite(PinoMotorDireito2, HIGH);
}


/*void VirarRobo(bool esquerda)
{
	digitalWrite(PinoMotorEsquerdo1, esquerda);
	digitalWrite(PinoMotorEsquerdo2, !esquerda);

	digitalWrite(PinoMotorDireito1, !esquerda);
	digitalWrite(PinoMotorDireito2, esquerda);
}*/

void PararRobo()
{
	digitalWrite(PinoMotorEsquerdo1, HIGH);
	digitalWrite(PinoMotorEsquerdo2, HIGH);

	digitalWrite(PinoMotorDireito1, HIGH);
	digitalWrite(PinoMotorDireito2, HIGH);
}

void MovimentarPinca(bool abrir)
{
	digitalWrite(PinoMotorPinca1, abrir);
	digitalWrite(PinoMotorPinca2, !abrir);
}

void PararPinca()
{
	digitalWrite(PinoMotorPinca1, HIGH);
	digitalWrite(PinoMotorPinca2, HIGH);
}
