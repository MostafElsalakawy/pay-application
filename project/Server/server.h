#ifndef server_h
#define server_h
#include"..\Card\card.h"
#include"..\terminal\terminal.h"
typedef unsigned char uint8_t;
typedef unsigned int uint32_t;
typedef enum EN_transState_t
{
APPROVED, DECLINED_INSUFFECIENT_FUND, DECLINED_STOLEN_CARD, INTERNAL_SERVER_ERROR
}EN_transStat_t;
typedef enum EN_serverError_t
{
OK_server, SAVING_FAILED, TRANSACTION_NOT_FOUND, ACCOUNT_NOT_FOUND, LOW_BALANCE
}EN_serverError_t ;
typedef struct ST_transaction_t
{
ST_cardData_t cardHolderData;  
ST_terminalData_t terminalData;
uint32_t transactionSequenceNumber;
}ST_transaction_t;
typedef struct ST_accountsDB_t
{
double balance;
uint8_t primaryAccountNumber[20];
}ST_accountsDB_t;
EN_transStat_t recieveTransactionData(ST_cardData_t *carData,ST_terminalData_t *termData);
EN_serverError_t isValidAccount(ST_cardData_t card_Data);
EN_serverError_t isAmountAvailable(ST_terminalData_t *termData);
EN_serverError_t saveTransaction(ST_transaction_t *transData);
EN_serverError_t getTransaction(uint32_t transactionSequenceNumber, ST_transaction_t *transData);
#endif