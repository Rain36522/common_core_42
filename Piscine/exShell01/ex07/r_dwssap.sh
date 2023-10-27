!# /bin/sh

#affiche commentaires une ligne sur 2
cat /etc/passwd | grep "#" |sed -n 'p;n'

