# 自作組み込みOS
H8／3069Fを用いた組み込みOSの自作プロジェクト。以下、用いる電子機器
- H8/3069F
- 電源アダプタ(定格出力1.0A / 2.0A)
- シリアルケーブル
- PC用シリアルコネクタ

[参考](http://kozos.jp/books/makeos/)

* * *

# ブートローダの作成

## 開発環境の作成
今回はvirtual boxを利用してLinuxマシンを用意する。(macosでは必要なソフトウェアが動作しないのか調査する)必要なソフトウェア
- binutils
- gcc
- make

以下のコマンドで、開発に必要な物はあらかた揃えてくれる
```zsh
$ apt install build-essential
```

* * * 

# OSの作成
