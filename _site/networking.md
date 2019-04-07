- ケーブルにかける電圧の高低（0V, 5V）でバイナリを送ることができる
- ASCIIで文字と紐づける
- Clock synchronization and Manchester coding
- Clockがシンクロしてないとclock slipが発生しデータが正しく受信されなくなる
- じゃどうやってclockを完璧にシンクロさせるか？
	- GPS antenna
	- Atomic clock inside the computer
	- clockデータを別のチャンネル・リンクで送る（コレ）
- この時問題になるのがclock phaseを一致させないといけない。少しでも位相がずれると意味がない

## Ethernet
