Check root id (cli)
--------------------

**ckroot** is CLI tool for checking root.

Developed in `C (programming_language) <https://en.wikipedia.org/wiki/C_(programming_language)>`_ code.

The README is used to introduce the tool and provide instructions on
how to install the tool, any machine dependencies it may have and any
other information that should be provided before the tool is installed.

|github issues| |documentation status| |github contributors|

.. |github issues| image:: https://img.shields.io/github/issues/vroncevic/ckroot.svg
   :target: https://github.com/vroncevic/ckroot/issues

.. |github contributors| image:: https://img.shields.io/github/contributors/vroncevic/ckroot.svg
   :target: https://github.com/vroncevic/ckroot/graphs/contributors

.. |documentation status| image:: https://readthedocs.org/projects/ckroot/badge/?version=latest
   :target: https://ckroot.readthedocs.io/en/latest/?badge=latest

.. toctree::
   :maxdepth: 4
   :caption: Contents

   self

Installation
-------------

Navigate to release `page`_ download and extract release archive.

.. _page: https://github.com/vroncevic/ckroot/releases

To install **ckroot** type the following

.. code-block:: bash

    tar xvzf ckroot-x.y.z.tar.gz
    cd ckroot-x.y.z/
    ./autogen.sh
    make
    sudo make install

Dependencies
-------------

**ckroot** requires next modules and libraries

* `libc - www.gnu.org <https://www.gnu.org/software/libc/>`_

Tool structure
---------------

**ckroot** is based on POP.

Tool structure

.. code-block:: bash

    ckroot/
       ├── AUTHORS
       ├── autogen.sh
       ├── ChangeLog
       ├── configure.ac
       ├── COPYING
       ├── Makefile.am
       ├── NEWS
       ├── po/
       │   ├── ChangeLog
       │   ├── LINGUAS
       │   ├── POTFILES
       │   └── POTFILES.in
       ├── README
       └── src/
           ├── ckroot.h
           ├── main.c
           └── Makefile.am
    
    3 directories, 15 files

Copyright and licence
-----------------------

|license: gpl v3|

.. |license: gpl v3| image:: https://img.shields.io/badge/license-gplv3-blue.svg
   :target: https://www.gnu.org/licenses/gpl-3.0


Copyright (C) 2017 - 2024 by `vroncevic.github.io/ckroot <https://vroncevic.github.io/ckroot>`_

**ckroot** is free software; you can redistribute it and/or modify
it under the same terms as GPLv3.

Lets help and support FSF.

|Free Software Foundation|

.. |Free Software Foundation| image:: https://raw.githubusercontent.com/vroncevic/apmodule/dev/docs/fsf-logo_1.png
   :target: https://my.fsf.org/

|Donate|

.. |Donate| image:: https://www.paypalobjects.com/en_US/i/btn/btn_donateCC_LG.gif
   :target: https://my.fsf.org/donate/

Indices and tables
------------------

* :ref:`genindex`
* :ref:`modindex`
* :ref:`search`
