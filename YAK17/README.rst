.. image:: ../yak.png

YAK Tester 17 Strip
===================

.. image:: yak-strip.png

* http://www.keyboard-layout-editor.com/#/gists/df36e056d5bb9e1c0cb5


Build
-----

Move to this directory then just run `make` like::

    $ make -f Makefile.lufa


Bootloader
---------

The PCB is hardwired to run the bootloader if the key at the 'top left'
position is held down when connecting the keyboard.

It is still possible to use Boot Magic and Command to access the bootloader
though.
