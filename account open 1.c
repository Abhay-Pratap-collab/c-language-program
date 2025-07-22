#include <stdio.h>
#include <string.h>

void main() {
    char name[50], fathername[50], mothername[50],address[50],password[50];
    char adhar[20], pan[20], mobile[20],accountnumber[50];
    int ch, year, month, date,diff;
    printf("\n\n");
	printf("Services\tFAQ\tCorporate Website\t SBIepay lite \tDonation\tSBI Collect\t Videos\tmCash\n");
	printf("............................................................................................................\n\n");
    printf("\t\t\t\t\t______________________________\n");
    printf("\t\t\t\t\tWELCOME TO STATE BANK OF INDIA\n");
    printf("\t\t\t\t\t-------------------------------\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t!! Apne Liye, Apno Ke Liye !!\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\nHow Can I Help You?\n\n");
   
    printf("\n\nFacilities of SBI for Customers:\n");
    printf("********************************\n\n");
    printf("1 - Open Saving Account\n");
    printf("2 - Open Current Account\n");
    printf("3 - Home Loans\n");
    printf("4 - Education Loans\n");
    printf("5 - Car Loans\n");
    printf("6 - Gold Loans\n");
    printf("7 - Business Loans\n");
    printf("8 - Card Services\n\n");
    printf("Enter Your Choice \n");
    
    scanf("%d", &ch);
    getchar();  // Clear newline

    switch (ch) {
        case 1:
        	printf("\t\t\t............................................................................\n");
            printf("\t\t\t\t\t\t FILL THIS FORM \n");
	printf("\t\t\t............................................................................\n");
           printf("\n\n\t\t\t\t\t\tFILL PERSONAL INFORAMATION \n");
           printf("\t\t\t\t\t_____________________________________________\n\n\n");
		    printf("Enter Your Name:\n");
			fflush(stdin);
			gets(name);
            printf("\n\nEnter Your Father's Name:\n");
			gets(fathername);
            printf("Enter Your Mother's Name:\n");
			gets(mothername);
	 		printf("Enter Address\n");
            fgets(address, sizeof(address), stdin);

          printf("Enter Date of Birth:\n");
            printf("Date: ");
            scanf("%d", &date);
            printf("Month: ");
            scanf("%d", &month);
            printf("Year: ");
            scanf("%d", &year);
            int diff=2025-year; // to find age of customer 
            if(diff>=18)
            {
            	//if customers age above or equal 18 then proceed next otherwise go to else 
			

           printf("Enter Aadhaar Number: ");
            scanf("%s", adhar);
            if (strlen(adhar) == 12) // strlen define the lenth of string 
			 {
                printf("Enter PAN Number: ");
                scanf("%s", pan);
                if (strlen(pan) == 10) // strlen define the lengh of string  
				{
                    printf("Enter Mobile Number: ");
                    scanf("%s", mobile);
                    if (strlen(mobile) == 10) {
                        printf("\n");
                    } else //for year 
					{
                        printf("Invalid Mobile Number.\n");
                    }
                } else // for pan  
				{
                    printf("Invalid PAN Number.\n");
                }
            } else // for adhar  
			{
                printf("Invalid Aadhaar Number.\n");
            }
            
            strupr(name);
            strupr(fathername);
            strupr(mothername);
            strupr(address);

            printf("\n\t\t\t\tSAVING ACCOUNT OPENING SUCCESSFUL!\n");
printf("\t\t\t\t-----------------------------------\n");
printf("Name           : %s\n", name);
printf("Father's Name  : %s\n", fathername);
printf("Mother's Name  : %s\n", mothername);
printf("Address        : %s\n", address);
printf("DOB            : %02d-%02d-%04d\n", date, month, year); //%02d usage becasue formate of date it means the date has only numbers 
printf("Aadhaar Number : %s\n", adhar);
printf("PAN Number     : %s\n", pan);
printf("Mobile Number  : %s\n", mobile);
printf("Account Number : 123456789\n"); // acoount number for open home and othersloan 
printf("Your Password : ranapratap \n\n");
printf("!! THANKYOU !!");
}

else
{
	printf("minnor"); // for age 
}


            break;
            case 2:
            	printf("\t\t\t............................................................................\n");
            printf("\t\t\t\t\t\t FILL THIS FORM \n");
	printf("\t\t\t............................................................................\n");
           printf("\n\n\t\t\t\t\t\tFILL PERSONAL INFORAMATION \n");
           printf("\t\t\t\t\t_____________________________________________\n\n\n");
		    printf("Enter Your Name:\n");
            fgets(name, sizeof(name), stdin);

            printf("\n\nEnter Your Father's Name:\n");
            fgets(fathername, sizeof(fathername), stdin);

            printf("Enter Your Mother's Name:\n");
            fgets(mothername, sizeof(mothername), stdin);
 			printf("Enter Address\n");
            fgets(address, sizeof(address), stdin);

            printf("Enter Date of Birth:\n");
            printf("Date: ");
            scanf("%d", &date);
            printf("Month: ");
            scanf("%d", &month);
            printf("Year: ");
            scanf("%d", &year);
			diff=2025-year;
            if(year>=18){
            	
			
            

            printf("Enter Aadhaar Number: ");
            scanf("%s", adhar);
            if (strlen(adhar) == 12) {
                printf("Enter PAN Number: ");
                scanf("%s", pan);
                if (strlen(pan) == 10) {
                    printf("Enter Mobile Number: ");
                    scanf("%s", mobile);
                    if (strlen(mobile) == 10) {
                        printf("\n");
                    } else {
                        printf("Invalid Mobile Number.\n");
                    }
                } else {
                    printf("Invalid PAN Number.\n");
                }
            } else {
                printf("Invalid Aadhaar Number.\n");
            }

            printf("\n\t\t\t SAVING ACCOUNT OPENING SUCCESSFUL!\n");
printf("\t\t\t----------------------------\n");
printf("Name           : %s\n", name);
printf("Father's Name  : %s\n", fathername);
printf("Mother's Name  : %s\n", mothername);
printf("Address        : %s\n", address);
printf("DOB            : %02d-%02d-%04d\n", date, month, year);
printf("Aadhaar Number : %s\n", adhar);
printf("PAN Number     : %s\n", pan);
printf("Mobile Number  : %s\n", mobile);
}
else
{
	printf("minnor");
}


            break;
            case 3:
            	printf("account number 123456789\n");
            	printf("password is == ranapratap\n");
            	printf("Enter Your Account Number ");
            	fgets(accountnumber, sizeof(accountnumber), stdin);
            	if(strcmp(accountnumber,"123456789")==0)// for open the form 
            	{
				
            	printf("Enter Your Password ");
            	fgets(password, sizeof(password), stdin);
            	if(strcmp(password,"ranapratap")==0)// for open the form 
            	{
				
            		printf("\t\t\t............................................................................\n");
            printf("\t\t\t\t\t\t FILL THIS FORM \n");
	printf("\t\t\t............................................................................\n");
           printf("\n\n\t\t\t\t\t\tFILL PERSONAL INFORAMATION \n");
           printf("\t\t\t\t\t_____________________________________________\n\n\n");
		    printf("Enter Your Name:\n");
            fgets(name, sizeof(name), stdin);

            printf("\n\nEnter Your Father's Name:\n");
            fgets(fathername, sizeof(fathername), stdin);

            printf("Enter Your Mother's Name:\n");
            fgets(mothername, sizeof(mothername), stdin);
 			printf("Enter Address\n");
            fgets(address, sizeof(address), stdin);

            printf("Enter Date of Birth:\n");
            printf("Date: ");
            scanf("%d", &date);
            printf("Month: ");
            scanf("%d", &month);
            printf("Year: ");
            scanf("%d", &year);
					

            printf("Enter Aadhaar Number: ");
            scanf("%s", adhar);
            if (strlen(adhar) == 12) {
                printf("Enter PAN Number: ");
                scanf("%s", pan);
                if (strlen(pan) == 10) {
                    printf("Enter Mobile Number: ");
                    scanf("%s", mobile);
                    if (strlen(mobile) == 10) {
                        printf("\n");
                    } else {
                        printf("Invalid Mobile Number.\n");
                    }
                } else {
                    printf("Invalid PAN Number.\n");
                }
            } else {
                printf("Invalid Aadhaar Number.\n");
            }
            int income;
            printf("Enter Income certificate number ");
            scanf("%d",&income);
            int monthlyincome;
			printf("enter Monthy Income ");
            scanf("%d",&monthlyincome);
        
			
            

            printf("\n\t\t\t HOME LOAN SUCCESSFUL!\n");
printf("\t\t\t----------------------------\n");
printf("Name           : %s\n", name);
printf("Father's Name  : %s\n", fathername);
printf("Mother's Name  : %s\n", mothername);
printf("Address        : %s\n", address);
printf("DOB            : %02d-%02d-%04d\n", date, month, year);
printf("Aadhaar Number : %s\n", adhar);
printf("PAN Number     : %s\n", pan);
printf("Mobile Number  : %s\n", mobile);
printf("Loan Amount    : 5 lakh\n");}

	



            break;
            case 4:
            		printf("account number 123456789\n");
            	printf("password is == ranapratap\n");
            	printf("Enter Your Account Number ");
            	fgets(accountnumber, sizeof(accountnumber), stdin);
            	if(strcmp(accountnumber,"123456789")==0)
            	{
				
            	printf("Enter Your Password ");
            	fgets(password, sizeof(password), stdin);
            	if(strcmp(password,"ranapratap")==0)
            	{
				
            		printf("\t\t\t............................................................................\n");
            printf("\t\t\t\t\t\t FILL THIS FORM \n");
	printf("\t\t\t............................................................................\n");
           printf("\n\n\t\t\t\t\t\tFILL PERSONAL INFORAMATION \n");
           printf("\t\t\t\t\t_____________________________________________\n\n\n");
		    printf("Enter Your Name:\n");
            fgets(name, sizeof(name), stdin);

            printf("\n\nEnter Your Father's Name:\n");
            fgets(fathername, sizeof(fathername), stdin);

            printf("Enter Your Mother's Name:\n");
            fgets(mothername, sizeof(mothername), stdin);
 			printf("Enter Address\n");
            fgets(address, sizeof(address), stdin);

            printf("Enter Date of Birth:\n");
            printf("Date: ");
            scanf("%d", &date);
            printf("Month: ");
            scanf("%d", &month);
            printf("Year: ");
            scanf("%d", &year);

            printf("Enter Aadhaar Number: ");
            scanf("%s", adhar);
            if (strlen(adhar) == 12) {
                printf("Enter PAN Number: ");
                scanf("%s", pan);
                if (strlen(pan) == 10) {
                    printf("Enter Mobile Number: ");
                    scanf("%s", mobile);
                    if (strlen(mobile) == 10) {
                        printf("\n");
                    } else {
                        printf("Invalid Mobile Number.\n");
                    }
                } else {
                    printf("Invalid PAN Number.\n");
                }
            } else {
                printf("Invalid Aadhaar Number.\n");
            }
            int income;
            printf("Enter Income certificate number ");
            scanf("%d",&income);
            

            printf("\n\t\t\t EDUCATION LOAN SUCCESSFUL!\n");
printf("\t\t\t----------------------------\n");
printf("Name           : %s\n", name);
printf("Father's Name  : %s\n", fathername);
printf("Mother's Name  : %s\n", mothername);
printf("Address        : %s\n", address);
printf("DOB            : %02d-%02d-%04d\n", date, month, year);
printf("Aadhaar Number : %s\n", adhar);
printf("PAN Number     : %s\n", pan);
printf("Mobile Number  : %s\n", mobile);}
else
{
	printf("Wrong Password ");
}
}
else
{
	printf("Wrong Account Number ");
}


            break;
            case 5:
            		printf("account number 123456789\n");
            	printf("password is == ranapratap\n");
            	printf("Enter Your Account Number ");
            	fgets(accountnumber, sizeof(accountnumber), stdin);
            	if(strcmp(accountnumber,"123456789")==0)
            	{
				
            	printf("Enter Your Password ");
            	fgets(password, sizeof(password), stdin);
            	if(strcmp(password,"ranapratap")==0)
            	{
				
            		printf("\t\t\t............................................................................\n");
            printf("\t\t\t\t\t\t FILL THIS FORM \n");
	printf("\t\t\t............................................................................\n");
           printf("\n\n\t\t\t\t\t\tFILL PERSONAL INFORAMATION \n");
           printf("\t\t\t\t\t_____________________________________________\n\n\n");
		    printf("Enter Your Name:\n");
            fgets(name, sizeof(name), stdin);

            printf("\n\nEnter Your Father's Name:\n");
            fgets(fathername, sizeof(fathername), stdin);

            printf("Enter Your Mother's Name:\n");
            fgets(mothername, sizeof(mothername), stdin);
 			printf("Enter Address\n");
            fgets(address, sizeof(address), stdin);

            printf("Enter Date of Birth:\n");
            printf("Date: ");
            scanf("%d", &date);
            printf("Month: ");
            scanf("%d", &month);
            printf("Year: ");
            scanf("%d", &year);

            printf("Enter Aadhaar Number: ");
            scanf("%s", adhar);
            if (strlen(adhar) == 12) {
                printf("Enter PAN Number: ");
                scanf("%s", pan);
                if (strlen(pan) == 10) {
                    printf("Enter Mobile Number: ");
                    scanf("%s", mobile);
                    if (strlen(mobile) == 10) {
                        printf("\n");
                    } else {
                        printf("Invalid Mobile Number.\n");
                    }
                } else {
                    printf("Invalid PAN Number.\n");
                }
            } else {
                printf("Invalid Aadhaar Number.\n");
            }
            int income;
            printf("Enter Income certificate number ");
            scanf("%d",&income);
            

            printf("\n\t\t\t HOME LOAN SUCCESSFUL!\n");
printf("\t\t\t----------------------------\n");
printf("Name           : %s\n", name);
printf("Father's Name  : %s\n", fathername);
printf("Mother's Name  : %s\n", mothername);
printf("Address        : %s\n", address);
printf("DOB            : %02d-%02d-%04d\n", date, month, year);
printf("Aadhaar Number : %s\n", adhar);
printf("PAN Number     : %s\n", pan);
printf("Mobile Number  : %s\n", mobile);}
else
{
	printf("Wrong Password ");
}
}
else
{
	printf("Wrong Account Number ");
}


            break;
            case 6:
            		printf("account number 123456789\n");
            	printf("password is == ranapratap\n");
            	printf("Enter Your Account Number ");
            	fgets(accountnumber, sizeof(accountnumber), stdin);
            	if(strcmp(accountnumber,"123456789")==0)
            	{
				
            	printf("Enter Your Password ");
            	fgets(password, sizeof(password), stdin);
            	if(strcmp(password,"ranapratap")==0)
            	{
				
            		printf("\t\t\t............................................................................\n");
            printf("\t\t\t\t\t\t FILL THIS FORM \n");
	printf("\t\t\t............................................................................\n");
           printf("\n\n\t\t\t\t\t\tFILL PERSONAL INFORAMATION \n");
           printf("\t\t\t\t\t_____________________________________________\n\n\n");
		    printf("Enter Your Name:\n");
            fgets(name, sizeof(name), stdin);

            printf("\n\nEnter Your Father's Name:\n");
            fgets(fathername, sizeof(fathername), stdin);

            printf("Enter Your Mother's Name:\n");
            fgets(mothername, sizeof(mothername), stdin);
 			printf("Enter Address\n");
            fgets(address, sizeof(address), stdin);

            printf("Enter Date of Birth:\n");
            printf("Date: ");
            scanf("%d", &date);
            printf("Month: ");
            scanf("%d", &month);
            printf("Year: ");
            scanf("%d", &year);

            printf("Enter Aadhaar Number: ");
            scanf("%s", adhar);
            if (strlen(adhar) == 12) {
                printf("Enter PAN Number: ");
                scanf("%s", pan);
                if (strlen(pan) == 10) {
                    printf("Enter Mobile Number: ");
                    scanf("%s", mobile);
                    if (strlen(mobile) == 10) {
                        printf("\n");
                    } else {
                        printf("Invalid Mobile Number.\n");
                    }
                } else {
                    printf("Invalid PAN Number.\n");
                }
            } else {
                printf("Invalid Aadhaar Number.\n");
            }
            int income;
            printf("Enter Income certificate number ");
            scanf("%d",&income);
            

            printf("\n\t\t\t HOME LOAN SUCCESSFUL!\n");
printf("\t\t\t----------------------------\n");
printf("Name           : %s\n", name);
printf("Father's Name  : %s\n", fathername);
printf("Mother's Name  : %s\n", mothername);
printf("Address        : %s\n", address);
printf("DOB            : %02d-%02d-%04d\n", date, month, year);
printf("Aadhaar Number : %s\n", adhar);
printf("PAN Number     : %s\n", pan);
printf("Mobile Number  : %s\n", mobile);}
else
{
	printf("Wrong Password ");
}
}
else
{
	printf("Wrong Account Number ");
}


            break;
            case 7:
            		printf("account number 123456789\n");
            	printf("password is == ranapratap\n");
            	printf("Enter Your Account Number ");
            fgets(accountnumber, sizeof(accountnumber), stdin);
            	if(strcmp(accountnumber,"123456789")==0)
            	{
				
            	printf("Enter Your Password ");
            fgets(password, sizeof(password), stdin);
            	if(strcmp(password,"ranapratap")==0)
            	{
				
            		printf("\t\t\t............................................................................\n");
            printf("\t\t\t\t\t\t FILL THIS FORM \n");
	printf("\t\t\t............................................................................\n");
           printf("\n\n\t\t\t\t\t\tFILL PERSONAL INFORAMATION \n");
           printf("\t\t\t\t\t_____________________________________________\n\n\n");
		    printf("Enter Your Name:\n");
            fgets(name, sizeof(name), stdin);

            printf("\n\nEnter Your Father's Name:\n");
            fgets(fathername, sizeof(fathername), stdin);

            printf("Enter Your Mother's Name:\n");
            fgets(mothername, sizeof(mothername), stdin);
 			printf("Enter Address\n");
            fgets(address, sizeof(address), stdin);

            printf("Enter Date of Birth:\n");
            printf("Date: ");
            scanf("%d", &date);
            printf("Month: ");
            scanf("%d", &month);
            printf("Year: ");
            scanf("%d", &year);

            printf("Enter Aadhaar Number: ");
            scanf("%s", adhar);
            if (strlen(adhar) == 12) {
                printf("Enter PAN Number: ");
                scanf("%s", pan);
                if (strlen(pan) == 10) {
                    printf("Enter Mobile Number: ");
                    scanf("%s", mobile);
                    if (strlen(mobile) == 10) {
                        printf("\n");
                    } else {
                        printf("Invalid Mobile Number.\n");
                    }
                } else {
                    printf("Invalid PAN Number.\n");
                }
            } else {
                printf("Invalid Aadhaar Number.\n");
            }
            int income;
            printf("Enter Income certificate number ");
            scanf("%d",&income);
            

            printf("\n\t\t\t BUSINESS LOAN SUCCESSFUL!\n");
printf("\t\t\t----------------------------\n");
printf("Name           : %s\n", name);
printf("Father's Name  : %s\n", fathername);
printf("Mother's Name  : %s\n", mothername);
printf("Address        : %s\n", address);
printf("DOB            : %02d-%02d-%04d\n", date, month, year);
printf("Aadhaar Number : %s\n", adhar);
printf("PAN Number     : %s\n", pan);
printf("Mobile Number  : %s\n", mobile);}
else
{
	printf("Wrong Password ");
}
}
else
{
	printf("Wrong Account Number ");
}


            break;
            case 8:
            		printf("account number 123456789\n");
            	printf("password is == ranapratap\n");
            	printf("Enter Your Account Number ");
            	fgets(accountnumber, sizeof(accountnumber), stdin);
            	if(strcmp(accountnumber,"123456789")==0)
            	{
				
            	printf("Enter Your Password ");
            	fgets(password, sizeof(password), stdin);
            	if(strcmp(password,"ranapratap")==0)
            	{
				
            		printf("\t\t\t............................................................................\n");
            printf("\t\t\t\t\t\t FILL THIS FORM \n");
	printf("\t\t\t............................................................................\n");
           printf("\n\n\t\t\t\t\t\tFILL PERSONAL INFORAMATION \n");
           printf("\t\t\t\t\t_____________________________________________\n\n\n");
		    printf("Enter Your Name:\n");
            fgets(name, sizeof(name), stdin);

            printf("\n\nEnter Your Father's Name:\n");
            fgets(fathername, sizeof(fathername), stdin);

            printf("Enter Your Mother's Name:\n");
            fgets(mothername, sizeof(mothername), stdin);
 			printf("Enter Address\n");
            fgets(address, sizeof(address), stdin);

            printf("Enter Date of Birth:\n");
            printf("Date: ");
            scanf("%d", &date);
            printf("Month: ");
            scanf("%d", &month);
            printf("Year: ");
            scanf("%d", &year);

            printf("Enter Aadhaar Number: ");
            scanf("%s", adhar);
            if (strlen(adhar) == 12) {
                printf("Enter PAN Number: ");
                scanf("%s", pan);
                if (strlen(pan) == 10) {
                    printf("Enter Mobile Number: ");
                    scanf("%s", mobile);
                    if (strlen(mobile) == 10) {
                        printf("\n");
                    } else {
                        printf("Invalid Mobile Number.\n");
                    }
                } else {
                    printf("Invalid PAN Number.\n");
                }
            } else {
                printf("Invalid Aadhaar Number.\n");
            }
            int income;
            printf("Enter Income certificate number ");
            scanf("%d",&income);
            

            printf("\n\t\t\t  SUCCESSFUL!\n");
printf("\t\t\t----------------------------\n");
printf("Name           : %s\n", name);
printf("Father's Name  : %s\n", fathername);
printf("Mother's Name  : %s\n", mothername);
printf("Address        : %s\n", address);
printf("DOB            : %02d-%02d-%04d\n", date, month, year);
printf("Aadhaar Number : %s\n", adhar);
printf("PAN Number     : %s\n", pan);
printf("Mobile Number  : %s\n", mobile);
printf("Card Number    : 987456321");


}
else
{
	printf("Wrong Password ");
}
}
else
{
	printf("Wrong Account Number ");
}


            break;

        default:
            printf("Invalid Choice.\n");
    }
}
}

