#include"card.h"
EN_cardError_t getCardHolderName(ST_cardData_t *cardData,ST_cardData_t card_Data)
{
if (strlen(card_Data.cardHolderName)>20 && strlen(card_Data.cardHolderName)<25 )
{
    return OK;
}
else
{
    return WRONG_NAME;
}
}

EN_cardError_t getCardExpiryDate(ST_cardData_t *cardData,ST_cardData_t card_Data)
{
     
if (strlen(card_Data.cardExpirationDate)==5 && card_Data.cardExpirationDate[0]>='0' && card_Data.cardExpirationDate[0]<='1' && card_Data.cardExpirationDate[1]>='0' && card_Data.cardExpirationDate[1]<='9' && card_Data.cardExpirationDate[3]>='0' && card_Data.cardExpirationDate[3]<='9' && card_Data.cardExpirationDate[4]>='0' && card_Data.cardExpirationDate[4]<='9' && card_Data.cardExpirationDate[2] =='/')
{
    return OK;
}
else
{
    return WRONG_EXP_DATE;
}
}
EN_cardError_t getCardPAN(ST_cardData_t *cardData,ST_cardData_t card_Data)
{
if (strlen(card_Data.primaryAccountNumber)>=16 && strlen(card_Data.primaryAccountNumber)<=19) 
{
   return OK;
}
else
{
    return WRONG_PAN;
}
}



 



