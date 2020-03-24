all: cico map.png

C = src/object.c src/misc.c src/inventory.c src/location.c src/match.c src/toggle.c src/main.c
H = src/object.h src/misc.h src/inventory.h src/location.h src/match.h src/toggle.h

cico: $(C) $(H)
	gcc $(C) -o $@

object.h: src/object.awk src/object.txt
	awk -v pass=h -f src/object.awk src/object.txt > $@

object.c: object.awk object.txt
	awk -v pass=c1 -f src/object.awk src/object.txt > $@
	awk -v pass=c2 -f src/object.awk src/object.txt >> $@

map.png: map.gv
	dot -Tpng -o $@ $<

map.gv: src/map.awk src/object.txt
	awk -f src/map.awk src/object.txt > $@