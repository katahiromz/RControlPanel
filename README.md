# ![](img/control32x32.png) Independent ReactOS Control Panel

This is `"Independent ReactOS shimgvw"` from [ReactOS](https://reactos.org/), Shell Image Viewer.

It's a free and open source software for Windows XP and later.

<p align=center>
  <a href="https://reactos.org/">
    <img alt="ReactOS" src="img/reactos-225x54.png">
  </a>
</p>

<p align=center>
  <a href="https://reactos.org/donate/">
    <img alt="Donate" src="https://img.shields.io/badge/%24-donate-E44E4A.svg">
  </a>
  <a href="https://twitter.com/reactos">
    <img alt="Follow on Twitter" src="https://img.shields.io/twitter/follow/reactos.svg?style=social&label=Follow%20%40reactos">
  </a>
</p>

## Main code contributors

- Copyright 2004 Gero Kuehn (reactos.filter@gkware.com)
- Copyright 2008 Colin Finck (colin@reactos.org)
- Copyright 2014 Hermès Bélusca-Maïto (hermes.belusca-maito@reactos.org)
- and more!

## How to build?

Please use ReactOS Build Environment (RosBE).

```bash
git clone https://github.com/katahiromz/RControlPanel
cd RControlPanel
cmake -G Ninja -DCMAKE_BUILD_TYPE=Release .
ninja
strip control.exe
```

Tested on RosBE and MinGW.

## License

- GPL 2.0
