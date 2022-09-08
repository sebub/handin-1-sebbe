# IMPR Handin 1
## Uger, dage, timer, minutter og sekunder 



Skriv et C program, som indlæser et helt antal sekunder og som omregner dette tal til uger, dage, timer, minutter og sekunder på sædvanlig vis. Programmet skal udskrive antallet af uger, dage, timer, minutter og sekunder på skærmen.

Mere præcist skal de omregnede sekunder være i intervallet 0..59, de omregnede minutter skal være i intervallet 0..59, de omregnede timer skal være i intervallet 0..23, og de omregnede dage i intervallet 0..6. Ugetallet kan være vilkårligt stort.

Målet med opgaven er primært at træne dig i brugen af heltalsdivision / og rest operatoren ved heltalsdivision %. Sekundært sætter opgaven fokus på symbolske konstanter og simpel brug af scanf og printf.

Her er eksempler på input og ønsket output:

- Hvis der indlæses 650 sekunder udskrives der 0 uger, 0 dage, 0 timer, 10 minutter og 50 sekunder.
- Hvis der indlæses 4000 sekunder udskrives der 0 uger, 0 dage, 1 timer, 6 minutter og 40 sekunder.
- Hvis der indlæses 1000000 sekunder udskrives der 1 uger, 4 dage, 13 timer, 46 minutter og 40 sekunder.