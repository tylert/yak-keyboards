.. image:: ../yak.png

YAK TKO 21 Pad
==============

.. image:: yak-pad.png

* http://www.keyboard-layout-editor.com/#/gists/7d16c1ee060f6c2fa83f


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
