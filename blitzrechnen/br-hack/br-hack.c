#include <stdio.h>

main()
{
  setuid(0);
  system("if test -d /usr/share/prop/blitzrechnen/Nutzerdaten;then rm -r /usr/share/prop/blitzrechnen/Nutzerdaten;fi");
  system("cp -r /usr/share/prop/blitzrechnen/Nutzerdaten.default /usr/share/prop/blitzrechnen/Nutzerdaten");
  system("chmod -R a+rw /usr/share/prop/blitzrechnen/Nutzerdaten/");
}
