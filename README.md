# semesteroppgave_23
Systemdesign og arkitektur


High Level functionality diagram for the project
![High level functionality diagram](https://github.com/Bjorgeh/semesteroppgave_23/assets/122554284/efec58f7-cd46-4039-be30-84ebbbb8c107)











Funksjonalitetsdiagrammet over kan deles i høy til medium level, hvor på det til og med kan ha potensialet til å bli et diagram av kaliber helspekter, som går fra høyt til lavt nivå. På høyeste nivå har vi et GUI med login for brukere.   
![1](https://github.com/Bjorgeh/semesteroppgave_23/assets/122554284/101ed60b-0b4f-47ef-877a-882b142fa9b7)
Her blir bruker bedt om å skrive inn brukernavn og passord ved innlogging, informasjonen sendes videre i systemet og blir sjekket opp mot en autoriserings funksjon, ut fra responsen fra denne får brukeren valg som vises kun for sin rolle.  

Administrator rollen har valgene her som sett videre i diagrammet: 
![2](https://github.com/Bjorgeh/semesteroppgave_23/assets/122554284/b88091f9-9131-4571-a956-5c058a9958cb)
 
En bruker med denne rollen har tilgang til ‘user management’, hvor man kan lage nye brukere eller redigere eksiterende brukere. 
![3](https://github.com/Bjorgeh/semesteroppgave_23/assets/122554284/ef6baa12-bc54-4e14-bb1e-ac049e5c28dd)

Lærer rollen: 
![4](https://github.com/Bjorgeh/semesteroppgave_23/assets/122554284/218c24e8-69d5-4a46-9e1a-156299ecfe1e)
En bruker med disse privilegiene har muligheten til å lage et klasserom eller se på student statistikk (karakterer og utviklingsgrader). 
Å lage et klasserom gir brukeren flere muligheter: 
![5](https://github.com/Bjorgeh/semesteroppgave_23/assets/122554284/ec2c610a-38ec-4d10-9b4e-868cda4388c0)
Når et klasserom er opprettet vil brukeren kunne starte en skoletime, chatte med studenter og/eller andre deltakere i sesjonen, slå på kamera og ta opp timen. 
Flere funksjoner som følger med: 
![6](https://github.com/Bjorgeh/semesteroppgave_23/assets/122554284/f41b8e8e-cecc-4e59-8447-a741e313b7d6)
En bruker med lærerrollen vil også kunne lage kurs, sette fag/tema og legge inn eget innhold. Vi har også tatt stilling til prøver/quizer hvor fag/tema settes og brukeren får lage egne spørsmål. 

Videre vil brukeren kunne se på en students statistikk: 
![7](https://github.com/Bjorgeh/semesteroppgave_23/assets/122554284/a6656e1a-a5e7-42b6-b73c-fa0752ac885e)
Funksjonaliteten her å kunne følge med på en students utvikling og kommentere på steder i statistikken hvor det skulle ønskes, dette vil kunne skrives ut hvis nødvendig. Fra denne delen av programmet vil også lærer kunne publisere karakterer eller endringer hos studenter. 
Student rollen 
![8](https://github.com/Bjorgeh/semesteroppgave_23/assets/122554284/0bcda561-746c-40d9-b5fc-8038a40ea2b2)
En student som logger inn i programmet vil ha valgene mellom å ta en kurs som lærer har satt opp, bli med i et klasserom, ta en prøve eller se på sine karakterer. 
I et kurs vil denne type bruker kunne lese, se eller høre på informasjonen som er lagt til av lærer. Studenter vil ha tilgang til klasserom de er medlemmer av, hvor digital undervisning skjer gjennom streaming, fildeling og chatting.  
![9](https://github.com/Bjorgeh/semesteroppgave_23/assets/122554284/7d1b6342-b37f-47a0-830c-3c8b863a9040)
Brukeren har også tilgang til prøver som enkelt svares og leveres, og se på sine karakterer i de forskjellige fagene. Her kan student skrive ut karakterer selv, om ønskelig. 
