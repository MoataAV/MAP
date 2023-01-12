Prin intermediul acestui proiect putem sa calculam suma elementelor aflate pe diagonala principala si pe diagonala secundara,
dar si minimul si maximul elementelor aflate sub cele doua diagonale.
Pentru elementele de pe diagonala principala m-am folosit de faptul ca indicele "i" este egala cu indicele "j" si
pentru cele de pe diagonala secundara de faptul ca "i"+"j" = n-1, unde n este nr de linii si de coloane.
Elementele aflate sub diagonala principala au indicele "i" mai mic decat indicele "j", iar cele aflate sub
diagonala secundara au suma indicilor mai mare decat n-1.

Pentru a rula proiectul folositi urmatoarele comenzi:
* docker pull moataav/proiectmap
* docker run -it moataav/proiectmap