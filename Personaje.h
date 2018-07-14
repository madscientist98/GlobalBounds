#include <SFML/Graphics.hpp>
#include <iostream>

using namespace sf;
using namespace std;


class Personaje{
public:
  Personaje();

  void actualizar(float tiemp);
  Sprite get_sprite(){return *spr_personaje;};
  void izquierda();
  void derecha();
  void arriba();
  void abajo();
  void set_frame(Sprite &spr_p,Vector2i numero_frame);
  void frame_loop();
  float getpositionX();
  float getpositionY();
  void freno();
  void restavida();
private:
  Sprite *spr_personaje;
  Texture *txt_personaje;
  Vector2f velocidad;
  Vector2f aceleracion;
  Vector2i division_sprites;
  Vector2i frame_actual;
  int vida;
  int voltear;
  friend class Juego;
  friend class Flecha;
};
