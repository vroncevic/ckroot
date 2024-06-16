# Check root id (cli)

CLI tool for checking root.

Developed in [C](https://en.wikipedia.org/wiki/C_(programming_language)) code.

<!-- START doctoc generated TOC please keep comment here to allow auto update -->
<!-- DON'T EDIT THIS SECTION, INSTEAD RE-RUN doctoc TO UPDATE -->
**Table of Contents**

- [Installation](#installation)
- [Dependencies](#dependencies)
- [Usage](#usage)
- [Docs](#docs)
- [Copyright and licence](#copyright-and-licence)

<!-- END doctoc generated TOC please keep comment here to allow auto update -->

### Installation

To install **ckroot** type the following

```bash
tar xvzf ckroot-x.y.z.tar.gz
cd ckroot-x.y.z/
./autogen.sh
make
sudo make install
```

### Dependencies

**ckroot** requires next modules and libraries
* libc - www.gnu.org [https://www.gnu.org/software/libc/](https://www.gnu.org/software/libc/)

### Usage

```bash
#!/bin/bash

ckroot
STATUS=$?

if [[ $STATUS -eq 0 ]]; then
	# do root operations ...
else
	# notify user to swith to root user
fi

exit 0
```

### Docs

[![Documentation Status](https://readthedocs.org/projects/ckroot/badge/?version=latest)](https://ckroot.readthedocs.io/en/latest/?badge=latest)

More documentation and info at

* [ckroot.readthedocs.io](https://ckroot.readthedocs.io)

### Copyright and licence

[![License: GPL v3](https://img.shields.io/badge/License-GPLv3-blue.svg)](https://www.gnu.org/licenses/gpl-3.0)

Copyright (C) 2017 - 2024 by [vroncevic.github.io/ckroot](https://vroncevic.github.io/ckroot)

**ckroot** is free software; you can redistribute it and/or modify
it under the same terms as GPLv3.

Lets help and support FSF.

[![Free Software Foundation](https://raw.githubusercontent.com/vroncevic/apmodule/dev/docs/fsf-logo_1.png)](https://my.fsf.org/)

[![Donate](https://www.paypalobjects.com/en_US/i/btn/btn_donateCC_LG.gif)](https://my.fsf.org/donate/)
