#ifndef terminal_h
#define terminal_h
#include"..\card\card.h"
typedef unsigned char uint8_t;
typedef struct ST_terminalData_t
{
double transAmount;
double maxTransAmount;
uint8_t transactionDate[11];
}ST_terminalData_t;

typedef enum EN_terminalError_t
{
OK_terminal, WRONG_DATE, EXPIRED_CARD, INVALID_CARD, INVALID_AMOUNT, EXCEED_MAX_AMOUNT, INVALID_MAX_AMOUNT
}EN_terminalError_t ;
EN_terminalError_t getTransactionDate(ST_terminalData_t *termData,ST_terminalData_t term_Data);
EN_terminalError_t isCardExpired(ST_terminalData_t *termData,ST_cardData_t card_Data,ST_terminalData_t term_Data);
EN_terminalError_t isValidCardPAN(ST_cardData_t *cardData);
EN_terminalError_t getTransactionAmount(ST_terminalData_t *termData,ST_terminalData_t term_Data);
EN_terminalError_t isBelowMaxAmount(ST_terminalData_t *termData,ST_terminalData_t term_Data);
EN_terminalError_t setMaxAmount(ST_terminalData_t *termData,ST_terminalData_t term_Data);
#endif