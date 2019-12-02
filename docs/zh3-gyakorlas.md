ZH3 elméleti kérdések
---------------------

1. Milyen karakter van a stringek végén, ami mutatja a végüket?
2. Honnan tudja az feof(), hogy vége van a fájlnak?
3. Mire jó az fgets(), van-e biztonságos változata?
4. Hogyan lehet részekre bontani egy stringet? Melyik függvény jó erre?
5. Miért kell bezárni a fájlokat?
6. Hogyan lehet hozzáírni egy fájlhoz?
7. Hogy működik az strcpy?
8. Mi az a csv fájl?
9. Mire kell figyelni stringbe beolvasásnál?


ZH3 gyakorló feladatok
----------------------

### Megszámoló
Írj függvényt, ami egy stringben megszámolja egy substring előfordulásait!
   
```c
int strszamol(const char* miben, const char* mit);
```

### Háromszögek
CSV fájlban soronként 3 valós szám van. Írj programot, amely ellenőrzi, hogy lehetnek-e derékszögű háromszög oldalai! Ha igen, jelezze ki az oldalhosszakat!

### Bevásárlás
Vásárolni indulsz magad és a szobatársad részére. A blokkot (megnevezés, ár) CSV fájlba írod, és az utolsó oszlopba a "megrendelő" nevének kezdőbetűjét írod. Közös cuccoknál ezt az oszlopot üresen hagyod, az árat felezitek. Írj programot, ami megmondja, kinek mennyit kell fizetnie.
    
```
kenyer,200,A
pizza,540,B
wc papir,700,
...
```

### Paletta
Készítsünk egy textfájlt, amelyen soronként egymáshoz illő pár darab szín neve van. A színeket szóköz választja el egymástól. Írj programot, ami egy felhasználói inputból érkező színre kilistázza, melyik másik színek _mennek hozzá_. Több színkombináció is lehet a válasz.
    
```
fekete kek zold
fekete feher kek
piros feher
...
```

### Szótár
Készítsünk angol-magyar szótárat! Egy CSV fájl tartalmazza a szavakat, soronként az angol és a magyar megfelelőkkel. Írj programot, amely inputtal megadott angol szót magyarra fordít!
    
```
cat,macska
dog,kutya
robotic dog,Mogi Robi
...
```

### Spellchecker
Készíts spellcheckert (helyesírás-ellenőrzőt)! Egy fájl tartalmazza az összes létező magyar szót, soronként egyet. (Persze a példához elég néhány szót kiválasztanod). A felhasználó 1 szót megad inputként. Ha megtalálható a szavak között, gratulálj neki. Ha 1 betűvel tér el egy másik szótól, írd ki azt javaslatként.

```
alma
ablak
abrak
...
```

### Szám-e?
Készíts függvényt, amely eldönti, hogy egy neki átadott string számot tartalmaz-e. Akkor szám, ha
   1. első karaktere számjegy, vagy előjel
   2. a többi karaktere számjegy, vagy tizedes pont
   3. legfeljebb 1 tizedespontot tartalmaz
    
```c
int szame(const char* string);
```

### Sürgős szomjoltás
Egy CSV fájlba eltároltuk kedvenc kocsmáink koordinátáit (név, hosszúság, szélesség). A koordináták double típusúak. Írj programot, amely felhasználó által beírt koordináták alapján megadja a legközelebbi kocsma nevét!
    
```
Karman Klub, 47.476583, 19.057467
Happy Drink, 47.477509, 19.051127
Sarki Tanszék, 47.477321, 19.049542
...
```