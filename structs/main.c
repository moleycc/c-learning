#include <stdio.h>
#include <stdlib.h>

typedef struct Entity {
  float x;
  float y;
  struct Entity *next;
} Entity;

int main(void) {

  Entity *player = malloc(sizeof(Entity));
  player->x = 1.0f;
  player->y = 1.0f;

  Entity *goblin = malloc(sizeof(Entity));
  goblin->x = 25.0f;
  goblin->y = 25.0f;

  Entity *orc = malloc(sizeof(Entity));
  orc->x = 50.0f;
  orc->y = 50.0f;

  player->next = goblin;
  goblin->next = orc;
  orc->next = NULL;

  Entity *current = player;
  
  while (current != NULL) {
    printf("Entity is at: %f, %f\n", current->x, current->y);
    Entity *next_entity = current->next;
    free(current);
    current = next_entity;
  }
  
  return 0;
}
