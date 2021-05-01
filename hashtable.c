#include <stdlib.h>
#include <stdio.h>

const int KEY_LENGTH = 10;
const int VAL_LENGTH = 10;
const int HASH_TABLE_LENGTH = 1001;

typedef unsigned int hashvalue;
typedef char key[KEY_LENGTH];
typedef char value[VAL_LENGTH];

typedef struct {
  key key;
  value value;
} hashelement;

typedef struct {
  hashelement elements[HASH_TABLE_LENGTH];
} hashtable;

hashvalue hash(key theKey) {
  unsigned int keyAsInt = (unsigned int) theKey;
  return keyAsInt % HASH_TABLE_LENGTH;
}

struct hashelement *insert(hashtable* htable, key key, value value) {
  hashvalue keyhash;
  keyhash = hash(key);

  for(int i=0; i < HASH_TABLE_LENGTH; i++) {

    hashelement current;
    current = htable->elements[i];

    if (!(strlen(current.key))) {
      strcpy(current.key, key);
      strcpy(current.value, value);
      return &current;

    }
  }
  return NULL;
}

int main() {
  key mykey = "hello";
  value myvalue = "world";
  struct hashtable mytable;
  insert(&mytable, mykey, myvalue);

  return 0;
}
