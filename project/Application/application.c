#include<stdio.h>
#include<string.h>
#include"app.h"
#include"..\Card\card.c"
#include"..\terminal\terminal.c"
#include"..\server\server.c"
int app_start()
{
carddata = &card_data;
printf("%s\n","Enter your name with out space: ");
scanf("%s",&carddata->cardHolderName);
printf("%s\n","Enter your card Expiray Date ");
scanf("%s",&carddata->cardExpirationDate);
printf("%s","Enter primaryAccountNumber ");
scanf("%s",&carddata->primaryAccountNumber);
 getCardHolderName(carddata,card_data);
 if (getCardHolderName(carddata,card_data)==1)
 {
    printf("\n%s\n","Wrong Name");
 }
 getCardExpiryDate(carddata,card_data);
 if (getCardExpiryDate(carddata,card_data)==2)
 {
    printf("\n%s\n","WRONG_EXP_DATE");
 }
 getCardPAN(carddata,card_data);
 if (getCardPAN(carddata,card_data)==3)
 {
    printf("%s\n","WRONG_PAN");
 }
termdata=&term_data;
printf("%s\n","Enter your transaction date");
scanf("%s",&termdata->transactionDate);
printf("%s","Enter transaction amount: ");
scanf("%lf",&termdata->transAmount);
printf("%s","Enter maximum allowed amount into terminal data: ");
scanf("%lf",&termdata->maxTransAmount);
getTransactionDate(termdata,term_data);
if (getTransactionDate(termdata,term_data)==1)
{
    printf("%s\n","wrong date");
}
isCardExpired(termdata,card_data,term_data);
if (isCardExpired(termdata,card_data,term_data)==2)
{
    printf("%s\n","Expired card");
    return 0;
}
getTransactionAmount(termdata,term_data);
if (getTransactionAmount(termdata,term_data)==4)
{
   printf("%s\n","Invalid Amount");
}
setMaxAmount(termdata,term_data);
if (setMaxAmount(termdata,term_data)==6)
{
   printf("%s\n","Invalid Max Amount");
}
isBelowMaxAmount(termdata,term_data);
if (isBelowMaxAmount(termdata,term_data)==5)
{
   printf("%s\n","Exceed Max Amount");
   return 0;
}
isValidAccount(card_data);
if (isValidAccount(card_data)==2)
{
   printf("%s","Declined Stolen Card");
   printf("%s","Saving field"); 

return 0;
}
isAmountAvailable(termdata);
if (isAmountAvailable(termdata)==0)
{
   printf("%s\n","APPROVED");
   printf("%s","Transaction saved");
}   
   else
   {
       printf("%s\n","DECLINED Insufficient balance");
return 0;
   }

return 0;
}
