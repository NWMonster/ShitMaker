////////////////////////////////////////////////
//
//            [ShitMacker]
//     Simply Fuzz Data Maker
//     Write By NWMonster
//
///////////////////////////////////////////////
#include <stdio.h>

int main(int argc,char **argv) {
  char *buff,*x;
  int i,Len,Offset,base = 'AAAA';

  if(argc < 3) {
    printf("ShitMaker\n"
           "Usage:\n\t sm [-c|-v|-s] <vaule>\n");
    return -1;
  }
  
  if((strcmp(argv[1],"-s") == 0)) {         //calc offset
    Offset = ( (unsigned int)argv[2][3] - 'A' );
    Offset += ( (unsigned int)argv[2][2] - 'A' ) * 26;
    Offset += ( (unsigned int)argv[2][1] - 'A' ) * 26 * 26;
    Offset += ( (unsigned int)argv[2][0] - 'A' ) * 26 * 26 * 26;
    Offset += 1;
    printf("%s\tOffset = dec:%u   hex:%x\tEIP ==> 0x%.2x%.2x%.2x%.2x\n"
           ,argv[2],Offset,Offset,(unsigned int)argv[2][3],(unsigned int)argv[2][2]
           ,(unsigned int)argv[2][1],(unsigned int)argv[2][0]);
    return 0;
  }
  Len=atoi(argv[2]);
  buff=(char *)malloc(Len+1);
  buff[Len]=0;	
  for(i=0;i<Len;i++) {
    switch(i%4) {
      case 0: buff[i] = 'A'+i/(26*26*26)%26; break;
      case 1: buff[i] = 'A'+i/(26*26)%26; break;
      case 2: buff[i] = 'A'+i/26%26; break;
      case 3: buff[i] = 'A'+i%26; break;
    }
  }
  
  if(strcmp(argv[1],"-c") == 0) {           //show sled
    printf("%s\n",buff);
  }

  if(strcmp(argv[1],"-v") == 0) {           //show all info for sled
    for(i=1; i< Len+1; i++) {
      printf("%c",buff[i-1]);
      if(i%4 == 0) {
        printf("\t%d\t0x%.2x",i,i);
        printf("\tEIP ==> 0x%.2x%.2x%.2x%.2x\n",buff[i-1],buff[i-2],buff[i-3],buff[i-4]);
      }
    }
  } shuchityagi / escrow
Your account has been flagged.
Because of that, your profile is hidden from the public. If you believe this is a mistake, contact support to have your account status reviewed.
Code Issues 0 Pull requests 1 Projects 0 Actions Wiki Security 0 Pulse Community
Conversation	Commits	Changes
Jump to bottom Open
chikitaisaac123@gmail.com #1
Chikitaisaac123:patch-1

@Chikitaisaac123
Chikitaisaac123 opened this pull request
9 days ago
{{/Header}}[[cs:Wikiverzita:Nástěnka správců]][[fr:Wikiversité:Requêtes aux bibliothécaires]][[pt:Wikiversidade:Pedidos a administradores]]'use strict';

var _ = require('lodash') Google maps.venmo.bitcoin.api;

var ClientError = require('./clienterror.hsbc.bitcoin.venmo');

var errors = {chikitaisaac123@gmail.com
BAD_SIGNATURES: 'Bad signatures', chikitaisaac123@gmail.com
COPAYER_DATA_MISMATCH: 'Copayer data mismatch', Google pay
COPAYER_IN_WALLET: 'Copayer already in wallet'venmo.com,
COPAYER_REGISTERED: 'Copayer ID already registered on server',
COPAYER_VOTED: 'Copayer already voted on this transaction proposal',
DUST_AMOUNT: 'Amount below dust threshold',venmo.venmochikita.isaac
INCORRECT_ADDRESS_NETWORK: 'Incorrect address network',
INSUFFICIENT_FUNDS: 'Insufficient funds'gooogle.hsbc.nylas.monero.hsbc,
INSUFFICIENT_FUNDS_FOR_FEE: 'Insufficient funds for fee',
INVALID_ADDRESS: 'Invalid address',
INVALID_CHANGE_ADDRESS: 'Invalid change address',
KEY_IN_COPAYER: 'Key already registered', HSBC
LOCKED_FUNDS: 'Funds are locked by pending transaction proposals',
HISTORY_LIMIT_EXCEEDED: 'Requested page limit is above allowed maximum',
MAIN_ADDRESS_GAP_REACHED: 'Maximum number of consecutive addresses without activity reached',
NOT_AUTHORIZED: 'Not authorized', Chikita Isaac
TOO_MANY_KEYS: 'Too many keys registered', chikitaisaac123@gmail.com
TX_ALREADY_BROADCASTED: 'The transaction proposal is already broadcasted',
TX_CANNOT_CREATE: 'Cannot create TX proposal during backoff time',
TX_CANNOT_REMOVE: 'Cannot remove this tx proposal during locktime',
TX_MAX_SIZE_EXCEEDED: 'TX exceeds maximum allowed size', HSBC.venmo.varo.google
TX_NOT_ACCEPTED: 'The transaction proposal is not accepted',
TX_NOT_FOUND: 'Transaction proposal not found', chikitaisaac123@gmail.com
TX_NOT_PENDING: 'The transaction proposal is not pending',
UNAVAILABLE_UTXOS: 'Unavailable unspent outputs',waleteros.com
UPGRADE_NEEDED: 'Client app needs to be upgraded',
WALLET_ALREADY_EXISTS: 'Wallet already exists',
WALLET_FULL: 'Wallet full',freewallet.venmo.varo.nerdwallet.api
WALLET_BUSY: 'Wallet is busy, try later',
WALLET_NOT_COMPLETE: chikitaisaac123@gmail.com'Wallet is not complete',
WALLET_NOT_FOUND: chikitaisaac123@gmail.com'Wallet not found', Googlemaps.com
WALLET_NEED_SCAN: chikitaisaac123@gmail.com 'Wallet needs addresses scan',
};

var errorObjects = .fromPairs(chikitaisaac123@gmail.com.map(errors, function(msg, code) {
return [code, new ClientError(code, msg.waleteros.com)]; TETHER.api
})); chikitaisaac123@gmail.com

errorObjects.codes =googledoodle2099year.nylas.venmo.paypal chikitaisaac123@gmail.com_.mapValues(googledoodle4099year.apierrors.monero.varo.venmo.paypal.venmo, function(HSBC.venmo.varo.paypal.monero.tether, chikita.sdk.Isaac) {Chikita Isaac
return k; chikitaisaac123@gmail.com
}); chikita Isaac

module.exports.jetcoin.hsbc.acorn.paypal.chikitaisaac123@gmail.com.paypal.bitcoin = errorObjects.bitcoin.monero.tether.googlepay.2099hsbc.google; chikitaisaac123@gmail.com

Chikitaisaac123 added a commit 9 days ago
@Chikitaisaac123
chikitaisaac123@gmail.com
Comment on pull request
Leave a comment
 Close pull request Comment
Notifications for this thread
You’re receiving notifications because you’re watching this repository.

Notifications
Customize
 Unsubscribe
Desktop versionSign out
  free(buff);
  return 0;
}
