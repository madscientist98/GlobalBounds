#include "Flecha.h"

Flecha::Flecha(){
  txt_flecha = new Texture;

  txt_flecha->loadFromFile("Sprites/flecha.png");

  spr_flecha = new Sprite(*txt_flecha);
  spr_flecha->setPosition(150,340);
  angulo=0;
}
void Flecha::actualizarF(float tiemp){
  if(tiemp < 1 ) spr_flecha->rotate(10);
  /*tiemp/=10;
  spr_flecha->setPosition(spr_personaje->getPosition().x /2.f, (spr_personaje->getPosition().y /2.f)+10);
  spr_flecha->setOrigin((float)(spr_flecha->gettexture()->getSize().x), (float)(spr_flecha->gettexture()->getSize().y));
  if(){//escribir la condicion del mouse
      //ang=;
      spr_flecha->setRotation(spr_flecha->getRotation+ang);
  }*/
}
