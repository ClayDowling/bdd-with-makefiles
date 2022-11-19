.PHONY: depend clean src test


src: test
	$(MAKE) -C src

test: depend
	$(MAKE) -C test

clean:
	$(MAKE) -C test clean
	$(MAKE) -C src clean

depend: bdd-for-c-current

bdd-for-c:
	git clone https://github.com/grassator/bdd-for-c.git

bdd-for-c-current: bdd-for-c
	cd bdd-for-c && git pull