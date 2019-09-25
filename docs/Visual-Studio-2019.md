C programfejlesztés Visual Studio Community 2019 környezetben
=============================================================

Telepítés
---------
1. Töltsd le és futtasd a [telepítőt]!
2. A _Workloads_ választó képernyőn jelöld ki a **Desktop development with C++** opciót! Ha van bőven tárhelyed, a **.NET desktop development** opciót is jelöld ki. Ez utóbbival lehet majd Windows alkalmazásokat készíteni.

C program készítése
-------------------
1. Indítsd el a Visual Studio 2019 programot
2. Hozz létre egy új projektet, az **Empty Project `C++`** sablonból.
3. Válassz egy projekt nevet és egy solution nevet. Az egész félév anyagát teheted ugyanabba a solutionbe, viszont minden új program egy új projektbe kerül. Mentési helynek a Users mappán kívüli mappa célszerű, például `C:\Dev\C`. Hozd létre a projektet!
4. A bal oldalon megnyíló _Solution Explorer_ ablak egyik almappája a _Source Files_, erre jobb egérgombbal kattinva hozzá tudsz adni egy új C++ fájlt.
5. A létrejött fájlt a _Solution Explorer_ ablakban nevezd át `Main.c`-re! Innen tudja majd a fordító, hogy C (és nem C++) forrásként kell fordítania.
6. A `Main.c` fájlba írhatod a programodat. A menüsor zold háromszög gombjával tudod lefordítani és futtatni.

Próbáld ki a fordítást a Hello World programmal!
```c
#include <stdio.h>

int main()
{
    printf("Hello World!\n");
    return 0;
}
```

[telepítőt]: https://visualstudio.microsoft.com/vs/