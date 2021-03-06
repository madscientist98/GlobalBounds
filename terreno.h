
#include <SFML/Graphics.hpp>
#include <iostream>

using namespace sf;

class Ground:public Dibujo{
public:
  Ground();
  Sprite getSprite(){return *spr_ground;}
  int idGround(){return id;}
private:
  Texture *txt_ground;
  Sprite *spr_ground;
  int id;
};
Ground::Ground(){
  txt_ground = new Texture();
  txt_ground->loadFromFile("Sprites/piso.png");
  spr_ground = new Sprite(*txt_ground);
  spr_ground->setPosition(0,431);
  id = 1;
}
