## ethereum

### バックグラウンドでGethを起動
```
nohup geth --networkid 4649 --nodiscover --maxpeers 0 --datadir /home/yuasabe/data_testnet --mine --minerthreads 1 --rpc 2>> /home/yuasabe/data_testnet/geth.log &

ps -ax | grep geth

geth attach rpc:http://localhost:8545

nohup geth --networkid 4649 --nodiscover --maxpeers 0 --datadir /home/yuasabe/data_testnet --mine --minerthreads 1 --rpc --rpcaddr "0.0.0.0" --rpcport 8545 --rpccorsdomain "*" --rpcapi "admin,db,eth,debug,miner,net,shh,txpool,personal,web3" --unlock 0,1 --password /home/yuasabe/data_testnet/passwd --verbosity 6 2>> /home/yuasabe/data_testnet/geth.log &

admin.setSolc("/usr/bin/solc")

```
