# Exercice 00 : Megaphone

## Description
Le but de cet exercice est de vous familiariser avec les entrées/sorties de base en C++ via les flux (`std::cout`).
Le programme "Megaphone" convertit les chaînes de caractères fournies en arguments de ligne de commande en majuscules. S'il n'y a aucun argument, il affiche un message de feedback bruyant.

## Notions Abordées
- L'utilisation de `std::cout` et `std::endl` à la place de `printf`.
- La manipulation basique des `std::string`.
- L'itération sur les arguments `argc` et `argv`.
- L'utilisation de `std::toupper` pour la conversion en majuscules.

## Utilisation

### Compilation
```bash
make
```

### Exécution
```bash
./megaphone "shhhhh... I think the students are asleep..."
# Affiche : SHHHHH... I THINK THE STUDENTS ARE ASLEEP...

./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
# Affiche : DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF.

./megaphone
# Affiche : * LOUD AND UNBEARABLE FEEDBACK NOISE *
```
