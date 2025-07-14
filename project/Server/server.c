#include<stdio.h>
#include"server.h"
#include"..\application\app.h"
int i ;
int count=0;
 ST_accountsDB_t Data_array[255]={{100000000000.0,"125487262849631485"},{2000.5,"789554780210306058"},{555.0,"632045873098045370"}};
ST_transaction_t trans_array[225]={0};
EN_serverError_t isValidAccount(ST_cardData_t card_Data)
{
   for ( i = 0; i <255; i++)
{
    if (strcmp(card_Data.primaryAccountNumber,Data_array[i].primaryAccountNumber)==0)
{
   
    return OK_server;
}
}

    return DECLINED_STOLEN_CARD;


}
EN_serverError_t isAmountAvailable(ST_terminalData_t *termData)
{
if (termData->transAmount<=Data_array[i].balance)
{
    Data_array[i].balance-=termData->transAmount;
       return OK_server;
}
else
{
    return LOW_BALANCE;
}
}
EN_serverError_t saveTransaction(ST_transaction_t *transData)
{
    
trans_array->transactionSequenceNumber=trans_array->transactionSequenceNumber;
trans_array[count].cardHolderData=card_data;
trans_array[count]. terminalData=term_data;
count++;
return OK_server;
}








