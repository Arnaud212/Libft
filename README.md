# Libft

Bienvenue dans le projet Libft ! Ce projet consiste à créer une bibliothèque personnelle de fonctions en C.

## Objectif du Projet

Le but de ce projet est de coder une bibliothèque de fonctions courantes en C, incluant des fonctions de la libc (comme `strlen`, `memset`, etc.) et des fonctions supplémentaires (comme `ft_substr`, `ft_strjoin`, etc.). Vous devez également implémenter des fonctions pour manipuler des listes chaînées.

## Utilisation du Projet

1. **Compilation**: Utilisez le Makefile fourni pour compiler la bibliothèque. Tapez `make` dans votre terminal pour générer le fichier `libft.a`.
2. **Inclure la Bibliothèque**: Dans vos projets futurs, incluez la bibliothèque en ajoutant `#include "libft.h"` et en liant `libft.a` lors de la compilation de votre projet.
3. **Fonctions Disponibles**: Utilisez les fonctions définies dans `libft.h` dans vos projets pour simplifier votre développement en C.

### Exemple d'utilisation

```c
#include "libft.h"

int main() {
    char *str = "Hello, World!";
    ft_putstr_fd(str, 1);
    return 0;
}
```

Pour compiler ce projet avec votre bibliothèque :

```sh
gcc -Wall -Wextra -Werror main.c -L. -lft -o my_project
```