#include <stdio.h>

main()
{
  system("if cat mount|grep -v -q /usr/share/prop/blitzrechnen/nutzerdaten;then mount --bind /var/lib/blitzrechnen/nutzerdaten /usr/share/prop/blitzrechnen/nutzerdaten;fi");
  system("chmod -R a+rw /usr/share/prop/blitzrechnen/nutzerdaten/");
}
