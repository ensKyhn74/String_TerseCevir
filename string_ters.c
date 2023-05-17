#include <stdio.h>
#include <string.h>
// klavyeden girilen metni tersine çevir ve ekrana yazdır

int main() 

{
 
 char input[100];
  
 char GeciciKarakter;  
  
 int i;
  
 printf("tersine cevirmek istediginiz dizgiyi girin: ");
 gets(input);
 
 int KarakterSayisi = strlen(input);  
 
for(i = 0 ; i < KarakterSayisi/2 ; i++)  
{    // i < KarakterSayısı olsa kullanıcının girdiği kelimenin aynısını ekrana yazdırırdı
     
  GeciciKarakter = input[i];    
     
  input[i] = input[KarakterSayisi-i-1]; 
   
  input[KarakterSayisi-i-1] = GeciciKarakter;     
}
  
  printf("dizginin tersi: ");
  puts(input);
 
  return 0;
 
}