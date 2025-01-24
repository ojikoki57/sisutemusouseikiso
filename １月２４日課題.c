#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int memory, reflex, charm;
    int total = 20;

    srand((unsigned int)time(NULL));

    do {
        memory = rand() % (total + 1); 
        reflex = rand() % (total - memory + 1);
        charm = total - memory - reflex; 
    } while (charm < 0); 

    char *character_class;
    if (memory > reflex && memory > charm) {
        character_class = "魔法使い";
    } else if (reflex > memory && reflex > charm) {
        character_class = "ファイター";
    } else if (charm > memory && charm > reflex) {
        character_class = "盗人";
    } else {
        character_class = "二つの能力を持っている";
    }

    printf("記憶力: %d, 瞬発力: %d, 魅力: %d\n", memory, reflex, charm);
    printf("あなたのクラスは: %s\n", character_class);

    return 0;
}