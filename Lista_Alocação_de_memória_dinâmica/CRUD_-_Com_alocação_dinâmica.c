#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct CRUD
{
    char name[30];
    int age;
    char gender;
}profile;

profile create(profile SingleStruct){
    char *s;
    getchar();
    fgets(SingleStruct.name, 30, stdin);
    s = strchr(SingleStruct.name, '\n');
    if (s != NULL) {
        *s = '\0';
    }
    scanf("%i", &SingleStruct.age);
    scanf(" %c", &SingleStruct.gender);
    return SingleStruct;
}

void append(profile *structs, profile single_struct, int quantity){
    structs[quantity - 1] = single_struct;
}

void delete(profile single_struct, profile *structs, int *quantity){
    int i, j;
    char *s;
    getchar();
    fgets(single_struct.name, 30, stdin);
    s = strchr(single_struct.name, '\n');
    if (s != NULL) {
        *s = '\0';
    }
    scanf("%i", &single_struct.age);
    getchar();
    scanf("%c", &single_struct.gender);
    for(i = 0; i < *quantity; i++){
        if(strcmp(structs[i].name, single_struct.name) == 0 && structs[i].age == single_struct.age && structs[i].gender == single_struct.gender){
            for(j = i; j < *quantity - 1; j++){
                structs[j] = structs[j + 1];
            }
            *quantity -= 1;
        }
    }
}

void print(profile *structs, int quantity){
    int i;
    for(i = 0; i < quantity; i++){
        printf("%s,%i,%c\n", structs[i].name, structs[i].age, structs[i].gender);
    }
}

int main(){
    char ToDo = ' ';
    int quantity = 0;
    profile *persons = NULL;
    profile SingleStruct;

    while(ToDo != 'p'){
        scanf(" %c", &ToDo);
        if(ToDo == 'i'){
            SingleStruct = create(SingleStruct);
            persons = realloc(persons, sizeof(profile) * (quantity + 1));
            append(persons, SingleStruct, quantity + 1);
            quantity += 1;
        }else if(ToDo == 'd'){
            delete(SingleStruct, persons, &quantity);
            persons = realloc(persons, sizeof(profile) * quantity);
        }
    }
    
    print(persons, quantity);

    free(persons);

    return 0;
}
