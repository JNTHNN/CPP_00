# Exercice 01 : My Awesome PhoneBook

## Description
Ce projet consiste à créer un annuaire téléphonique basique (PhoneBook) pouvant stocker jusqu'à 8 contacts en mémoire.
Il s'agit de la première réelle immersion dans l'approche Orientée Objet en C++. Le but est de créer des classes (`PhoneBook` et `Contact`), de structurer le code en encapsulant les données, et d'apprendre l'interaction interactive avec l'utilisateur via `std::cin`.

## Fonctionnalités
Le programme tourne en boucle et propose 3 commandes :
- **ADD** : Ajoute un nouveau contact à l'annuaire. L'utilisateur doit renseigner le prénom, nom, surnom, numéro de téléphone et un "secret le plus sombre". Si l'annuaire est plein (8 contacts), le contact le plus ancien est écrasé.
- **SEARCH** : Affiche la liste des contacts sauvegardés sous forme de tableau formaté. L'utilisateur peut ensuite entrer un index pour voir les détails d'un contact spécifique.
- **EXIT** : Quitte proprement le programme (tout l'annuaire est perdu puisque rien n'est sauvegardé dans un fichier externe).

## Résolution des bugs connus
- La gestion du raccourci `Ctrl+D` (EOF) a été corrigée : si l'utilisateur quitte le programme brutalement, l'annuaire détecte la fin du fichier et s'interrompt proprement sans partir en boucle infinie d'erreurs, ce qui permet aux destructeurs d'être appelés correctement.

## Utilisation

### Compilation
```bash
make
```

### Exécution
```bash
./phonebook
```
Suivez ensuite les instructions à l'écran en tapant les commandes `ADD`, `SEARCH` ou `EXIT`.
