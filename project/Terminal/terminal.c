#include"terminal.h"
EN_terminalError_t getTransactionDate(ST_terminalData_t *termData,ST_terminalData_t term_Data)
{
if (strlen(term_Data.transactionDate)==10&&term_Data.transactionDate[0]>='0'&&term_Data.transactionDate[0]<='9'&&term_Data.transactionDate[1]>='0'&&term_Data.transactionDate[1]<='9'&&term_Data.transactionDate[3]>='0'&&term_Data.transactionDate[3]<='9'&&term_Data.transactionDate[4]>='0'&&term_Data.transactionDate[4]<='9'&&term_Data.transactionDate[2] =='/'&&term_Data.transactionDate[5]=='/'&&term_Data.transactionDate[5]=='/'&&term_Data.transactionDate[6]>='0'&&term_Data.transactionDate[6]<='9'&&term_Data.transactionDate[7]>='0'&&term_Data.transactionDate[7]<='9'&&term_Data.transactionDate[8]>='0'&&term_Data.transactionDate[8]<='9'&&term_Data.transactionDate[9]>='0'&&term_Data.transactionDate[9]<='9')
{
    return OK_terminal;
}
else
{
    return WRONG_DATE;
}
}
EN_terminalError_t isCardExpired(ST_terminalData_t *termData,ST_cardData_t card_Data,ST_terminalData_t term_Data)
{
    if (term_Data.transactionDate[8]>card_Data.cardExpirationDate[3])
    {
return EXPIRED_CARD;
}  
else if (term_Data.transactionDate[9]>card_Data.cardExpirationDate[4])
{
    return EXPIRED_CARD;
}
else return OK_terminal;
}
EN_terminalError_t getTransactionAmount(ST_terminalData_t *termData,ST_terminalData_t term_Data)
{
if (termData->transAmount>0)
{
    return OK_terminal;
}
else
{
    return INVALID_AMOUNT;
}
}
EN_terminalError_t setMaxAmount(ST_terminalData_t *termData,ST_terminalData_t term_Data)
{
if (termData->maxTransAmount>0)
{
    return OK_terminal;
}
else
{
    return INVALID_MAX_AMOUNT;
}
}
EN_terminalError_t isBelowMaxAmount(ST_terminalData_t *termData,ST_terminalData_t term_Data)
{
if (termData->maxTransAmount>termData->transAmount)
{
    return OK_terminal;
}
else
{
    return EXCEED_MAX_AMOUNT;
}




}





