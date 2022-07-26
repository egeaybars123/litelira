LiteLira Core
=============

Setup
---------------------
LiteLira Core is the original LiteLira client and it builds the backbone of the network. It downloads and, by default, stores the entire history of LiteLira transactions (which is currently more than 100 GBs); depending on the speed of your computer and network connection, the synchronization process can take anywhere from a few hours to a day or more.

To download LiteLira Core, visit [liteliracore.org](https://liteliracore.org/en/releases/).

Running
---------------------
The following are some helpful notes on how to run LiteLira Core on your native platform.

### Unix

Unpack the files into a directory and run:

- `bin/litelira-qt` (GUI) or
- `bin/litelirad` (headless)

### Windows

Unpack the files into a directory, and then run litelira-qt.exe.

### macOS

Drag LiteLira Core to your applications folder, and then run LiteLira Core.

### Need Help?

* See the documentation at the [LiteLira Wiki](https://en.litelira.it/wiki/Main_Page)
for help and more information.
* Ask for help on [#litelira](http://webchat.freenode.net?channels=litelira) on Freenode. If you don't have an IRC client use [webchat here](http://webchat.freenode.net?channels=litelira).
* Ask for help on the [LiteLiraTalk](https://liteliratalk.org/) forums, in the [Technical Support board](https://liteliratalk.org/index.php?board=4.0).

Building
---------------------
The following are developer notes on how to build LiteLira Core on your native platform. They are not complete guides, but include notes on the necessary libraries, compile flags, etc.

- [Dependencies](dependencies.md)
- [macOS Build Notes](build-osx.md)
- [Unix Build Notes](build-unix.md)
- [Windows Build Notes](build-windows.md)
- [OpenBSD Build Notes](build-openbsd.md)
- [NetBSD Build Notes](build-netbsd.md)
- [Gitian Building Guide](gitian-building.md)

Development
---------------------
The LiteLira repo's [root README](/README.md) contains relevant information on the development process and automated testing.

- [Developer Notes](developer-notes.md)
- [Release Notes](release-notes.md)
- [Release Process](release-process.md)
- [Source Code Documentation (External Link)](https://dev.visucore.com/litelira/doxygen/)
- [Translation Process](translation_process.md)
- [Translation Strings Policy](translation_strings_policy.md)
- [Travis CI](travis-ci.md)
- [Unauthenticated REST Interface](REST-interface.md)
- [Shared Libraries](shared-libraries.md)
- [BIPS](bips.md)
- [Dnsseed Policy](dnsseed-policy.md)
- [Benchmarking](benchmarking.md)

### Resources
* Discuss on the [LiteLiraTalk](https://liteliratalk.org/) forums, in the [Development & Technical Discussion board](https://liteliratalk.org/index.php?board=6.0).
* Discuss project-specific development on #litelira-core-dev on Freenode. If you don't have an IRC client use [webchat here](http://webchat.freenode.net/?channels=litelira-core-dev).
* Discuss general LiteLira development on #litelira-dev on Freenode. If you don't have an IRC client use [webchat here](http://webchat.freenode.net/?channels=litelira-dev).

### Miscellaneous
- [Assets Attribution](assets-attribution.md)
- [Files](files.md)
- [Fuzz-testing](fuzzing.md)
- [Reduce Traffic](reduce-traffic.md)
- [Tor Support](tor.md)
- [Init Scripts (systemd/upstart/openrc)](init.md)
- [ZMQ](zmq.md)

License
---------------------
Distributed under the [MIT software license](/COPYING).
This product includes software developed by the OpenSSL Project for use in the [OpenSSL Toolkit](https://www.openssl.org/). This product includes
cryptographic software written by Eric Young ([eay@cryptsoft.com](mailto:eay@cryptsoft.com)), and UPnP software written by Thomas Bernard.
