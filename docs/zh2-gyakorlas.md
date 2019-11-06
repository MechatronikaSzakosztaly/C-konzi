Joe gyakorló feladatai
======================

### 1. Törpék
Hófehérkének 7 törpéje van, minden törpe kapott egy 4 jegyu pin kódot, mert a nevüket már tudja a boszorkány, és a hangjukat is tudja utánozni. Reggel elmennek a bányába, és este hazajönnek. Hófehérke egyenként engedi be oket, a boszorkánytól tartva. 

Modellezzük ezt a folyamatot: készítsünk egy struktúrát, amely a törpe kódját és egy logikaiként használt int mezot „itthon” tartalmaz: ha itthon van az adott számú törpe, akkor 1, ha nincs akkor 0 értékkel. 

A struktúrából 7 elemu tömböt készítünk, reggel az összes „itthon” mezot 0-ra állítjuk. Este jönnek haza a törpék, és mondják (scanf) a pin kódjukat. Ha ismeretlen számot mondanak, akkor „boszorkány vagy, nem jöhetsz be”. Ha helyes kódot mondtak és az „itthon” mezo értéke 0, akkor be kell engedni (itthon=1). Ha már 1 volt az itthon értéke: „tágulj innen rút boszorkány”. 

A törpék beengedését addig kell ismételni, míg az összes törpe nem ért be a házba.

### 2. Párkapcsolatok
A párkapcsolatokat tömbben is lehet tárolni. Például egy ilyen tárolási módszer lehet, hogy a fiúkat és a lányokat külön tömbben tároljuk, és a tömbelem azt az indexet tartalmazza, hogy kibe szerelmes az adott fiú vagy lány. 

Ha -1, akkor senkibe. Ha például a fiúk tömbjében a 0-s indexu elem 5, akkor az a fiú az 5-ös indexu lányba szerelmes. Ha az 5-ös indexu lánynál is 0 szerepel, akkor ez egy viszonzott szerelem, ha -1, vagy pl 3, akkor viszonzatlan. 

Vigyünk be n (input adat) fiút és ugyanennyi lányt, majd számoljuk meg a viszonzott szerelmi kapcsolatok számát.

### 3. Belsnickel 
Hamarosan jön a Mikulás. A jó tanulók ajándékot kapnak, a rossz tanulók virgácsot. Írjuk meg ennek függvényét: az ajándékot 1 jelölje, a virgácsot 0. A függvény bemenete a gyerek „számítógépek programozásának alapjai” jegye. Elégtelenhez mindig virgács jár, jeleshez mindig ajándék. Közepeshez 50-50% valószínuséggel ajándék/virgács. Elégségeshez 20% az ajándék, jó-hoz 80% a valószínusége. int mikulas(int jegy) a függvény fejléce. A függvényt a foprogramból input adattal teszteljük le.

### 4. Barbie bevásárlás 
Barbie vasarolni indult. Elore eldontotte, hogy mit fog venni, osszegyujtotte a vonalkodokat (int), es a darabszamokat (int) termekenkent. Ehhez egy strukturat hasznalt, amelyet kiegeszitett egy logikailag hasznalt int mezovel is:

- 0, ha meg nincs a kosarban a termek
- 1, ha benne van.
  
A strukturabol tombot keszitett, amelyet otthon feltolt a vonalkodokkal es a szukseges darabszammal (és 0-val : meg nincs a kosarban)

Amikor megy a boltban, es valamit levesz a polcrol, a vonalkodjat beirja az inputba.
A program megkeresi a tombben ezt a termeket es kiirja a darabszamot "4 darabot tegy a kosarba".
Ekkor a logikailag hasznalt mezot allitsuk 1-re ennel a termeknel.
Ha a vonalkodot nem talaljuk a tombben "tedd szepen vissza a polcra".
Ha mindent beszereztunk (az osszes "kosarban" mezo 1), "a kasszahoz faradhatsz" es vege a programnak.

### 5. Büfé
Az egyetemi dolgozók 200Ft értékű melegétel utalványokat kapnak, amiből nem lehet visszaadni. A büfében semminek sincs olyan ára, mint 200 egész számú többszöröse, a jegyből visszaadni nem lehet. Tehát a maradékot, ami a jegyen felül van, kp-ban fizetjük. 

Készítsünk ehhez programot! Bemenet (scanf): fizetendő összeg. Kimenet: hány db jegyet és mennyi kp-t kell a büfésnek adni. Pl: 489 Ft = 2db jegy + 90 Ft. Alkalmazzuk az 5 forintos kerekítést! (Ha igényesen csinálod meg, 198 Ft bemenetre a kimenet 1db jegy, nem 198 Ft).

### 6. Felcserélt szorzatok
Írjon programot, amely meghatározza az összes olyan kétjegyû számpárt, amelyre igaz, hogy a szorzatuk megegyezik a számjegyeik felcserélésével kapott számok szorzatával. A megoldásból zárjuk ki az azonos számjegyû számokat 11, 22, és a triviális megoldást (pl. 32,23) 33, stb. 

Jó megoldás pl. a 12, 42 mert 12 * 42 = 21 * 24.

### 7. Normalizálás
Készítsünk egy, inputként megadott méretű, egész számokat tartalmazó tömböt. Töltsük fel véletlen számokkal, majd készítsünk egy ugyanekkora méretű, valós számokat tartalmazó tömböt, ahova az eredeti tömb elemeinek legnagyobb elemhez képesti relatív méretét tesszük (normalizálás). 

Teszteléshez válasszunk 20 elemet, és normalizált tömb elemeit írassuk ki.

### 8. Szimmetrikus tömbök
Döntsük el egy n (input adat) db, egész elemet tartalmazó tömbről, hogy szimmetrikus-e, ha n páratlan. A feltöltés tetszőleges lehet. 

Teszteljük is le a programot, ha n < 20, az elemeket írassuk ki.