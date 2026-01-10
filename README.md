# magazin-online-poo
Proiect POO – Magazin Online

## Tema 0

### Nume proiect
Magazin Online

### Descriere
Proiectul modelează funcționarea unui magazin online folosind limbajul C++
și concepte de programare orientată pe obiect.

Aplicația permite:
- definirea produselor
- adăugarea produselor într-un magazin
- afișarea produselor disponibile

Această versiune reprezintă baza proiectului, urmând ca funcționalități
suplimentare să fie adăugate ulterior.

### Structura proiectului
- `Produs.h / Produs.cpp` – clasa Produs
- `Magazin.h / Magazin.cpp` – gestionarea produselor
- `main.cpp` – rularea aplicației

### Concepte OOP utilizate
- clase și obiecte
- încapsulare
- constructori
- compoziție
- separarea interfeței de implementare

## Tema 1

### Concepte OOP utilizate
- Moștenire (clasa de bază `Produs` și clase derivate)
- Polimorfism (utilizarea pointerilor la clasa de bază)
- Funcții virtuale și virtuale pure
- Suprascriere metode (`override`)
- Destructor virtual
- STL (vector)
- Smart pointers (unique_ptr)

### Clase derivate
- ProdusAlimentar
- ProdusVestimentar
- ProdusElectronic

### Descriere
Magazinul gestionează produse de tipuri diferite folosind polimorfism.
Afișarea și calculul prețului final se realizează prin metode virtuale.

## Tema 2

### Concepte OOP utilizate
- Polimorfism avansat
- Gestionarea memoriei cu smart pointers (`std::unique_ptr`)
- Vector de pointeri la clasa de bază
- Separarea clară între interfață și implementare

### Descriere
Aplicația permite gestionarea colecției de produse prin intermediul
clasei `Magazin`, folosind pointeri polimorfici pentru stocarea obiectelor
derivate din clasa de bază `Produs`.

## Tema 3

### Concepte OOP utilizate
- Design Pattern: Singleton
- Clase șablon (template)
- Funcții șablon (template)

### Descriere
Proiectul a fost extins prin utilizarea unui design pattern de tip Singleton
pentru gestionarea instanței magazinului. De asemenea, sunt utilizate clase
șablon și funcții șablon pentru a demonstra programarea generică în C++.


## Rulare

Programul creează un magazin online, adaugă produse
electronice, alimentare și vestimentare, le afișează
și demonstrează utilizarea polimorfismului și a
design pattern-urilor implementate.



