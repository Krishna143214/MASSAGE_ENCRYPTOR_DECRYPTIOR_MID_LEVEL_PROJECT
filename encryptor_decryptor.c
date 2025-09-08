
#define _GNU_SOURCE
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define N 50000

void getval(char str3[])
{
	printf("\n------------------------------------------------------------\n\n");

	printf("\nEnter the massage to   \n");
	gets(str3);

	printf("\n------------------------------------------------------------\n\n");
}

void showval(char str2[])
{
	printf("\n------------------------------------------------------------\n\n");

	printf("\nYour Entered Massage Will Be :-\n");
	puts(str2);

	printf("\n------------------------------------------------------------\n\n");
}

void encrypt_massage(char str[])
{
	FILE *ptr;
	int round = 0;
	ptr = fopen("Encryption_permanet.txt", "a+");

	fprintf(ptr, "\n\n\n\n\n\n\nNEXT ENCRYPTION\n");

	fprintf(ptr, "\n------------------------------------------------------------\n\n");
	fprintf(ptr, "THE ENCRYPTION BEGAINS");
	fprintf(ptr, "\n------------------------------------------------------------\n\n");

	getval(str);
	showval(str);
	printf("\nENTER NO OF ROUNDS IN YOUR ENCRYPTION 1-10 \n");
	scanf("%d", &round);

	round = round % 11;
	printf("%d", round);

	printf("\n------------------------------------------------------------\n\n");

	for (int i = 0; i < round; i++)
	{
		int v = (rand()) % 50;
		printf("THE KYE OF %d ROUND IS %d\n", i, v);
		fprintf(ptr, "THE KYE OF %d ROUND IS %d\n", i, v);

		for (int j = 0; str[j] != '\0'; j++)
		{
			str[j] = str[j] ^ v;
		}

		printf("THE ENCRYPTED KYE AFTER %dST ROUND :-  %s\n", i, str);
		fprintf(ptr, "THE ENCRYPTED KYE AFTER %dST ROUND :-  %s\n", i, str);
	}

	printf("\n------------------------------------------------------------\n\n");

	fprintf(ptr, "\n------------------------------------------------------------\n\n");
	printf("\n\n\n\nTHE RESULTANT ENCRYPTED MASSAGE\n ");

	fprintf(ptr, "\n\n\n\nTHE RESULTANT ENCRYPTED MASSAGE\n ");

	fprintf(ptr, "%s", str);
	showval(str);

	printf("\n------------------------------------------------------------\n\n");

	fprintf(ptr, "\n------------------------------------------------------------\n\n");

	fclose(ptr);
}

void decrypt_massage(char a[])
{
	FILE *ptr2;
	ptr2 = fopen("decryption_permanent.txt", "a+");

	getval(a);
	showval(a);
	int kye = 0;
	printf("\nSTARTING DECRYPTING\n");
	fprintf(ptr2, "\n\n\n\n\n\n\n\nSTARTING DECRYPTING\n");
	printf("\n ENTER DECRYPTION KYE\n");

	printf("\n------------------------------------------------------------\n\n");

	fprintf(ptr2, "\n------------------------------------------------------------\n\n");

	scanf("%d", &kye);
	fprintf(ptr2, "\nDECRYPTION KYE\n\n\n", kye);

	for (int j = 0; a[j] != '\0'; j++)
	{
		a[j] = a[j] ^ kye;
	}

	printf("\nTHE DECRYPTED MASSAGE WILL BE\n :-");
	fprintf(ptr2, "\nTHE DECRYPTED MASSAGE WILL BE\n :-");

	showval(a);
	fprintf(ptr2, "%s", a);

	fclose(ptr2);
}

int main()
{
	srand(time(NULL));

	while (1)
	{
		char str[N];
		int ch;
		char str2[N];
		int Exit = 0;

		system("clear");

		printf("\n------------------------------------------------------------\n\n");

		printf("              MASSEGE ENCRYPTOR BY KRISHNA \n");

		printf("\n------------------------------------------------------------\n\n");

		printf(" BE UNDERSTAND PLEASE ENTER ALL THE CHOICE OPTION IN THE \nNUMRIC TYPE \n");
		printf(" IF YOU HIT ANY CHARACTER OTHER THAN THE NUMRIC THE PROGRAM WILL GO IN INFINITE LOOP \n");
		printf(" IF THIS PROGRAM IS GONE ON INFINITE LOOP PLEASE CLOSE THE \nPROGRAM AND RUN AGAIN \n\n:))) enjoy\n");

		printf("\n------------------------------------------------------------\n\n");

		printf("\nENTER THE OPERATION YOU WANNA PERFROM\n\n");

		printf("\n------------------------------------------------------------\n\n");

		printf("\n1.ENCRYPTION\n");
		printf("\n2.DECRYPTION\n");
		printf("\n3. EXIT\n");

		printf("\n------------------------------------------------------------\n\n");
		printf("\nENTER YOUR CHOICE\n\n");

		scanf("%d", &ch);
		getchar();

		switch (ch)
		{
		case 1:
		{
			printf("\n------------------------------------------------------------\n\n");

			printf("\n\nSO You Click On Encryption\n ");
			printf("\n------------------------------------------------------------\n\n");

			printf("\nPerforming Encryption\n ");
			printf("\n------------------------------------------------------------\n\n");

			encrypt_massage(str);

			printf("\n\n\n");
			printf("\n\nHIT ANY NUMBER TO RESTART\n ");
			int re;
			scanf("%d", &re);

			break;
		} //case 1

		case 2:
		{
			printf("\n------------------------------------------------------------\n\n");

			printf("\n\nSO You Click On Decryption\n ");
			printf("\n------------------------------------------------------------\n\n");

			printf("\nPerforming Decryption\n ");
			printf("\n------------------------------------------------------------\n\n");

			decrypt_massage(str2);

			printf("\n\n\n");
			printf("\n\nHIT ANY NUMBER TO RESTART\n ");
			int res;
			scanf("%d", &res);

			break;
		}

		case 3:
		{
			printf("\n------------------------------------------------------------\n\n");

			printf("\n\nSO You Click On EXIT\n ");
			printf("\n------------------------------------------------------------\n\n");

			printf("\nEXITING.........................!\n ");
			printf("\n------------------------------------------------------------\n\n");

			Exit++;

			break;
		}

		} //switch

		if (Exit > 0)
		{
			printf("bye");
			break;
		}
	}
}