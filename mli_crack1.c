#include <stdio.h>
#include <cs50.h>
#include <string.h>
#define _XOPEN_SOURCE
#include <unistd.h>
#include <crypt.h>
bool brute_force(string given_hash);

int main(int argc, string argv[])
{
	if (argc !=2)
	{
		printf("usage: ./crack hash\n");
		return 1;
	}
	if (!brute_force(argv[1]))
	return 1;
}
	bool brute_force(string given_hash)
	{
	string all = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char coll[5];
	char salt[3]; salt[0] = given_hash[0];salt[1] = given_hash[1]; salt[2] = '\0';

	for(int i = 0;i < 26+26;i++)
	{
		coll[0] = all[i];
		coll[1] = '\0';
		string new_hash = crypt(coll, salt);
		if (strcmp(new_hash, given_hash) == 0)
		{
			printf("%s\n", coll);
			return true;
		}
	}

	for(int i = 0;i < 26+26;i++)
	{
		coll[0] = all[i];
		for(int j = 0; j < 26+26; j++)
		{
		coll[1] = all[i];
		coll[2] = '\0';
		string new_hash = crypt(coll, salt);
		if (strcmp(new_hash, given_hash) == 0)
		{
			printf("%s\n", coll);
			return true;
		}
	}
}

		for(int i = 0;i < 26+26;i++)
		{
		coll[0] = all[i];
		for(int j = 0; j < 26+26; j++)
		{
		coll[1] = all[i];
		for(int k = 0; k < 26+26; k++)
		{
		coll[2] = all[i];
		coll[3] = '\0';
		string new_hash = crypt(coll, salt);
		if (strcmp(new_hash, given_hash) == 0)
		{
			printf("%s\n", coll);
			return true;
		}
	}
	}
	}

		for(int i = 0;i < 26+26;i++)
		{
		coll[0] = all[i];
		for(int j = 0; j < 26+26; j++)
		{
		coll[1] = all[i];
		for(int k = 0; k < 26+26; k++)
		{
		coll[2] = all[i];
		for(int l = 0; l < 26+26; l++)
		{
		coll[3] = all[i];
		coll[4] = '\0';
		string new_hash = crypt(coll, salt);
		if (strcmp(new_hash, given_hash) == 0)
		{
			printf("%s\n", coll);
			return true;
		}
		}
		}
		}
		}
		return false;
		}