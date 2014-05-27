#ifndef QTIPCSERVER_H
#define QTIPCSERVER_H

// Define Bitcoin-Qt message queue name
#define BITCOINURI_QUEUE_NAME "GrowthCoinURI"

// Define Bitcoin-Qt message queue name for testnet
#define BITCOINURI_QUEUE_NAME_TESTNET "GrowthCoin-testnet"

void ipcScanRelay(int argc, char *argv[]);
void ipcInit(int argc, char *argv[]);

#endif // QTIPCSERVER_H
