#include <stdio.h>

main()
{
  setuid(0);
  system("if test -d /opt/blitzrechnen/Nutzerdaten;then rm -r /opt/blitzrechnen/Nutzerdaten;fi");
  system("cp -r /opt/blitzrechnen/Nutzerdaten.default /opt/blitzrechnen/Nutzerdaten");
  system("chmod -R a+rw /opt/blitzrechnen/Nutzerdaten/");
}
